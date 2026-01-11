%{
/* C language definitions and declarations. Anything related to defining or initializing
   variables & functions, header files, and #define declarations goes here */
        
        #include <stdio.h>
        #include <string.h>
	#include <stdlib.h>
        #define YYSTYPE char*
        #define YYDEBUG 1

	int line = 1;
	int errflag = 0;

	extern char *yytext;
        int correct_words = 0;
        int correct_exprs = 0;
        int fatal_errors = 0; 
        int par_warnings = 0;
        int lex_warnings = 0;
	
        int yylex();
	void yyerror(const char *msg);

        /* The yyin pointer is the one that "points" to the input file. If yyin is not used,
 then input is taken exclusively from standard input (keyboard). */

        extern FILE *yyin;
        extern FILE *yyout;
%}

/* Definition of recognizable lexical units. */
%token  IDENTIFIER STRING 
%token  INTEGER 
%token  FLOAT 
%token  SBREAK SDO SIF SSIZEOF SCASE SDOUBLE SINT SSTRUCT SFUNC SELSE SLONG SSWITCH SCONST SFLOAT SRETURN SVOID SCONTINUE SFOR SSHORT SWHILE 
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
%token TOKEN_ERROR

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

 
/* Start of program*/
%start program

%%

/* Definition of grammar rules. Each time a grammar
   rule matches the input data, the C code between the
   braces is executed. The expected syntax is:
				name : rule { C code } */
program:
        program decl_statements NEWLINE                   { correct_exprs++; if ($2 != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
        | program error NEWLINE                           { fatal_errors++; errflag = 1; yyerrok; }
        | program merge_arr TOKEN_ERROR merge_arr NEWLINE { yyerrok; } 
        |                                                 { }                       
        ;
       

/* Definition of grammar rules. Each time a grammar
   rule matches the input data, the C code between the
   braces is executed. The expected syntax is:
				name : rule { C code } */
program:
        program decl_statements NEWLINE                   { correct_exprs++; if ($2 != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
        | program error NEWLINE                           { fatal_errors++; errflag = 1; yyerrok; }
        | program merge_arr TOKEN_ERROR merge_arr NEWLINE { yyerrok; } 
        |                                                 { }                       
        ;
       

/* ============== [2.2] Variable Declarations ============== */
decl_var:
        type var { $$ = strdup(yytext); }
        ;

type: 
        SINT              { $$ = strdup(yytext); }
        | SFLOAT          { $$ = strdup(yytext); }
        | SDOUBLE         { $$ = strdup(yytext); }
        | SSHORT          { $$ = strdup(yytext); }
        | SLONG           { $$ = strdup(yytext); }
        /* ## Warning ## -> Extra keyword in variable declaration */
        | SFLOAT SFLOAT   { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double float detected at Line=%d\n", line); }
        | SDOUBLE SDOUBLE { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double double detected at Line=%d\n", line); }
        | SINT SINT       { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double int detected at Line=%d\n", line); }
        | SLONG SLONG     { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double long detected at Line=%d\n", line); }
        | SSHORT SSHORT   { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double short detected at Line=%d\n", line); }
        /* ################################################## */
        ;

var:
        IDENTIFIER     { $$ = strdup(yytext); }
        | var "," var  { $$ = strdup(yytext); }
        ;

/* ============== [2.3] Arrays ============== */
pos_elem:
        IDENTIFIER "[" INTEGER "]"      { $$ = strdup(yytext); }
        | IDENTIFIER "[" IDENTIFIER "]" { $$ = strdup(yytext); }
        ;


arr_elements:
        "[" "]"           { $$ = strdup(yytext); }
        | "[" integ "]"   { $$ = strdup(yytext); }
        | "[" fl "]"      { $$ = strdup(yytext); }
        | "[" str "]"     { $$ = strdup(yytext); }    
        | "[" var "]"     { $$ = strdup(yytext); }
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
        /* ## Warning ## -> Return type in functions */
        | SFUNC type                            { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Return type unnecessary at Line=%d\n", line); }
        /* ################################################## */
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
        | IDENTIFIER    { $$ = strdup(yytext); }
        | "+" sign      { $$ = strdup(yytext); }
        | "-" sign      { $$ = strdup(yytext); }
        ;

arithm_expr:
        sign                            { $$ = strdup(yytext); }
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
        | var "+=" val            { $$ = strdup(yytext); }
        | var "-=" val2           { $$ = strdup(yytext); }
        | var "*=" val2           { $$ = strdup(yytext); }
        | var "/=" val2           { $$ = strdup(yytext); }
        ;

val2:
    number              { $$ = strdup(yytext); }
    | IDENTIFIER        { $$ = strdup(yytext); }
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
        /* ## Warning ## -> Double comparison symbol */
        | cmp_expr ">" ">" cmp_expr { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double > detected at Line=%d\n", line-1); } 
        | cmp_expr "<" "<" cmp_expr { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double < detected at Line=%d\n", line-1); }
        /* ################################################## */
        ;

/* [2.6.4] Array merging */
merge_arr:
        arr_elements                          { $$ = strdup(yytext); }
        | merge_arr "+" merge_arr             { $$ = strdup(yytext); }
        /* ## Warning ## -> Invalid characters in array merge */ 
        | merge_arr TOKEN_ERROR "+" merge_arr { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Invalid character in array merge detected at Line=%d\n", line); }
        | merge_arr "+" TOKEN_ERROR merge_arr { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Invalid character in array merge detected at Line=%d\n", line); }
        /* ################################################## */
        ;

        

/* ============== [2.7] Compound statements ============== */
decl_statements:
        decl_statement                   { $$ = $1;  }
        | decl_statements decl_statement { $$ = $2;  if ($2 != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
        ;

decl_statement:
        if_statement                     { $$ = "\"If statement\""; }
        | while_statement                { $$ = "\"While statement\""; }
        | for_statement                  { $$ = "\"For statement\""; }
        | decl_var ";"                   { $$ = "\"Variable declaration\""; }
        | build_func ";"                 { $$ = "\"Function call\""; }
        | decl_func                      { $$ = "\"User function declaration\""; }
        | assign ";"                     { $$ = "\"Variable assignment\""; }
        | arithm_expr                    { $$ = "\"Arithmetic expression\""; }
        | cmp_expr                       { $$ = "\"Comparison\""; }
        | merge_arr                      { $$ = "\"Array merging\""; }
        | block_statement                { $$ = "\"Compound statements\""; } 
        | NEWLINE                        { $$ = "\n"; }
        ;

/* [2.7.1] If statement */
if_statement:
        SIF condition decl_statement     { $$ = strdup(yytext); }
        ;

condition:
        cmp_expr               { $$ = strdup(yytext); }
        | "(" condition ")"    { $$ = strdup(yytext); }
        /* ## Warning ## -> Extra parentheses in if, while statements */
        | "(" "(" condition ")" ")"   { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "## Warning ## -> Double parethensis detected at Line=%d\n", line); }
        /* ################################################## */
        ;

block_statement:
        "{" decl_statements "}" { $$ = strdup(yytext); }
        ;

/* [2.7.2] While statement */
while_statement:
        SWHILE condition decl_statement { $$ = strdup(yytext); }
        ;

/* [2.7.3] For statement */
for_statement:
        SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement { $$ = strdup(yytext); }
        ;

%%


/* The main function which serves as the entry point of the program.
   In this specific case, it simply calls the yyparse function of Bison
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

        fprintf(yyout, "\n\n\t\tSYNTAX ANALYSIS STATISTICS\n\n");

        if (errflag == 0 && parse == 0) 
                fprintf(yyout, "BISON -> Syntax analysis completed successfully\n");
        else
                fprintf(yyout, "BISON -> Syntax analysis completed with failure\n");
        
        if (par_warnings > 0)
                fprintf(yyout, "\t\t(with %d warnings)\n\n", par_warnings);

       
        fprintf(yyout, "\t\tCORRECT WORDS: %d\n", correct_words);
        fprintf(yyout, "\t\tCORRECT EXPRESSIONS: %d\n", correct_exprs);
        fprintf(yyout, "\t\tINCORRECT WORDS: %d\n", lex_warnings);
        fprintf(yyout, "\t\tINCORRECT EXPRESSIONS: %d\n", fatal_errors);
        fprintf(yyout, "\n");

        fclose(yyin);
        fclose(yyout);

	return 0;
} 
