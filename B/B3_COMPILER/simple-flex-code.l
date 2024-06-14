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
int lex_warning = 0;

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
/* ΚΑΤΑΣΤΑΣΗ UNKNOWN */
%x UNKNOWN_STATE 

%%

"break"         { prn("KEYWORD"); return SBREAK; }
"case"          { prn("KEYWORD"); return SCASE; }
"const"         { prn("KEYWORD"); return SCONST; }
"continue"      { prn("KEYWORD"); return SCONTINUE; }
"do"            { prn("KEYWORD"); return SDO; }
"double"        { prn("KEYWORD"); return SDOUBLE; }
"else"          { prn("KEYWORD"); return SELSE; }
"float"         { prn("KEYWORD"); return SFLOAT; }
"for"           { prn("KEYWORD"); return SFOR; }
"if"            { prn("KEYWORD"); return SIF; }
"int"           { prn("KEYWORD"); return SINT; }
"long"          { prn("KEYWORD"); return SLONG; }
"return"        { prn("KEYWORD"); return SRETURN; }
"sizeof"        { prn("KEYWORD"); return SSIZEOF; }
"struct"        { prn("KEYWORD"); return SSTRUCT; }
"switch"        { prn("KEYWORD"); return SSWITCH; }
"void"          { prn("KEYWORD"); return SVOID; }
"while"         { prn("KEYWORD"); return SWHILE; }
"func"          { prn("KEYWORD"); return SFUNC; }
"short"         { prn("KEYWORD"); return SSHORT; }
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
"scan"          { prn("FUNCTION"); return SSCAN; }
"len"           { prn("FUNCTION"); return SLEN; }
"print"         { prn("FUNCTION"); return SPRINT; }
"cmp"           { prn("FUNCTION"); return SCMP; }
{DELIMITER}     { prn("DELIMITER"); return DELIMITER; }
{IDENTIFIER}    { prn("IDENTIFIER"); return IDENTIFIER; }
{STRING}        { prn("STRING"); return STRING; }
{INTEGER}       { yylval.ival = atoi(yytext); prn("INTEGER"); return INTEGER; } 
{FLOAT}         { yylval.fval = atof(yytext); prn("FLOAT"); return FLOAT; }
{COMMENT}       { ECHO; }
{WHITESPACE}    { }
{NEWLINE}       { line++; return NEWLINE; }
<<EOF>>         { return EOF; }
{TOKEN_ERROR}   { yyerror("Unrecognized character(s) encountered!"); lex_warning++; BEGIN(UNKNOWN_STATE); return TOKEN_ERROR; } /* ΕΤΣΙ ΚΑΙ ΒΡΕΙΣ ΑΓΝΩΣΤΟ ΧΑΡΑΚΤΗΡΑ ΜΠΕΣ ΣΤΗΝ ΚΑΤΑΣΤΑΣΗ UNKNOWN */
<UNKNOWN_STATE>{TOKEN_ERROR}+ { BEGIN(0); fprintf(yyout, "\t\t%d character(s) ignored so far\n", lex_warning); } /* ΑΝΑΓΝΩΡΙΣΕ ΤΗΝ ΑΓΝΩΣΤΗ ΣΥΜΒΟΛΟΣΕΙΡΑ */
<error>.        { lex_warning++; }
<error>\n       { BEGIN(0); fprintf(yyout, "\t\t%d character(s) ignored so far\n", lex_warning); return NEWLINE;}

%%

void yyerror(const char *msg)
{
   fprintf(stderr, "\t[FLEX] Line=%d at lexeme \'%s\' Error=%s\n", line, yytext, msg);
   return;
}

void prn(char *token)
{
   fprintf(yyout, "\t[FLEX] Line=%d, token=%s, value=\"%s\"\n", line, token, yytext);   
   return;
}

