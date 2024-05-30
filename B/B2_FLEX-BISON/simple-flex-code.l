/* Όνομα αρχείου:       simple-flex-code.l
   Περιγραφή:           Υποδείγμα για ανάπτυξη λεκτικού αναλυτή με χρήση του εργαλείου Flex
   Συγγραφέας:          Εργαστήριο Μεταγλωττιστών, Τμήμα Μηχανικών Πληροφορικής και Υπολογιστών,
                         Πανεπιστήμιο Δυτικής Αττικής
   Σχόλια:              Το παρόν πρόγραμμα υλοποιεί (με τη χρήση flex) έναν απλό λεκτικό αναλυτή
                         που αναγνωρίζει κενά (διάστημα και tab) και αριθμούς (δεκαδικού συστήματος
                         μόνο!) για τη γλώσσα Uni-C ενώ διαχειρίζεται τους ειδικούς χαρακτήρες
                         νέας γραμμής '\n' (new line) και 'EOF' (end of file). Υπάρχουν αναφορές
                         για την αναγνώριση μεταβλητών, με τον πραγματικό κώδικα να έχει αντικατασταθεί
                         από τον λεκτικό FILL ME έτσι ώστε να συμπληρωθεί από εσάς. Προαιρετικά ο λεκτικός
                         αναλυτής δέχεται ορίσματα αρχείων για είσοδο και έξοδο.
   Οδηγίες εκτέλεσης:   Δώστε "make" χωρίς τα εισαγωγικά στον τρέχοντα κατάλογο. Εναλλακτικά:
                         flex -o simple-flex-code.c simple-flex-code.l
                         gcc -o simple-flex-code simple-flex-code.c
                         ./simple-flex-code
*/

/* Η ανάγνωση περιορίζεται σε ένα μόνο αρχείο και τερματίζεται στο πρώτο EOF */
%option noyywrap


/* Κώδικας C για τον ορισμό των απαιτούμενων header files και των μεταβλητών.
   Οτιδήποτε ανάμεσα στα %{ και %} μεταφέρεται αυτόματα στο αρχείο C που
   θα δημιουργήσει το Flex. */

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Αρχείο κεφαλίδας που περιέχει λίστα με όλα τα tokens */
#include "simple-bison-code.tab.h"

/* Ορισμός μετρητή τρέχουσας γραμμής */
int line = 1;

%}


/* Ονόματα και αντίστοιχοι ορισμοί (υπό μορφή κανονικής έκφρασης).
   Μετά από αυτό, μπορεί να γίνει χρήση των ονομάτων (αριστερά) αντί των,
   συνεπώς ιδιαίτερα μακροσκελών και δυσνόητων, κανονικών εκφράσεων */


DELIMITER        [;]
IDENTIFIER       [a-zA-Z_][a-zA-Z0-9_]{0,31}
STRING           \"([^"\\]*(\\[\\n"][^"\\]*)*)\"
INTEGER          ([1-9][0-9]*|0[x|X][0-9A-F]+|0[0-7]+|0)
FLOAT            (?:[1-9][0-9]*|0)(?:\.(?:[1-9][0-9]*|0*[1-9]+))?(?:[eE](?:-?[1-9][0-9]*|0))?
KEYWORD          (break|case|const|continue|do|double|else|float|for|if|int|long|return|sizeof|struct|switch|void|while|func)
OPERATOR         (\+|-|\*|\/|%|=|\+=|-=-|\*=|\/=|!|&&|\|\||==|!=|\+\+|--|<|>|<=|>=|&|\||\^|<<|>>|&)
COMMENT          (\/\/.*\n|\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
WHITESPACE       [ \t]+
NEWLINE          [\n]
UNKNOWN          [^ \t\r\n;]+


/* Για κάθε πρότυπο (αριστερά) που ταιριάζει, εκτελείται ο αντίστοιχος
   κώδικας μέσα στα αγκίστρα. Η εντολή return επιτρέπει την επιστροφή
   μιας αριθμητικής τιμής μέσω της συνάρτησης yylex() */

%%

{DELIMITER}     { return DELIMITER; }
{IDENTIFIER}    { return IDENTIFIER; }
{STRING}        { return STRING; }
{INTEGER}       { return INTEGER; }
{FLOAT}         { return FLOAT; }
{KEYWORD}       { return KEYWORD; }
{OPERATOR}      { return OPERATOR; }
{COMMENT}       { ECHO; line++; }
{WHITESPACE}    { }
{NEWLINE}       { return NEWLINE; }
<<EOF>>         { return END_OF_FILE; }
{UNKNOWN}       { return UNKNOWN; }

%%

/* Πίνακας με όλα τα tokens αντίστοιχα με τους ορισμούς στο token.h */
char *tname[] = {
   "DELIMITER", 
   "IDENTIFIER", 
   "STRING", 
   "INTEGER", 
   "FLOAT", 
   "KEYWORD", 
   "OPERATOR", 
   "NEWLINE", 
   "END_OF_FILE", 
   "UNKNOWN" 
};


/* Η συνάρτηση main: Ο παρακάτω κώδικας θα τοποθετηθεί αυτόματα στο
   πρόγραμμα C που θα δημιουργήσει το Flex και θα αποτελέσει το αρχικό
   σημείο εκτέλεσης της εφαρμογής του λεκτικού αναλυτή. */

int main(int argc, char **argv){
        int token;

        /* Γίνεται ο έλεγχος των ορισμάτων της γραμμής εντολών. Αν τα
           ορίσματα είναι 3, το πρόγραμμα διαβάζει από το αρχείο του 2ου
           ορίσματος και γράφει στο αρχείο του 3ου. Αν τα ορίσματα είναι
           2, διαβάζει από το αρχείο του 2ου ορίσματος και γράφει στην οθόνη.
           Υποθέτεται ότι το 1ο όρισμα (argv[0]) στη C είναι το όνομα
           του ίδιου του εκτελέσιμου αρχείου. */

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

        /* Η συνάρτηση yylex διαβάζει χαρακτήρες από την είσοδο και προσπαθεί
           να αναγνωρίσει tokens. Τα tokens που αναγνωρίζει είναι αυτά που έχουν
           οριστεί στο παρόν αρχείο, μεταξύ των %% και %%. Αν ο κώδικας που
           αντιστοιχεί σε ένα πρότυπο περιέχει την εντολή 'return ΤΙΜΗ', η yylex()
           επιστρέφει αυτή την τιμή και αποθηκεύει το αποτέλεσμα στη μεταβλητή token. */

        while( (token=yylex()) >= 0){
                /* Για κάθε αναγνωρισμένο token, εκτυπώνεται η γραμμή στην οποία βρέθηκε
                   και το όνομά του μαζί με την τιμή του. */
                if (token)
                {
                  switch(token) 
                  {
                     case NEWLINE: 
                        line++;
                        break;
                     case END_OF_FILE:
                        fprintf(yyout, "\tLine=%d, token=%s, value=\"%s\"\n", line, tname[token-1], yytext);
                        printf("#END-OF-FILE#\n");
                        exit(0);
                        break;
                     case UNKNOWN:
                        fprintf(yyout, "\tLine=%d, token=%s TOKEN, value=\"%s\"\n", line, tname[token-1], yytext);
                        break;
                     default:
                        fprintf(yyout, "\tLine=%d, token=%s, value=\"%s\"\n", line, tname[token-1], yytext);
                        break;
                  } 
                }
                
        }
        return 0;
}
