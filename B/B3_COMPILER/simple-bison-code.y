%{
/* Ορισμοί και δηλώσεις γλώσσας C. Οτιδήποτε έχει να κάνει με ορισμό ή αρχικοποίηση
   μεταβλητών & συναρτήσεων, αρχεία header και δηλώσεις #define μπαίνει σε αυτό το σημείο */
        
        #include <stdio.h>
        #include <string.h>
	#include <stdlib.h>
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

        /* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

        extern FILE *yyin;
        extern FILE *yyout;
%}

%union {
    int ival;
    float fval;
    char *sval;
}


/* Ορισμός των αναγνωρίσιμων λεκτικών μονάδων. */
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

/* Ορισμός προτεραιοτήτων στα tokens */
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


%type <sval> program oper_eq number block_statement decl_statements decl_var type var pos_elem arr_elements integ fl str build_func func scan_params len_params cmp_params print_params decl_func name_func params type_params  arithm_expr sign assign val cmp_expr merge_arr decl_statement if_statement condition while_statement for_statement

/* BUG DECLARATION*/
%token TOKEN_ERROR 

/* Έναρξη προγραμμάτος*/
%start program

%%

/* Ορισμός των γραμματικών κανόνων. Κάθε φορά που αντιστοιχίζεται ένας γραμματικός
   κανόνας με τα δεδομένα εισόδου, εκτελείται ο κώδικας C που βρίσκεται ανάμεσα στα
   αγκύλια. Η αναμενόμενη σύνταξη είναι:
				όνομα : κανόνας { κώδικας C } */
program:
        program decl_statements NEWLINE         { correct_exprs++; if ($2 != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
        | program error NEWLINE                 { fatal_errors++; errflag = 1; yyerrok; }
        | program merge_arr TOKEN_ERROR merge_arr NEWLINE { yyerrok; } 
        |                                       { }                       
        ;
       

/* ============== [2.1] Δομή Πηγαίου Κώδικα ============== */

/* ============== [2.2] Δηλώσεις Μεταβλητών ============== */
decl_var:
        type var { $$ = strdup(yytext); }
        ;

type: 
        SINT             { $$ = strdup(yytext); }
        | SINT SINT      {par_warnings; $$ = strdup(yytext); fprintf(yyout, "Warning: Double int detected at Line=%d\n", line); }
        | SFLOAT         { $$ = strdup(yytext); }
        | SFLOAT SFLOAT  {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double float detected at Line=%d\n", line); }
        | SDOUBLE        { $$ = strdup(yytext); }
        | SDOUBLE SDOUBLE {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double double detected at Line=%d\n", line); }
        | SSHORT         { $$ = strdup(yytext); }
        | SSHORT SSHORT  {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double short detected at Line=%d\n", line); }
        | SLONG          { $$ = strdup(yytext); }
        | SLONG SLONG    {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double long detected at Line=%d\n", line); }
        ;

var:
        IDENTIFIER     { $$ = strdup(yytext); }
        | var "," var  { $$ = strdup(yytext); }
        ;

/* ============== [2.3] Πίνακες ============== */
pos_elem:
        IDENTIFIER "[" INTEGER "]"{ $$ = strdup(yytext); }
        | IDENTIFIER "[" IDENTIFIER "]" { $$ = strdup(yytext); }
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

/* ============== [2.4] Ενσωματωμένες απλές συναρτήσεις ============== */
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

/* ============== [2.5] Δήλωση συναρτήσεων χρήστη ============== */
decl_func:
        name_func decl_statement { $$ = strdup(yytext); }
	;

name_func: 
        SFUNC                                   { $$ = strdup(yytext); }
        | SFUNC type                            { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Return type unnecessary at Line=%d\n", line);}
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

/* ============== [2.6] Δηλώσεις απλών εκφράσεων ============== */
/* [2.6.1] Αριθμητικές εκφράσεις */
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


/* [2.6.2] Αναθέσεις τιμών σε μεταβλητή */
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

/* [2.6.3] Συγκρίσεις */
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
        /* Warning: Έλεγχος για διπλά σύμβολα σύγκρισης */
        | cmp_expr ">" ">" arithm_expr { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double > detected at Line=%d\n", line-1); } 
        | cmp_expr "<" "<" arithm_expr { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double < detected at Line=%d\n", line-1); }
        ;

/* [2.6.4] Συνένωση Πινάκων */
merge_arr:
        arr_elements { $$ = strdup(yytext); }
        | merge_arr "+" merge_arr { $$ = strdup(yytext); }
        | merge_arr TOKEN_ERROR "+" merge_arr {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
        | merge_arr "+" TOKEN_ERROR merge_arr {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
        | merge_arr "++" merge_arr {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: ++ operation in array merge detected at Line=%d\n", line);} 
        /*arr_elements "+" arr_elements { $$ = strdup(yytext); }
        | arr_elements "+" TOKEN_ERROR arr_elements {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
        | arr_elements TOKEN_ERROR "+" arr_elements {par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
        */
        ;

        
/* ============== [2.7] Σύνθετες δηλώσεις ============== */
decl_statements:
        decl_statement                   { $$ = $1; }
        | decl_statements decl_statement { $$ = $2; }
        ;

decl_statement:
        if_statement                     { $$ = "\"Δήλωση if\""; }
        | while_statement                { $$ = "\"Δήλωση while\""; }
        | for_statement                  { $$ = "\"Δήλωση for\""; }
        | decl_var ";"                   { $$ = "\"Δήλωση μεταβλητής\""; }
        | build_func ";"                 { $$ = "\"Κλήση συνάρτησης\""; }
        | decl_func                      { $$ = "\"Δήλωση συναρτήσεων χρήστη\""; }
        | assign ";"                     { $$ = "\"Ανάθεση τιμής σε μεταβλητή\""; }
        | arithm_expr                    { $$ = "\"Αριθμητική έκφραση\""; }
        | cmp_expr                       { $$ = "\"Σύγκριση\""; }
        | merge_arr                      { $$ = "\"Συνένωση πινάκων\""; }
        | block_statement                { $$ = "\"Σύνθετες δηλώσεις\""; } 
        | NEWLINE                        { $$ = "\n"; }
        ;

/* [2.7.1] Η δήλωση if */
if_statement:
        SIF condition decl_statement     { $$ = strdup(yytext); }
        ;

condition:
        cmp_expr            { $$ = strdup(yytext); }
        | "(" condition ")" { $$ = strdup(yytext); }
        //Warning : Έλεγχος για διπλά σύμβολα παρένθεση ή παράλλειψη τους
        | "((" condition ")"    { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double ( detected at Line=%d\n", line); }
        | "(" condition "))"    { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: Double ) detected at Line=%d\n", line); }
        | condition ")"           { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: No ( detected at Line=%d\n", line);}
        | "(" condition            { par_warnings++; $$ = strdup(yytext); fprintf(yyout, "Warning: No ) detected at Line=%d\n", line);}
        ;

block_statement:
        "{" decl_statements "}" {  $$ = strdup(yytext); }
        ;

/* [2.7.2] Η δήλωση while */
while_statement:
        SWHILE condition decl_statement { $$ = strdup(yytext); }
        ;

/* [2.7.3] Η δήλωση for */
for_statement:
        SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement { $$ = strdup(yytext); }
        ;

%%




/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
/*void yyerror(const char *msg) {
        fprintf(stderr, "Error: %s\n", msg);
}*/

/* Η συνάρτηση main που αποτελεί και το σημείο εκκίνησης του προγράμματος.
   Στην συγκεκριμένη περίπτωση απλά καλεί τη συνάρτηση yyparse του Bison
   για να ξεκινήσει η συντακτική ανάλυση. */
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

        fprintf(yyout, "\n\n\t\tΣΤΑΤΙΣΤΙΚΑ ΣΥΝΤΑΚΤΙΚΗΣ ΑΝΑΛΥΣΗΣ\n\n");

        if (errflag == 0 && parse == 0) 
                fprintf(yyout, "BISON -> Η συντακτική ανάλυση ολοκλήρωθηκε με επιτυχία\n");
        else
                fprintf(yyout, "BISON -> Η συντακτική ανάλυση ολοκλήρωθηκε με αποτυχία\n");
        
        if (par_warnings > 0)
                fprintf(yyout, "\t\t(με %d warnings)\n\n", par_warnings);

       
        fprintf(yyout, "\t\tΣΩΣΤΕΣ ΛΕΞΕΙΣ: %d\n", correct_words);
        fprintf(yyout, "\t\tΣΩΣΤΕΣ ΕΚΦΡΑΣΕΙΣ: %d\n", correct_exprs);
        fprintf(yyout, "\t\tΛΑΘΟΣ ΛΕΞΕΙΣ: %d\n", lex_warnings);
        fprintf(yyout, "\t\tΛΑΘΟΣ ΕΚΦΡΑΣΕΙΣ: %d\n", fatal_errors);
        fprintf(yyout, "\n");

        fclose(yyin);
        fclose(yyout);

	return 0;
} 
