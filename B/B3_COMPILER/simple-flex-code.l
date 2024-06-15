/* Η ανάγνωση περιορίζεται σε ένα μόνο αρχείο και τερματίζεται στο πρώτο EOF */
%option noyywrap

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* Αρχείο κεφαλίδας που περιέχει λίστα με όλα τα tokens */
#include "simple-bison-code.tab.h"

/* Ορισμός μετρητή τρέχουσας γραμμής */
extern int line;
extern int flag;

/* Declare lex_warn */
int lex_warn = 0;

void prn(const char *token);

%}

IDENTIFIER       [a-zA-Z_][a-zA-Z0-9_]{0,31}
STRING           \"([^"\\]*(\\[\\n"][^"\\]*)*)\"
INTEGER          ([1-9][0-9]*|0[xX][0-9A-Fa-f]+|0[0-7]+|0)
FLOAT            (?:[1-9][0-9]*|0)(?:\.(?:[1-9][0-9]*|0*[1-9]+))?(?:[eE](?:-?[1-9][0-9]*|0))?
COMMENT          (\/\/.*|\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
DELIMITER        \;
WHITESPACE       [ \t]+  
NEWLINE          \n
UNKNOWN          [^ \t\r\n;]
UNKNOWN_IDENTIFIER [0-9][a-zA-Z_]+

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
{UNKNOWN_IDENTIFIER} {
    lex_warn++;
    fprintf(yyout, "\t[FLEX] Line=%d, Warning: Unknown identifier \"%s\"\n", line, yytext);
    yylval.sval = strdup(yytext);
    return UNKNOWN;
}
{UNKNOWN}       { BEGIN(UNKNOWN_STATE); }
<UNKNOWN_STATE>{UNKNOWN}+ {
    prn("UNKNOWN");
    lex_warn++;
    BEGIN(INITIAL);
}

%%

void prn(const char *token)
{
   if (strcmp(token, "UNKNOWN") == 0) {
       fprintf(yyout, "\t[FLEX] Line=%d, Error: Unknown token \"%s\"\n", line, yytext);
   } else {
       fprintf(yyout, "\t[FLEX] Line=%d, token=%s, value=\"%s\"\n", line, token, yytext);
   }
}

