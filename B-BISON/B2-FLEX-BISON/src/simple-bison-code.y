%{
/* C language definitions and declarations. Anything related to defining or initializing
   variables & functions, header files, and #define declarations goes here */
        
        #include <stdio.h>
        #include <string.h>
	#include <stdlib.h>
        #define YYDEBUG 1

	int line = 1;
	int errflag = 0;

	extern char *yytext;
	
	void yyerror(char *);
        int yylex(void);

        /* The yyin pointer is the one that "points" to the input file. If yyin is not used,
 then input is taken exclusively from standard input (keyboard). */

        extern FILE *yyin;
        extern FILE *yyout;
%}

%union {
    int ival;
    float fval;
    char *sval;
}


/* Definition of recognizable lexical units. */
%token <sval> IDENTIFIER STRING 
%token <ival> INTEGER 
%token <fval> FLOAT 
%token <sval> SBREAK SDO SIF SSIZEOF SCASE SDOUBLE SINT SSTRUCT SFUNC SELSE SLONG SSWITCH SCONST SFLOAT SRETURN SVOID SCONTINUE SFOR SSHORT SWHILE 
%token PLUS "+"
%token MULEQ "*="
%token PMINEQ "--"
%token MINUS "-"
%token DIVEQ "/="
%token LT "<"
%token MUL "*"
%token NOT "!"
%token GT ">" 
%token DIV "/"
%token AND "&&"
%token LEQ "<="
%token MOD "%"
%token OR "||"
%token GREQ ">="
%token ASSIGN "="
%token EQUAL "=="
%token ADDR "&"
%token PLUSEQ "+="
%token NOTEQ "!="
%token MINEQ "-="
%token PPLUSEQ "++"
%token OPENPAR "("
%token CLOSEPAR ")"
%token OPENSQBRA "["
%token CLOSESQBRA "]"
%token OPENCURBRA "{"
%token CLOSECURBRA "}"
%token COMMA ","
%token BACKSLASH "\\"
%token DELIMITER ";"
%token SSCAN SPRINT SLEN SCMP
%token NEWLINE
%token UNKNOWN

/* Definition of token precedences */
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


%type <sval> program oper_eq number block_statement decl_statements decl_var type var pos_elem arr_elements integ fl str build_func func scan_params len_params cmp_params print_params decl_func name_func params type_params  arithm_expr sign assign val cmp_expr merge_arr decl_statement if_statement condition while_statement  for_statement

%start program

%%

/* Definition of grammar rules. Each time a grammar
   rule matches the input data, the C code between the
   braces is executed. The expected syntax is:
				name : rule { C code } */
program:
        program decl_statements NEWLINE         { if ($2 != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); } 
        |                                       { }                       
        ;

/* ============== [2.1] Structure of Source Code ============== */

/* ============== [2.2] Variable Declarations ============== */
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

/* ============== [2.3] Arrays ============== */
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

/* ============== [2.4] Built-in simple functions ============== */
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

/* ============== [2.5] User function declarations ============== */
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

/* ============== [2.6] Simple expression declarations ============== */
/* [2.6.1] Arithmetic expressions */
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


/* [2.6.2] Assignments to variables */
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

/* [2.6.3] Comparisons */
cmp_expr:
	INTEGER   		  { $$ = strdup(yytext); }
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
        | "!" cmp_expr            { $$ = strdup(yytext); }
        ;

/* [2.6.4] Array merging */
merge_arr:
        arr_elements "+" arr_elements { $$ = strdup(yytext); }
        ;
        
/* ============== [2.7] Complex statements ============== */
decl_statements:
        decl_statement                   { $$ = $1; }
        | decl_statements decl_statement { $$ = $2; }
        ;

decl_statement:
        if_statement                     { $$ = "\"State if\""; }
        | while_statement                { $$ = "\"State while\""; }
        | for_statement                  { $$ = "\"State for\""; }
        | decl_var ";"                   { $$ = "\"Variable declaration\""; }
        | build_func ";"                 { $$ = "\"Function call\""; }
        | decl_func                      { $$ = "\"User function declaration\""; }
        | assign ";"                     { $$ = "\"Variable assignment\""; }
        | arithm_expr                    { $$ = "\"Arithmetic expression\""; }
        | cmp_expr                       { $$ = "\"Comparison\""; }
        | merge_arr                      { $$ = "\"Array merging\""; }
        | block_statement                { $$ = "\"Complex statements\""; } 
        | NEWLINE                        { $$ = "\n"; }
        ;

/* [2.7.1] The if statement */
if_statement:
        SIF condition decl_statement     { $$ = strdup(yytext); }
        ;

condition:
        cmp_expr            { $$ = strdup(yytext); }
        | "(" condition ")" { $$ = strdup(yytext); }
        ;

block_statement:
        "{" decl_statements "}" {  $$ = strdup(yytext); }
        ;

/* [2.7.2] The while statement */
while_statement:
        SWHILE condition decl_statement { $$ = strdup(yytext); }
        ;

/* [2.7.3] The for statement */
for_statement:
        SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement { $$ = strdup(yytext); }
        ;

%%




/* The yyerror function is used for reporting errors. Specifically, it is called
   by yyparse when a syntax error occurs. In the following case, the
   function essentially prints an error message to the screen. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}

/* The main function which serves as the entry point of the program.
   In this specific case, it simply calls the Bison function yyparse
   to start the syntactic analysis. */
int main(int argc, char **argv)  
{       
        yydebug = 0;

	if (argc == 3)
        {
                if (!(yyin = fopen(argv[1], "r"))) 
                {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
                if (!(yyout = fopen(argv[2], "w"))) 
                {
                        fprintf(stderr, "Cannot create file: %s\n", argv[2]);
                        return 1;
                }
        }
		
	int parse = yyparse();

	if (errflag == 0 && parse == 0)
		fprintf(yyout, "\nINPUT FILE     : PARSING SUCCEEDED.\nSTATUS CODE    : %d\n", parse);
        else
		fprintf(yyout, "\nINPUT FILE     : PARSING FAILED.\nSTATUS CODE    : %d\n", parse);
        
        fclose(yyin);
        fclose(yyout);

	return 0;
} 
