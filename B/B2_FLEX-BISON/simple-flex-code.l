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

void prn(const char *token);

%}


/* Ονόματα και αντίστοιχοι ορισμοί (υπό μορφή κανονικής έκφρασης).
   Μετά από αυτό, μπορεί να γίνει χρήση των ονομάτων (αριστερά) αντί των,
   συνεπώς ιδιαίτερα μακροσκελών και δυσνόητων, κανονικών εκφράσεων */

IDENTIFIER       [a-zA-Z_][a-zA-Z0-9_]{0,31}
STRING           \"([^"\\]*(\\[\\n"][^"\\]*)*)\"
INTEGER          ([1-9][0-9]*|0[x|X][0-9A-F]+|0[0-7]+|0)
FLOAT            (?:[1-9][0-9]*|0)(?:\.(?:[1-9][0-9]*|0*[1-9]+))?(?:[eE](?:-?[1-9][0-9]*|0))?
COMMENT          (\/\/.*\n|\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
DELIMITER        \;
WHITESPACE       [ \t]+  
NEWLINE          \n
UNKNOWN          [^ \t\r\n;] 
/* ΚΑΤΑΣΤΑΣΗ UNKNOWN */
%x UNKNOWN_STATE 

%%

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
"short"         { prn("KEYWORD"); return SHORT; }
"+"             { prn("OPERATOR"); return PLUS; }
"*="            { prn("OPERATOR"); return MULEQ; }
"--"            { prn("OPERATOR"); return PMINEQ; }
"-"             { prn("OPERATOR"); return MINUS; }
"/="            { prn("OPERATOR"); return DIVEQ; }
"<"             { prn("OPERATOR"); return LT; }
"*"             { prn("OPERATOR"); return MUL; }
"!"             { prn("OPERATOR"); return NOT; }
">"             { prn("OPERATOR"); return GT; }
"/"             { prn("OPERATOR"); return DIV; }
"&&"            { prn("OPERATOR"); return AND; }
"<="            { prn("OPERATOR"); return LEQ; }
"%"             { prn("OPERATOR"); return MOD; }
"||"            { prn("OPERATOR"); return OR; }
">="            { prn("OPERATOR"); return GREQ; }
"="             { prn("OPERATOR"); return ASSIGNOP; }
"=="            { prn("OPERATOR"); return EQUAL; }
"&"             { prn("OPERATOR"); return ADDROP; }
"+="            { prn("OPERATOR"); return PLUSEQ; }
"!="            { prn("OPERATOR"); return NOTEQ; }
"-="            { prn("OPERATOR"); return MINEQ; }
"++"            { prn("OPERATOR"); return PPLUSEQ; }
"["             { prn("SPECIAL CHARACTER"); return OPEN_SQ_BRACKET; }
"]"              { prn("SPECIAL CHARACTER"); return CLOSE_SQ_BRACKET; }
"{"             { prn("SPECIAL CHARACTER"); return OPEN_CU_BRACKET; }
"}"             { prn("SPECIAL CHARACTER"); return CLOSE_SQ_BRACKET; }
","             { prn("SPECIAL CHARACTER"); return COMMA; }
"\\"            { prn("SPECIAL CHARACTER"); return BACKSLASH; }
{DELIMITER}     { prn("DELIMITER"); return DELIMITER; }
{IDENTIFIER}    { prn("IDENTIFIER"); return IDENTIFIER; }
{STRING}        { prn("STRING"); return STRING; }
{INTEGER}       { yylval = atoi(yytext); prn("INTEGER"); return INTEGER; } 
{FLOAT}         { yylval = atof(yytext); prn("FLOAT"); return FLOAT; }
{COMMENT}       { ECHO; line++; }
{WHITESPACE}    { }
{NEWLINE}       { line++; return NEWLINE; }
<<EOF>>         { prn("EOF"); return END_OF_FILE; }
{UNKNOWN}       { BEGIN(UNKNOWN_STATE); } /* ΕΤΣΙ ΚΑΙ ΒΡΕΙΣ ΑΓΝΩΣΤΟ ΧΑΡΑΚΤΗΡΑ ΜΠΕΣ ΣΤΗΝ ΚΑΤΑΣΤΑΣΗ UNKNOWN */
<UNKNOWN_STATE>{UNKNOWN}+ { prn("UNKNOWN"); BEGIN(INITIAL); } /* ΑΝΑΓΝΩΡΙΣΕ ΤΗΝ ΑΓΝΩΣΤΗ ΣΥΜΒΟΛΟΣΕΙΡΑ */

%%

void prn(const char *token)
{
   int isEOF = strcmp(token, "EOF");
   
   printf("\t[FLEX] Line=%d, token=%s(%s)\n", line, token, yytext);
   
   if (!isEOF)
      exit(0);
   return;
}

