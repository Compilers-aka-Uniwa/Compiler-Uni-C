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
%token IDENTIFIER STRING 
%token INTEGER FLOAT 
%token BREAK DO IF SIZEOF CASE DOUBLE INT STRUCT FUNC ELSE LONG SWITCH CONST FLOAT_KEY RETURN VOID CONTINUE FOR SHORT WHILE 
%token PLUS MUL_EQ POST_MIN_EQ MINUS DIV_EQ LESS MUL NOT GREATER DIV AND LESS_EQ MOD OR GREATER_EQ ASSIGN_OP EQUAL ADDR_OP PLUS_EQ NOT_EQ MIN_EQ POST_PLUS_EQ
%token DELIMITER
%token NEWLINE END_OF_FILE
%token OPEN_SQ_BRACKETS CLOSE_SQ_BRACKETS OPEN_CURLY_BRACKETS CLOSE_CURLY_BRACKETS COMMA BACKSLASH
%token UNKNOWN

/* Ορισμός προτεραιοτήτων στα tokens */
%right MUL_EQ DIV_EQ PLUS_EQ MIN_EQ ASSIGN_OP 
%left OR 
%left AND 
%left EQUAL NOT_EQ 
%left LESS GREATER LESS_EQ GREATER_EQ     
%left PLUS MINUS                   
%left MULT DIV MOD 
%right ADDR_OP NOT 
%left POST_PLUS_EQ POST_MIN_EQ



%%

/* Ορισμός των γραμματικών κανόνων. Κάθε φορά που αντιστοιχίζεται ένας γραμματικός
   κανόνας με τα δεδομένα εισόδου, εκτελείται ο κώδικας C που βρίσκεται ανάμεσα στα
   αγκύλια. Η αναμενόμενη σύνταξη είναι:
				όνομα : κανόνας { κώδικας C } */
program:
        program expr NEWLINE { printf("[BISON] %d\n", $2); }
        program decl_var NEWLINE { printf("Ο BISON ΕΓΚΡΙΝΕΙ ΤΗΝ ΔΗΛΩΣΗ ΜΕΤΑΒΛΗΤΗΣ!!\n"); }
        program decl_arr NEWLINE { printf("Ο BISON ΕΓΚΡΙΝΕΙ ΤΗΝ ΔΗΛΩΣΗ ΠΙΝΑΚΑ!!\n"); }
        |
        ;
/* === ΔΗΛΩΣΗ ΜΕΤΑΒΛΗΤΩΝ === */
decl_var:
        type var DELIMITER { printf("[BISON] Line=%d, Δήλωση Μεταβλητής\n", line); }
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
        | var COMMA IDENTIFIER  { $$ = $1; }
        ;
/* === ΠΙΝΑΚΕΣ === */
decl_arr:
        IDENTIFIER ASSIGN_OP elements DELIMITER { printf("[BISON] Line=%d, Δήλωση Πίνακα\n", line); }
        ;
elements:
        OPEN_SQ_BRACKETS value CLOSE_SQ_BRACKETS {} 
value:
        type_int { $$ = $1; }
        | type_fl { $$ = $1; }
        | type_str { $$ = strdup(yytext); }
        | value COMMA value
        ;  
type_int:
        INTEGER       { $$ = $1; }
        ;
type_fl:
        FLOAT       { $$ = $1; }
        ;
type_str:
        STRING      { $$ = strdup(yytext); }    



/*decl_arr:
        arr DELIMITER { printf("[BISON] Line=%d, Δήλωση Πίνακα\n", line); }
arr:
        IDENTIFIER  { $$ = strdup(yytext); }
        | arr ASSIGN_OP OPEN_SQ_BRACKETS CLOSE_SQ_BRACKETS
        | arr ASSIGN_OP  
type_int:
        INTEGER       { $$ = $1; }
        ;
type_fl:
        FLOAT       { $$ = $1; }
        ;
type_str:
        STRING      { $$ = strdup(yytext); }
        ;*/
        








expr: 
        INTEGER          { $$ = $1; }
        | expr PLUS expr { $$ = $1 + $3; } 
        ;
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
