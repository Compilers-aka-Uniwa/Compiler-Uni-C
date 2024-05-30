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
%token IDENTIFIER KEYWORD STRING 
%token INTEGER FLOAT 
%token PLUS MUL_EQ POST_MIN_EQ MINUS DIV_EQ LESS MUL NOT GREATER DIV AND LESS_EQ MOD OR GREATER_EQ ASSIGN_OP EQUAL ADDR_OP PLUS_EQ NOT_EQ MIN_EQ POST_PLUS_EQ
%token SEMI

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
        program expr NEWLINE { printf("%d\n", $2); }
        |
        ;
expr:
        INTCONST         { $$ = $1; }
	| VARIABLE	 { $$ = $1; }
        | expr PLUS expr { $$ = $1 + $3; }
/* FILL ME */
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

/* Η συνάρτηση main που αποτελεί και το σημείο εκκίνησης του προγράμματος.
   Στην συγκεκριμένη περίπτωση απλά καλεί τη συνάρτηση yyparse του Bison
   για να ξεκινήσει η συντακτική ανάλυση. */
int main(void)  {
        
		if(argc == 3){
                if(!(yyin = fopen(argv[1], "r"))) {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
                if(!(yyout = fopen(argv[2], "w"))) {
                        fprintf(stderr, "Cannot create file: %s\n", argv[2]);
                        return 1;
                }
        }
        else if(argc == 2){
                if(!(yyin = fopen(argv[1], "r"))) {
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
