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
    BREAK = 262,                   /* BREAK  */
    DO = 263,                      /* DO  */
    IF = 264,                      /* IF  */
    SIZEOF = 265,                  /* SIZEOF  */
    CASE = 266,                    /* CASE  */
    DOUBLE = 267,                  /* DOUBLE  */
    INT = 268,                     /* INT  */
    STRUCT = 269,                  /* STRUCT  */
    FUNC = 270,                    /* FUNC  */
    ELSE = 271,                    /* ELSE  */
    LONG = 272,                    /* LONG  */
    SWITCH = 273,                  /* SWITCH  */
    CONST = 274,                   /* CONST  */
    FLOAT_KEY = 275,               /* FLOAT_KEY  */
    RETURN = 276,                  /* RETURN  */
    VOID = 277,                    /* VOID  */
    CONTINUE = 278,                /* CONTINUE  */
    FOR = 279,                     /* FOR  */
    SHORT = 280,                   /* SHORT  */
    WHILE = 281,                   /* WHILE  */
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
    ASSIGNOP = 297,                /* "="  */
    EQUAL = 298,                   /* "=="  */
    ADDROP = 299,                  /* "&"  */
    PLUSEQ = 300,                  /* "+="  */
    NOTEQ = 301,                   /* "!="  */
    MINEQ = 302,                   /* "-="  */
    PPLUSEQ = 303,                 /* "++"  */
    OPEN_SQ_BRACKET = 304,         /* "["  */
    CLOSE_SQ_BRACKET = 305,        /* "]"  */
    OPEN_CU_BRACKET = 306,         /* "{"  */
    CLOSE_CU_BRACKET = 307,        /* "}"  */
    COMMA = 308,                   /* ","  */
    BACKSLASH = 309,               /* "\\"  */
    DELIMITER = 310,               /* ";"  */
    NEWLINE = 311,                 /* NEWLINE  */
    END_OF_FILE = 312,             /* END_OF_FILE  */
    UNKNOWN = 313                  /* UNKNOWN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SIMPLE_BISON_CODE_TAB_H_INCLUDED  */
