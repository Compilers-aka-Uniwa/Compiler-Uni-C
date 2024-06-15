/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_SIMPLE_BISON_CODE_TAB_H_INCLUDED
# define YY_YY_SIMPLE_BISON_CODE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    STRING = 259,                  /* STRING  */
    INTEGER = 260,                 /* INTEGER  */
    FLOAT = 261,                   /* FLOAT  */
    SBREAK = 262,                  /* SBREAK  */
    SDO = 263,                     /* SDO  */
    SIF = 264,                     /* SIF  */
    SSIZEOF = 265,                 /* SSIZEOF  */
    SCASE = 266,                   /* SCASE  */
    SDOUBLE = 267,                 /* SDOUBLE  */
    SINT = 268,                    /* SINT  */
    SSTRUCT = 269,                 /* SSTRUCT  */
    SFUNC = 270,                   /* SFUNC  */
    SELSE = 271,                   /* SELSE  */
    SLONG = 272,                   /* SLONG  */
    SSWITCH = 273,                 /* SSWITCH  */
    SCONST = 274,                  /* SCONST  */
    SFLOAT = 275,                  /* SFLOAT  */
    SRETURN = 276,                 /* SRETURN  */
    SVOID = 277,                   /* SVOID  */
    SCONTINUE = 278,               /* SCONTINUE  */
    SFOR = 279,                    /* SFOR  */
    SSHORT = 280,                  /* SSHORT  */
    SWHILE = 281,                  /* SWHILE  */
    PLUS = 282,                    /* "+"  */
    MULEQ = 283,                   /* "*="  */
    PMINEQ = 284,                  /* "--"  */
    MINUS = 285,                   /* "-"  */
    DIVEQ = 286,                   /* "/="  */
    LT = 287,                      /* "<"  */
    MUL = 288,                     /* "*"  */
    NOT = 289,                     /* "!"  */
    GT = 290,                      /* ">"  */
    DIV = 291,                     /* "/"  */
    AND = 292,                     /* "&&"  */
    LEQ = 293,                     /* "<="  */
    MOD = 294,                     /* "%"  */
    OR = 295,                      /* "||"  */
    GREQ = 296,                    /* ">="  */
    ASSIGN = 297,                  /* "="  */
    EQUAL = 298,                   /* "=="  */
    ADDR = 299,                    /* "&"  */
    PLUSEQ = 300,                  /* "+="  */
    NOTEQ = 301,                   /* "!="  */
    MINEQ = 302,                   /* "-="  */
    PPLUSEQ = 303,                 /* "++"  */
    OPENPAR = 304,                 /* "("  */
    CLOSEPAR = 305,                /* ")"  */
    OPENSQBRA = 306,               /* "["  */
    CLOSESQBRA = 307,              /* "]"  */
    OPENCURBRA = 308,              /* "{"  */
    CLOSECURBRA = 309,             /* "}"  */
    COMMA = 310,                   /* ","  */
    BACKSLASH = 311,               /* "\\"  */
    DELIMITER = 312,               /* ";"  */
    SSCAN = 313,                   /* SSCAN  */
    SPRINT = 314,                  /* SPRINT  */
    SLEN = 315,                    /* SLEN  */
    SCMP = 316,                    /* SCMP  */
    NEWLINE = 317,                 /* NEWLINE  */
    TOKEN_ERROR = 318              /* TOKEN_ERROR  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "simple-bison-code.y"

    int ival;
    float fval;
    char *sval;

#line 133 "simple-bison-code.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SIMPLE_BISON_CODE_TAB_H_INCLUDED  */
