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
	#define YYSTATE char*
        #define YYDEBUG 1
	
	int line = 1;
	int errflag = 0;
	extern char *yytext;
	
	/* === ΠΙΝΑΚΑΣ ΣΥΜΒΟΛΩΝ === */
	char* sym[] = 
	{ "break", "do", "if", "sizeof", "case", "double", "int", "struct", "func", "else", 
	  "long", "switch", "const", "float", "return", "void", "continue", "for", "short", "while", 
	  "+", "*=", "--", "-", "/=", "<", "*", "!", ">", "/", "&&", "<=", "%", "||", ">=", "=", "==", 
	  "&", "+=", "!=", "-=", "++" };
	
	void yyerror(char *);
%}

/* Ορισμός των αναγνωρίσιμων λεκτικών μονάδων. */
%token SCAN LEN CMP PRINT
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
%token NEWLINE END_OF_FILE
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
        /*program expr NEWLINE { printf("[BISON] %d\n", $2); }*/
        program decl_var NEWLINE { printf("[BISON] ΔΗΛΩΣΗ ΜΕΤΑΒΛΗΤΗΣ\n"); }
        | program decl_arr NEWLINE { printf("[BISON] ΔΗΛΩΣΗ ΠΙΝΑΚΑ\n"); }
        | program build_func NEWLINE { printf("[BISON] ΔΗΛΩΣΗ ΣΥΝΑΡΤΗΣΗΣ\n"); }
        | program NEWLINE              { printf("[BISON] ΑΛΛΑΓΗ ΓΡΑΜΜΗΣ\n"); }
        |                        { }
        ;
/* === ΠΙΝΑΚΕΣ === */
decl_arr:
        IDENTIFIER "=" elements ";" { printf("[BISON] Line=%d, Δήλωση Πίνακα\n", line); } 
        ;
elements:
        "[" "]" {$$ = strdup(yytext); }
        | "[" arr_int "]" { $$ = strdup(yytext); }
        | "[" arr_fl "]" { $$ = strdup(yytext); }
        | "[" arr_str "]" { $$ = strdup(yytext); }
        ;  
arr_int:
        INTEGER       { $$ = $1; }
        | arr_int "," arr_int { $$ = strdup(yytext); }
        ;
arr_fl:
        FLOAT       { $$ = $1; }
        | arr_fl "," arr_fl { $$ = strdup(yytext); }
        ;
arr_str:
        STRING      { $$ = strdup(yytext); }  
        | arr_str "," arr_str { $$ = strdup(yytext); }
        ;
/* === ΣΥΝΑΡΤΗΣΕΙΣ === */
build_func:
	func ";" { printf("[BISON] line=%d, Build-in Συνάρτηση\n", line); }
	;
func:
        SCAN "(" scan_params ")" { $$ = strdup(yytext); }        
        | LEN "(" len_params ")" { $$ = strdup(yytext); }
        | CMP "(" cmp_params ")" { $$ = strdup(yytext); }
        | PRINT "(" print_params ")" { $$ = strdup(yytext); }
        ;
scan_params:
        IDENTIFIER { $$ = strdup(yytext); }
        ;
len_params:
        elements { $$ = strdup(yytext); }
        | STRING { $$ = strdup(yytext); }
        | IDENTIFIER { $$ = strdup(yytext); }
        ;
cmp_params:
        STRING { $$ = strdup(yytext); }
        | IDENTIFIER { $$ = strdup(yytext); }
        | cmp_params "," cmp_params { $$ = strdup(yytext); }
        ;
print_params:
        STRING { $$ = strdup(yytext); }
        | IDENTIFIER { $$ = strdup(yytext); }
        | INTEGER { $$ = strdup(yytext);}
        | func { $$ = strdup(yytext); }
        | print_params "," print_params { $$ = strdup(yytext); }
        ;

/* === ΔΗΛΩΣΗ ΜΕΤΑΒΛΗΤΩΝ === */
decl_var:
        type var ";" { printf("[BISON] Line=%d, Δήλωση Μεταβλητής\n", line); }
        ;
type: 
        INT { $$ = strdup(yytext); }
        | FLOAT_KEY { $$ = strdup(yytext); }
        | DOUBLE { $$ = strdup(yytext); }
        | SHORT { $$ = strdup(yytext); }
        | LONG  { $$ = strdup(yytext); }
        ;
var:
        IDENTIFIER              { $$ = strdup(yytext); }
        | var "," var           { $$ = strdup(yytext); }
        ; 

/* === ΠΡΟΣΘΕΣΗ === 
expr: 
        INTEGER          { $$ = $1; }
        | expr PLUS expr { $$ = $1 + $3; } 
        ;*/
%%




/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}

/* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

extern FILE *yyin;
extern FILE *yyout;

/* Η συνάρτηση main που αποτελεί και το σημείο εκκίνησης του προγράμματος.
   Στην συγκεκριμένη περίπτωση απλά καλεί τη συνάρτηση yyparse του Bison
   για να ξεκινήσει η συντακτική ανάλυση. */
int main(int argc, char **argv)  
{       
        yydebug = 1;

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
        else if (argc == 2)
        {
                if (!(yyin = fopen(argv[1], "r"))) 
                {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
        }
		
	int parse = yyparse();

	if (errflag == 0 && parse == 0)
		printf("\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\n", parse);
        else
		printf("\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\n", parse);

	return 0;
} 