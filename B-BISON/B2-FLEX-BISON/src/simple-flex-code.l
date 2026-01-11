/* Reading is limited to a single file and terminates at the first EOF */
%option noyywrap

/* C code for defining the required header files and variables.
   Anything between %{ and %} is automatically transferred to the C file that
   Flex will create. */

%{

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* Header file containing a list of all tokens */
#include "simple-bison-code.tab.h"

/* Definition of current line counter */
extern int line;
extern int flag;

void prn(const char *token);

%}


/* Names and corresponding definitions (in the form of regular expressions).
   After this, the names (on the left) can be used instead of,
   consequently particularly lengthy and obscure, regular expressions */

IDENTIFIER       [a-zA-Z_][a-zA-Z0-9_]{0,31}
STRING           \"([^"\\]*(\\[\\n"][^"\\]*)*)\"
INTEGER          ([1-9][0-9]*|0[x|X][0-9A-F]+|0[0-7]+|0)
FLOAT            (?:[1-9][0-9]*|0)(?:\.(?:[1-9][0-9]*|0*[1-9]+))?(?:[eE](?:-?[1-9][0-9]*|0))?
COMMENT          (\/\/.*|\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
DELIMITER        \;
WHITESPACE       [ \t]+  
NEWLINE          \n
UNKNOWN          [^ \t\r\n;] 
/* STATE UNKNOWN */
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
{UNKNOWN}       { BEGIN(UNKNOWN_STATE); } /* IF AN UNKNOWN CHARACTER IS FOUND, ENTER THE UNKNOWN STATE */
<UNKNOWN_STATE>{UNKNOWN}+ { prn("UNKNOWN"); BEGIN(INITIAL); } /* RECOGNIZED THE UNKNOWN SYMBOL SEQUENCE */

%%

void prn(const char *token)
{
   fprintf(yyout, "\t[FLEX] Line=%d, token=%s, value=\"%s\"\n", line, token, yytext);   
   return;
}

