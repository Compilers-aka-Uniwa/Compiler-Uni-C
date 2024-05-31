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
extern int line;
extern int flag;

%}


/* Ονόματα και αντίστοιχοι ορισμοί (υπό μορφή κανονικής έκφρασης).
   Μετά από αυτό, μπορεί να γίνει χρήση των ονομάτων (αριστερά) αντί των,
   συνεπώς ιδιαίτερα μακροσκελών και δυσνόητων, κανονικών εκφράσεων */


DELIMITER        [;]
IDENTIFIER       [a-zA-Z_][a-zA-Z0-9_]{0,31}
STRING           \"([^"\\]*(\\[\\n"][^"\\]*)*)\"
INTEGER          ([1-9][0-9]*|0[x|X][0-9A-F]+|0[0-7]+|0)
FLOAT            (?:[1-9][0-9]*|0)(?:\.(?:[1-9][0-9]*|0*[1-9]+))?(?:[eE](?:-?[1-9][0-9]*|0))?
COMMENT          (\/\/.*\n|\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
WHITESPACE       [ \t]+
NEWLINE          [\n]
UNKNOWN          [^ \t\r\n;]+


/* Για κάθε πρότυπο (αριστερά) που ταιριάζει, εκτελείται ο αντίστοιχος 
   κώδικας μέσα στα αγκίστρα. Η εντολή return επιτρέπει την επιστροφή
   μιας αριθμητικής τιμής μέσω της συνάρτησης yylex() */

%%

{DELIMITER}     { prn("DELIMITER"); return DELIMITER; }
{IDENTIFIER}    { prn("IDENTIFIER"); return IDENTIFIER; }
{STRING}        { prn("STRING"); return STRING; }
{INTEGER}       { prn("INTEGER"); return INTEGER; }
{FLOAT}         { prn("FLOAT"); return FLOAT; }
"break"         { prn("KEYWORD"); return BREAK; }
"case"          { prn("KEYWORD"); return CASE; }
"const"         { prn("KEYWORD"); return CONST; }
"continue"      { prn("KEYWORD"); return CONTINUE; }
"do"            { prn("KEYWORD"); return DO; }
"double"        { prn("KEYWORD"); return DOUBLE; }
"else"          { prn("KEYWORD"); return ELSE; }
"float"         { prn("KEYWORD"); return FLOAT_KEY; }
"for"           { prn("KEYWORD"); return FOR; }
"if"            { prn("KEYWORD"); return IF; }
"int"           { prn("KEYWORD"); return INT; }
"long"          { prn("KEYWORD"); return LONG; }
"return"        { prn("KEYWORD"); return RETURN; }
"sizeof"        { prn("KEYWORD"); return SIZEOF; }
"struct"        { prn("KEYWORD"); return STRUCT; }
"switch"        { prn("KEYWORD"); return SWITCH; }
"void"          { prn("KEYWORD"); return VOID; }
"while"         { prn("KEYWORD"); return WHILE; }
"func"          { prn("KEYWORD"); return FUNC; }
"+"             { prn("OPERATOR"); return PLUS; }
"*="            { prn("OPERATOR"); return MUL_EQ; }
"--"            { prn("OPERATOR"); return POST_MIN_EQ; }
"-"             { prn("OPERATOR"); return MINUS; }
"/="            { prn("OPERATOR"); return DIV_EQ; }
"<"             { prn("OPERATOR"); return LESS; }
"*"             { prn("OPERATOR"); return MUL; }
"!"             { prn("OPERATOR"); return NOT; }
">"             { prn("OPERATOR"); return GREATER; }
"/"             { prn("OPERATOR"); return DIV; }
"&&"            { prn("OPERATOR"); return AND; }
"<="            { prn("OPERATOR"); return LESS_EQ; }
"%"             { prn("OPERATOR"); return MOD; }
"||"            { prn("OPERATOR"); return OR; }
">="            { prn("OPERATOR"); return GREATER_EQ; }
"="             { prn("OPERATOR"); return ASSIGN_OP; }
"=="            { prn("OPERATOR"); return EQUAL; }
"&"             { prn("OPERATOR"); return ADDR_OP; }
"+="            { prn("OPERATOR"); return PLUS_EQ; }
"!="            { prn("OPERATOR"); return NOT_EQ; }
"-="            { prn("OPERATOR"); return MIN_EQ; }
"++"            { prn("OPERATOR"); return POST_PLUS_EQ; }
{COMMENT}       { ECHO; line++; }
{WHITESPACE}    { }
{NEWLINE}       { line++;  prn("NEWLINE"); return NEWLINE; }
<<EOF>>         { prn("EOF"); return END_OF_FILE; }
{UNKNOWN}       { prn("UNKNOWN TOKEN"); return UNKNOWN; }

%%

/* Η συνάρτηση prn τυπώνει στην οθόνη τον τύπο του αναγνωριστικού (πχ. ASSIGNOP)
   που έγινε match καθώς και το ίδιο το κείμενο (πχ. =) του αναγνωριστικού. Ο
   λόγος ύπαρξής της είναι καθαρά για καλύτερη κατανόηση του κώδικα και για
   γενικότερη διευκόλυνση στο debugging της εφαρμογής */

void prn(const char *token)
{
   int isEOF = strcmp(token, "EOF");
   
   printf("\tLine=%d, token=%s, value=\"%s\"\n", line, token, yytext);
   
   if (!isEOF)
      exit(0);
	return;
}
