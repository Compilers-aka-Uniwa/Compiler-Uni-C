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
    SCAN = 258,                    /* SCAN  */
    LEN = 259,                     /* LEN  */
    CMP = 260,                     /* CMP  */
    PRINT = 261,                   /* PRINT  */
    IDENTIFIER = 262,              /* IDENTIFIER  */
    STRING = 263,                  /* STRING  */
    INTEGER = 264,                 /* INTEGER  */
    FLOAT = 265,                   /* FLOAT  */
    BREAK = 266,                   /* BREAK  */
    DO = 267,                      /* DO  */
    IF = 268,                      /* IF  */
    SIZEOF = 269,                  /* SIZEOF  */
    CASE = 270,                    /* CASE  */
    DOUBLE = 271,                  /* DOUBLE  */
    INT = 272,                     /* INT  */
    STRUCT = 273,                  /* STRUCT  */
    FUNC = 274,                    /* FUNC  */
    ELSE = 275,                    /* ELSE  */
    LONG = 276,                    /* LONG  */
    SWITCH = 277,                  /* SWITCH  */
    CONST = 278,                   /* CONST  */
    FLOAT_KEY = 279,               /* FLOAT_KEY  */
    RETURN = 280,                  /* RETURN  */
    VOID = 281,                    /* VOID  */
    CONTINUE = 282,                /* CONTINUE  */
    FOR = 283,                     /* FOR  */
    SHORT = 284,                   /* SHORT  */
    WHILE = 285,                   /* WHILE  */
    PLUS = 286,                    /* "+"  */
    MULEQ = 287,                   /* "*="  */
    PMINEQ = 288,                  /* "--"  */
    MINUS = 289,                   /* "-"  */
    DIVEQ = 290,                   /* "/="  */
    LT = 291,                      /* "<"  */
    MUL = 292,                     /* "*"  */
    NOT = 293,                     /* "!"  */
    GT = 294,                      /* ">"  */
    DIV = 295,                     /* "/"  */
    AND = 296,                     /* "&&"  */
    LEQ = 297,                     /* "<="  */
    MOD = 298,                     /* "%"  */
    OR = 299,                      /* "||"  */
    GREQ = 300,                    /* ">="  */
    ASSIGNOP = 301,                /* "="  */
    EQUAL = 302,                   /* "=="  */
    ADDROP = 303,                  /* "&"  */
    PLUSEQ = 304,                  /* "+="  */
    NOTEQ = 305,                   /* "!="  */
    MINEQ = 306,                   /* "-="  */
    PPLUSEQ = 307,                 /* "++"  */
    OPEN_PARENTHESIS = 308,        /* "("  */
    CLOSE_PARENTHESIS = 309,       /* ")"  */
    OPEN_SQ_BRACKET = 310,         /* "["  */
    CLOSE_SQ_BRACKET = 311,        /* "]"  */
    OPEN_CU_BRACKET = 312,         /* "{"  */
    CLOSE_CU_BRACKET = 313,        /* "}"  */
    COMMA = 314,                   /* ","  */
    BACKSLASH = 315,               /* "\\"  */
    DELIMITER = 316,               /* ";"  */
    NEWLINE = 317,                 /* NEWLINE  */
    END_OF_FILE = 318,             /* END_OF_FILE  */
    UNKNOWN = 319                  /* UNKNOWN  */
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
