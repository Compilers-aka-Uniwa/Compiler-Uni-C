%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define YYDEBUG 1

int line = 1;
int errflag = 0;
int fatal_error_count = 0;

extern char *yytext;

void yyerror(char *);
void SyntaxError(const char *);

extern int yylex(void);
extern FILE *yyin;
extern FILE *yyout;
%}

%union {
    int ival;
    float fval;
    char *sval;
}

%token <sval> IDENTIFIER STRING 
%token <ival> INTEGER 
%token <fval> FLOAT 
%token <sval> SBREAK SDO SIF SSIZEOF SCASE SDOUBLE SINT SSTRUCT SFUNC SELSE SLONG SSWITCH SCONST SFLOAT SRETURN SVOID SCONTINUE SFOR SSHORT SWHILE 
%token PLUS "+" MULEQ "*=" PMINEQ "--" MINUS "-" DIVEQ "/=" LT "<" MUL "*" NOT "!" GT ">" DIV "/" AND "&&" LEQ "<=" MOD "%" OR "||" GREQ ">=" ASSIGN "=" EQUAL "==" ADDR "&" PLUSEQ "+=" NOTEQ "!=" MINEQ "-=" PPLUSEQ "++" OPENPAR "(" CLOSEPAR ")" OPENSQBRA "[" CLOSESQBRA "]" OPENCURBRA "{" CLOSECURBRA "}" COMMA "," BACKSLASH "\\" DELIMITER ";" SSCAN SPRINT SLEN SCMP NEWLINE UNKNOWN

%left ","   
%right "*=" "/=" "+=" "-=" "="
%left "||" 
%left "&&" 
%left "==" "!=" 
%left "<" ">" "<=" ">="  
%left "+" "-"                   
%left "*" "/" "%"
%right "&" "!" 
%left "++" "--"

%type <sval> program oper_eq number block_statement decl_statements decl_var type var pos_elem arr_elements integ fl str build_func func scan_params len_params cmp_params print_params decl_func name_func params type_params arithm_expr sign assign val cmp_expr merge_arr decl_statement if_statement condition while_statement for_statement

%start program

%%

program:
        program decl_statements NEWLINE         { if ($2 != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); } 
        | program error_stmt            	{ } 
        |                                       { }                       
        ;

decl_var:
        type var { $$ = strdup(yytext); }
        ;

type: 
        SINT             { $$ = strdup(yytext); }
        | SFLOAT         { $$ = strdup(yytext); }
        | SDOUBLE        { $$ = strdup(yytext); }
        | SSHORT         { $$ = strdup(yytext); }
        | SLONG          { $$ = strdup(yytext); }
        ;

var:
        IDENTIFIER     { $$ = strdup(yytext); }
        | var "," var  { $$ = strdup(yytext); }
        ;

pos_elem:
        IDENTIFIER "[" INTEGER "]"           { $$ = strdup(yytext); }
        | IDENTIFIER "[" IDENTIFIER "]"      { $$ = strdup(yytext); }
        ;

arr_elements:
        "[" "]"                         { $$ = strdup(yytext); }
        | "[" integ "]"                 { $$ = strdup(yytext); }
        | "[" fl "]"                    { $$ = strdup(yytext); }
        | "[" str "]"                   { $$ = strdup(yytext); }       
        ;

integ:
        INTEGER                 { $$ = strdup(yytext); }
        | integ "," integ       { $$ = strdup(yytext); }
        ;

fl:
        FLOAT                   { $$ = strdup(yytext); }
        | fl "," fl             { $$ = strdup(yytext); }
        ;

str:
        STRING                  { $$ = strdup(yytext); }  
        | str "," str           { $$ = strdup(yytext); }
        ;

build_func:
	func  { $$ = strdup(yytext); }
	;

func:
        SSCAN "(" scan_params ")"         { $$ = strdup(yytext); }        
        | SLEN "(" len_params ")"         { $$ = strdup(yytext); }
        | SCMP "(" cmp_params ")"         { $$ = strdup(yytext); }
        | SPRINT "(" print_params ")"     { $$ = strdup(yytext); }
        | IDENTIFIER "(" print_params ")" { $$ = strdup(yytext); }
        ;

scan_params:
        IDENTIFIER      { $$ = strdup(yytext); }
        ;

len_params:
        arr_elements    { $$ = strdup(yytext); }
        | STRING        { $$ = strdup(yytext); }
        | IDENTIFIER    { $$ = strdup(yytext); }
        ;

cmp_params:
        STRING                          { $$ = strdup(yytext); }
        | IDENTIFIER                    { $$ = strdup(yytext); }
        | cmp_params "," cmp_params     { $$ = strdup(yytext); }
        ;

print_params:
        STRING                          { $$ = strdup(yytext); }
        | IDENTIFIER                    { $$ = strdup(yytext); }
        | INTEGER                       { $$ = strdup(yytext); }
        | FLOAT                         { $$ = strdup(yytext); }
        | func                          { $$ = strdup(yytext); }
        | pos_elem                      { $$ = strdup(yytext); }
        | print_params "," print_params { $$ = strdup(yytext); }
        ;

decl_func:
        name_func decl_statement { $$ = strdup(yytext); }
	;

name_func: 
        SFUNC                                   { $$ = strdup(yytext); }
        | name_func IDENTIFIER params NEWLINE   { $$ = strdup(yytext); }
        ;

params:
        "(" ")"                 { $$ = strdup(yytext); }
        |"(" type_params ")"    { $$ = strdup(yytext); }
        ;

type_params:
        type IDENTIFIER                 { $$ = strdup(yytext); }
        | type_params "," type_params   { $$ = strdup(yytext); }
        ;

sign:
        INTEGER         { $$ = strdup(yytext); }
        | FLOAT         { $$ = strdup(yytext); }
        | "+" sign      { $$ = strdup(yytext); }
        | "-" sign      { $$ = strdup(yytext); }
        ;

arithm_expr:
        sign                            { $$ = strdup(yytext); }
        | IDENTIFIER                    { $$ = strdup(yytext); }
        | arithm_expr "+" arithm_expr   { $$ = strdup(yytext); }
        | arithm_expr "-" arithm_expr   { $$ = strdup(yytext); }
        | arithm_expr "*" arithm_expr   { $$ = strdup(yytext); }
        | arithm_expr "/" arithm_expr   { $$ = strdup(yytext); }
        | arithm_expr "%" arithm_expr   { $$ = strdup(yytext); }
        ;

number:
        INTEGER     { $$ = strdup(yytext); }
        | FLOAT     { $$ = strdup(yytext); }
        | pos_elem  { $$ = strdup(yytext); }
        ;

assign:
        var "=" val               { $$ = strdup(yytext); } 
        | var "=" cmp_expr        { $$ = strdup(yytext); }
        | var "=" arithm_expr     { $$ = strdup(yytext); }
        | var "=" merge_arr       { $$ = strdup(yytext); }
        | oper_eq                 { $$ = strdup(yytext); }
        ;

oper_eq:
        var "++"                  { $$ = strdup(yytext); }
        | var "--"                { $$ = strdup(yytext); }
        | "++" var                { $$ = strdup(yytext); }
        | "--" var                { $$ = strdup(yytext); }
        | var "+=" number         { $$ = strdup(yytext); }
        | var "-=" number         { $$ = strdup(yytext); }
        | var "*=" number         { $$ = strdup(yytext); }
        | var "/=" number         { $$ = strdup(yytext); }
        ;

val: 
    number              { $$ = strdup(yytext); }
    | IDENTIFIER        { $$ = strdup(yytext); }
    | STRING            { $$ = strdup(yytext); }
    | arr_elements      { $$ = strdup(yytext); } 
    | val "," val       { $$ = strdup(yytext); }
    ;

cmp_expr:
        INTEGER                   { $$ = strdup(yytext); }
        | FLOAT                   { $$ = strdup(yytext); }
        | IDENTIFIER              { $$ = strdup(yytext); }
        | cmp_expr ">" cmp_expr   { $$ = strdup(yytext); }
        | cmp_expr "<" cmp_expr   { $$ = strdup(yytext); }
        | cmp_expr "<=" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr ">=" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "==" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "!=" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "||" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "&&" cmp_expr  { $$ = strdup(yytext); }
        ;

merge_arr:
        "{" arr_elements "}"      { $$ = strdup(yytext); }
        ;

decl_statements:
        block_statement DELIMITER                  { $$ = strdup(yytext); } 
        | decl_statement DELIMITER                 { $$ = strdup(yytext); }
        ;

block_statement:
        OPENCURBRA decl_statement CLOSECURBRA      { $$ = strdup(yytext); }
        ;

decl_statement:
        type var DELIMITER                         { $$ = strdup(yytext); }
        | decl_func                                { $$ = strdup(yytext); }
        | assign                                   { $$ = strdup(yytext); }
        | if_statement                             { $$ = strdup(yytext); }
        | condition                                { $$ = strdup(yytext); }
        | while_statement                          { $$ = strdup(yytext); }
        | for_statement                            { $$ = strdup(yytext); }
        | func                                     { $$ = strdup(yytext); }
        ;

if_statement:
        SIF OPENPAR cmp_expr CLOSEPAR block_statement 
        {
            $$ = strdup(yytext);
        }
        | SIF OPENPAR cmp_expr CLOSEPAR block_statement SELSE block_statement 
        {
            $$ = strdup(yytext);
        }
        ;

condition:
        SIF OPENPAR cmp_expr CLOSEPAR block_statement SELSE condition
        {
            $$ = strdup(yytext);
        }
        | SIF OPENPAR cmp_expr CLOSEPAR block_statement SELSE block_statement
        {
            $$ = strdup(yytext);
        }
        ;

while_statement:
        SWHILE OPENPAR cmp_expr CLOSEPAR block_statement
        {
            $$ = strdup(yytext);
        }
        ;

for_statement:
        SFOR OPENPAR assign DELIMITER cmp_expr DELIMITER assign CLOSEPAR block_statement 
        {
            $$ = strdup(yytext);
        }
        ;

error_stmt:
    error NEWLINE       { SyntaxError("Invalid statement"); }
    | error DELIMITER   { SyntaxError("Invalid statement"); }
    ;

%%

void SyntaxError(const char *s) {
    fprintf(stderr, "Syntax Error: %s at line %d\n", s, line);
    errflag++;
    // Η μέθοδος του πανικού: αναγνωρίζουμε και παραβλέπουμε tokens μέχρι το τέλος γραμμής ή τη δήλωση.
    while (1) {
        int tok = yylex();
        if (tok == NEWLINE || tok == DELIMITER || tok == 0) {
            break;
        }
    }
}

void yyerror(char *s) {
    SyntaxError(s);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: Could not open input file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
    }

    if (argc > 2) {
        yyout = fopen(argv[2], "w");
        if (!yyout) {
            fprintf(stderr, "Error: Could not open output file %s\n", argv[2]);
            return 1;
        }
    } else {
        yyout = stdout;
    }

    yyparse();

    if (yyin && yyin != stdin) fclose(yyin);
    if (yyout && yyout != stdout) fclose(yyout);

    return (fatal_error_count > 0) ? 1 : 0;
}

