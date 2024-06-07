/* Όνομα αρχείου:       simple-bison-code.y
   Περιγραφή:           Υπόδειγμα για ανάπτυξη συντακτικού αναλυτή με χρήση του εργαλείου Bison
   Συγγραφέας:          Εργαστήριο Μεταγλωττιστών, Τμήμα Μηχανικών Πληροφορικής και Υπολογιστών,
                        Πανεπιστήμιο Δυτικής Αττικής
   Σχόλια:              Το παρόν πρόγραμμα υλοποιεί (με τη χρήση Bison) έναν απλό συντακτικό αναλυτή
			που αναγνωρίζει την πρόσθεση ακεραίων αριθμών (δεκαδικού συστήματος) & μεταβλητών
			και εκτυπώνει το αποτέλεσμα στην οθόνη (θεωρώντας ότι οι μεταβλητές έχουν
			πάντα την τιμή 0). Λειτουργεί αυτόνομα, δηλαδή χωρίς Flex και αναγνωρίζει κενά
			(space & tab), ακεραίους (δεκαδικού συστήματος) και ονόματα μεταβλητών της γλώσσας
			Uni-C ενώ διαχειρίζεται τους ειδικούς χαρακτήρες νέας γραμμής '\n' (new line)
			και 'EOF' (end of file). Καθαρά για λόγους debugging τυπώνει στην οθόνη οτιδήποτε
			επιστρέφει η συνάρτηση yylex().
   Οδηγίες εκτέλεσης:   Δίνετε "make" χωρίς τα εισαγωγικά στον τρέχοντα κατάλογο. Εναλλακτικά:
			bison -o simple-bison-code.c simple-bison-code.y
                        gcc -o simple-bison-code simple-bison-code.c
                        ./simple-bison-code
*/

%{
/* Ορισμοί και δηλώσεις γλώσσας C. Οτιδήποτε έχει να κάνει με ορισμό ή αρχικοποίηση
   μεταβλητών & συναρτήσεων, αρχεία header και δηλώσεις #define μπαίνει σε αυτό το σημείο */
        
        #include <stdio.h>
	#include <stdlib.h>
        #define YYSTYPE char*
        #define YYDEBUG 1
	
	int line = 1;
	int errflag = 0;
	extern char *yytext;
	
	void yyerror(char *);

        /* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

        extern FILE *yyin;
        extern FILE *yyout;
%}



/* Ορισμός των αναγνωρίσιμων λεκτικών μονάδων. */
%token IDENTIFIER STRING 
%token INTEGER FLOAT 
%token BREAK DO IF SIZEOF CASE DOUBLE INT STRUCT FUNC ELSE LONG SWITCH CONST FLOAT_KEY RETURN VOID CONTINUE FOR SHORT WHILE 
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
%token ASSIGNOP "="
%token EQUAL "=="
%token ADDROP "&"
%token PLUSEQ "+="
%token NOTEQ "!="
%token MINEQ "-="
%token PPLUSEQ "++"
%token OPEN_PARENTHESIS "("
%token CLOSE_PARENTHESIS ")"
%token OPEN_SQ_BRACKET "["
%token CLOSE_SQ_BRACKET "]"
%token OPEN_CU_BRACKET "{"
%token CLOSE_CU_BRACKET "}"
%token COMMA ","
%token BACKSLASH "\\"
%token DELIMITER ";"
%token SCAN PRINT LEN CMP
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

%start program

%%

/* Ορισμός των γραμματικών κανόνων. Κάθε φορά που αντιστοιχίζεται ένας γραμματικός
   κανόνας με τα δεδομένα εισόδου, εκτελείται ο κώδικας C που βρίσκεται ανάμεσα στα
   αγκύλια. Η αναμενόμενη σύνταξη είναι:
				όνομα : κανόνας { κώδικας C } */
program:
        program decl_var NEWLINE                { fprintf(yyout, "[BISON] [2.2] Δηλώσεις Μεταβλητών\n\n"); }
        | program decl_arr NEWLINE              { fprintf(yyout, "[BISON] [2.3] Πίνακες\n\n"); }
        | program build_func NEWLINE            { fprintf(yyout, "[BISON] [2.4] Ενσωματωμένες απλές συναρτήσεις\n\n");}
        | program decl_func NEWLINE             { fprintf(yyout, "[BISON] [2.5] Δήλωση συναρτήσεων χρήστη\n\n");}
        | program decl_operations NEWLINE       { fprintf(yyout, "[BISON] [2.6] Δηλώσεις απλών εκφράσεων\n\n"); }
        | program NEWLINE                       { }
        |                                      
        ;

/* === [2.1] Δομή Πηγαίου Κώδικα === */

/* === [2.2] Δηλώσεις Μεταβλητών === */
decl_var:
        type var ";" { fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση Μεταβλητής\"", line); }
        ;
type: 
        INT             { $$ = strdup(yytext); }
        | FLOAT_KEY     { $$ = strdup(yytext); }
        | DOUBLE        { $$ = strdup(yytext); }
        | SHORT         { $$ = strdup(yytext); }
        | LONG          { $$ = strdup(yytext); }
        ;
var:
        IDENTIFIER              { $$ = strdup(yytext); }
        | var "," var           { $$ = strdup(yytext); }
        ;

/* === [2.3] Πίνακες === */
decl_arr:
        IDENTIFIER "=" elements ";" { fprintf(yyout, "[BISON] Line= %d, expression=\"Δήλωση Πίνακα\"", line); }
        ;
pos_elem:
        IDENTIFIER "[" INTEGER "]"  { $$ = strdup(yytext); }
elements:
        "[" "]"                 {$$ = strdup(yytext); }
        | "[" arr_int "]"       { $$ = strdup(yytext); }
        | "[" arr_fl "]"        { $$ = strdup(yytext); }
        | "[" arr_str "]"       { $$ = strdup(yytext); }       
        ;  
arr_int:
        INTEGER                 { $$ = $1; }
        | arr_int "," arr_int   { $$ = strdup(yytext); }
        ;
arr_fl:
        FLOAT                   { $$ = $1; }
        | arr_fl "," arr_fl     { $$ = strdup(yytext); }
        ;
arr_str:
        STRING                  { $$ = strdup(yytext); }  
        | arr_str "," arr_str   { $$ = strdup(yytext); }
        ;

/* === [2.4] Ενσωματωμένες απλές συναρτήσεις === */
build_func:
	func ";" { fprintf(yyout, "[BISON] Line=%d, expression=\"Ενσωματωμένη απλή συνάρτηση\"", line); }
	;
func:
        SCAN "(" scan_params ")"        { $$ = strdup(yytext); }        
        | LEN "(" len_params ")"        { $$ = strdup(yytext); }
        | CMP "(" cmp_params ")"        { $$ = strdup(yytext); }
        | PRINT "(" print_params ")"    { $$ = strdup(yytext); }
        ;
scan_params:
        IDENTIFIER { $$ = strdup(yytext); }
        ;
len_params:
        elements        { $$ = strdup(yytext); }
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
        | INTEGER                       { $$ = strdup(yytext);}
        | func                          { $$ = strdup(yytext); }
        | pos_elem                      { $$ = strdup(yytext); }
        | print_params "," print_params { $$ = strdup(yytext); }
        ;

/* === [2.5] Δήλωση συναρτήσεων χρήστη === */
decl_func:
        name_func code_func { fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση συναρτήσεων χρήστη\"", line); }
	;
name_func: 
        IDENTIFIER                      { $$=strdup(yytext); }
        | FUNC name_func params NEWLINE { $$=strdup(yytext); }
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
        "{" code NEWLINE "}" {$$=strdup(yytext);}
        ;
code:
        /* ΕΔΩ ΘΑ ΠΡΟΣΘΕΣΟΥΜΕ ΣΤΟ ΤΕΛΟΣ ΟΠΟΙΟΝΔΗΠΟΤΕ ΚΩΔΙΚΑ ΘΕΛΕΙ Ο ΧΡΗΣΤΗΣ ΣΤΗ ΣΥΝΑΡΤΗΣΗ ΤΟΥ

        ;

/* === [2.6] Δηλώσεις απλών εκφράσεων === */
decl_operations:
        arithm_expr             { fprintf(yyout, "[BISON] Line=%d, expression=\"Αριθμητική έκφραση\"\n", line); }
    /*  | init_vars ";"         { fprintf(yyout, "[BISON] Line=%d, expression=\"Ανάθεση τιμής σε μεταβλητή\"\n", line); } */
        | cmp_expr              { fprintf(yyout, "[BISON] Line=%d, expression=\"Σύγκριση\"\n", line); }
    /*  | merge_arr             { fprintf(yyout, "[BISON] Line=%d, expression=\"Συνένωση Πινάκων\"\n", line); }*/
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
        ;
/* === [2.6.3] Συγκρίσεις === */
cmp_expr:
	INTEGER    		  { $$ = strdup(yytext); }
        | FLOAT                   { $$ = strdup(yytext); }
	| IDENTIFIER              { $$ = strdup(yytext); }
	| cmp_expr ">"  cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "<"  cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "<=" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr ">=" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "==" cmp_expr  { $$ = strdup(yytext); }
        | cmp_expr "!=" cmp_expr  { $$ = strdup(yytext); }
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
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\n", parse);
        else
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\n", parse);

	return 0;
} 
