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
	
	void yyerror(char *);
        int yylex(void);

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
%token UNKNOWN

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


%type <sval> program decl_var type var pos_elem arr_elements integ fl str build_func func scan_params len_params cmp_params print_params decl_func name_func params type_params code_func decl_ops arithm_expr sign assign val cmp_expr merge_arr

%start program

%%

/* Ορισμός των γραμματικών κανόνων. Κάθε φορά που αντιστοιχίζεται ένας γραμματικός
   κανόνας με τα δεδομένα εισόδου, εκτελείται ο κώδικας C που βρίσκεται ανάμεσα στα
   αγκύλια. Η αναμενόμενη σύνταξη είναι:
				όνομα : κανόνας { κώδικας C } */
program:
/* Δηλώσεις Μεταβλητών */
        program decl_var NEWLINE                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
/* Ενσωματωμένες συναρτήσεις */
        | program build_func NEWLINE            { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
/* Συναρτήσεις του χρήστη */
        | program decl_func NEWLINE             { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
/* Εκφράσεις αριθμητικές, συγκρίσεις, συνένωνση πινάκων, ανάθεση τιμής σε μεταβλητή */
        | program decl_ops NEWLINE              { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, $2); }
/* Αλλαγή γραμμής */
        | program NEWLINE                       { }
/* Κενή γραμμή */
        |                                       { }                              
        ;

/* === [2.1] Δομή Πηγαίου Κώδικα === */

/* === [2.2] Δηλώσεις Μεταβλητών === */
decl_var:
        type var ";" { $$ = "\"Δήλωση Μεταβλητής\""; }
        ;
type: 
        SINT             { $$ = strdup(yytext); }
        | SFLOAT         { $$ = strdup(yytext); }
        | SDOUBLE        { $$ = strdup(yytext); }
        | SSHORT         { $$ = strdup(yytext); }
        | SLONG          { $$ = strdup(yytext); }
        ;
var:
        IDENTIFIER              { $$ = strdup(yytext); }
        | var "," var           { $$ = strdup(yytext); }
        ;

/* === [2.3] Πίνακες === */
pos_elem:
        IDENTIFIER "[" INTEGER "]"      { $$ = strdup(yytext); }
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

/* === [2.4] Ενσωματωμένες απλές συναρτήσεις === */
build_func:
	func ";" { $$ = "\"Ενσωματωμένη απλή συνάρτηση\""; }
	;
func:
        SSCAN "(" scan_params ")"        { $$ = strdup(yytext); }        
        | SLEN "(" len_params ")"        { $$ = strdup(yytext); }
        | SCMP "(" cmp_params ")"        { $$ = strdup(yytext); }
        | SPRINT "(" print_params ")"    { $$ = strdup(yytext); }
        ;
scan_params:
        IDENTIFIER       { $$ = strdup(yytext); }
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

/* === [2.5] Δήλωση συναρτήσεων χρήστη === */
decl_func:
        name_func code_func { $$ = "\"Δήλωση συναρτήσεων χρήστη\""; }
	;
name_func: 
        IDENTIFIER                       { $$ = strdup(yytext); }
        | SFUNC name_func params NEWLINE { $$ = strdup(yytext); }
        ;
params:
        "(" ")"                 { $$ = strdup(yytext); }
        |"(" type_params ")"    { $$ = strdup(yytext); }
        ;
type_params:
        type IDENTIFIER                 { $$ = strdup(yytext); }
        | type_params "," type_params   { $$ = strdup(yytext); }
        ;
code_func:
        "{" NEWLINE "}" { $$=strdup(yytext); }
        ;

/* === [2.6] Δηλώσεις απλών εκφράσεων === */
decl_ops:
        arithm_expr             { $$ = "\"Αριθμητική έκφραση\""; }
        | assign                { $$ = "\"Ανάθεση τιμής σε μεταβλητή\""; } 
        | cmp_expr              { $$ = "\"Σύγκριση\""; }
        | merge_arr             { $$ = "\"Συνένωση Πινάκων\""; }
        ;
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
        ;
/* [2.6.2] Αναθέσεις τιμών σε μεταβλητή */
assign:
        var "=" val ";" { $$ = strdup(yytext); }
val: 
    INTEGER             { $$ = strdup(yytext); }
    | FLOAT             { $$ = strdup(yytext); }
    | STRING            { $$ = strdup(yytext); }
    | arr_elements      { $$ = strdup(yytext); } 
    | val "," val       { $$ = strdup(yytext); }
    ;
/* [2.6.3] Συγκρίσεις */
cmp_expr:
	INTEGER   		  { $$ = strdup(yytext); }
        | FLOAT                   { $$ = strdup(yytext); }
	| IDENTIFIER              { $$ = strdup(yytext); }
	| cmp_expr ">"  cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "<"  cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "<=" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr ">=" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "==" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "!=" cmp_expr  { $$ = strdup(yytext); }
        ;
/* [2.6.4] Συνένωση Πινάκων */
merge_arr:
        arr_elements "+" arr_elements { $$ = strdup(yytext); }
        ;
        
/* === [2.7] Σύνθετες δηλώσεις === */

 

%%




/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}

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

	if (errflag == 0 && parse == 0)
		fprintf(yyout, "\n[%d] ΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\n", parse);
        else
		fprintf(yyout, "\n[%d] ΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\n", parse);
        
        fclose(yyin);
        fclose(yyout);

	return 0;
} 
