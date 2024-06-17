/* Η ανάγνωση περιορίζεται σε ένα μόνο αρχείο και τερματίζεται στο πρώτο EOF */
%option noyywrap
%x error

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

extern int correct_words; //Correct words counter
extern int lex_warnings;

void yyerror (const char *msg);
void prn(char *token);

%}


/* Ονόματα και αντίστοιχοι ορισμοί (υπό μορφή κανονικής έκφρασης).
   Μετά από αυτό, μπορεί να γίνει χρήση των ονομάτων (αριστερά) αντί των,
   συνεπώς ιδιαίτερα μακροσκελών και δυσνόητων, κανονικών εκφράσεων */

IDENTIFIER       [a-zA-Z_][a-zA-Z0-9_]{0,31}
STRING           \"([^"\\]*(\\[\\n"][^"\\]*)*)\"
INTEGER          ([1-9][0-9]*|0[x|X][0-9A-F]+|0[0-7]+|0)
FLOAT            (?:[1-9][0-9]*|0)(?:\.(?:[1-9][0-9]*|0*[1-9]+))?(?:[eE](?:-?[1-9][0-9]*|0))?
COMMENT          (\/\/.*|\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
DELIMITER        \;
WHITESPACE       [ \t]+  
NEWLINE          \n
TOKEN_ERROR      [^ \t\r\n;] 

%%

"break"         { correct_words++; prn("KEYWORD"); return SBREAK; }
"case"          { correct_words++; prn("KEYWORD"); return SCASE; }
"const"         { correct_words++; prn("KEYWORD"); return SCONST; }
"continue"      { correct_words++; prn("KEYWORD"); return SCONTINUE; }
"do"            { correct_words++; prn("KEYWORD"); return SDO; }
"double"        { correct_words++; prn("KEYWORD"); return SDOUBLE; }
"else"          { correct_words++; prn("KEYWORD"); return SELSE; }
"float"         { correct_words++; prn("KEYWORD"); return SFLOAT; }
"for"           { correct_words++; prn("KEYWORD"); return SFOR; }
"if"            { correct_words++; prn("KEYWORD"); return SIF; }
"int"           { correct_words++; prn("KEYWORD"); return SINT; }
"long"          { correct_words++; prn("KEYWORD"); return SLONG; }
"return"        { correct_words++; prn("KEYWORD"); return SRETURN; }
"sizeof"        { correct_words++; prn("KEYWORD"); return SSIZEOF; }
"struct"        { correct_words++; prn("KEYWORD"); return SSTRUCT; }
"switch"        { correct_words++; prn("KEYWORD"); return SSWITCH; }
"void"          { correct_words++; prn("KEYWORD"); return SVOID; }
"while"         { correct_words++; prn("KEYWORD"); return SWHILE; }
"func"          { correct_words++; prn("KEYWORD"); return SFUNC; }
"short"         { correct_words++; prn("KEYWORD"); return SSHORT; }
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
"="             { prn("OPERATOR"); return ASSIGN; }
"=="            { prn("OPERATOR"); return EQUAL; }
"&"             { prn("OPERATOR"); return ADDR; }
"+="            { prn("OPERATOR"); return PLUSEQ; }
"!="            { prn("OPERATOR"); return NOTEQ; }
"-="            { prn("OPERATOR"); return MINEQ; }
"++"            { prn("OPERATOR"); return PPLUSEQ; }
"("             { prn("SPECIAL"); return OPENPAR; }
")"             { prn("SPECIAL"); return CLOSEPAR; }
"["             { prn("SPECIAL"); return OPENSQBRA; }
"]"             { prn("SPECIAL"); return CLOSESQBRA; }
"{"             { prn("SPECIAL"); return OPENCURBRA; }
"}"             { prn("SPECIAL"); return CLOSECURBRA; }
","             { prn("SPECIAL"); return COMMA; }
"\\"            { prn("SPECIAL"); return BACKSLASH; }
"scan"          { correct_words++; prn("FUNCTION"); return SSCAN; }
"len"           { correct_words++; prn("FUNCTION"); return SLEN; }
"print"         { correct_words++; prn("FUNCTION"); return SPRINT; }
"cmp"           { correct_words++; prn("FUNCTION"); return SCMP; }
{DELIMITER}     { prn("DELIMITER"); return DELIMITER; }
{IDENTIFIER}    { correct_words++; prn("IDENTIFIER"); return IDENTIFIER; }
{STRING}        { correct_words++; prn("STRING"); return STRING; } 
{INTEGER}       { prn("INTEGER"); return INTEGER; } 
{FLOAT}         { prn("FLOAT"); return FLOAT; }
{COMMENT}       { ECHO; }
{WHITESPACE}    { }
{NEWLINE}       { line++; return NEWLINE; }
<<EOF>>         { return EOF; }


{TOKEN_ERROR}           { lex_warnings++; yyerror("Token error"); BEGIN(error); return TOKEN_ERROR; } 
<error>{WHITESPACE}+    { BEGIN(0); fprintf(yyout, "\t%d character(s) ignored so far\n", lex_warnings); } 
<error>.                { lex_warnings++; }
<error>\n               { line++; BEGIN(0); fprintf(yyout, "\t\t%d character(s) ignored so far\n", lex_warnings); return NEWLINE;}

%%

/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
void yyerror(const char *msg)
{
   fprintf(yyout, "!! %s !! -> at Line=%d\n", msg, line);
   return;
}

void prn(char *token)
{
   fprintf(yyout, "\t[FLEX] Line=%d, token=%s, value=\"%s\"\n", line, token, yytext);   
   return;
}

