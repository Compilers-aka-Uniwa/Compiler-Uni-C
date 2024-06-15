/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "simple-bison-code.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define YYDEBUG 1

int line = 1;
int errflag = 0;
int fatal_error_count = 0;

extern char *yytext;

void yyerror(char *);
void SyntaxError(const char *);

extern int yylex(void);
extern FILE *yyin;
extern FILE *yyout;

#line 91 "simple-bison-code.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "simple-bison-code.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_STRING = 4,                     /* STRING  */
  YYSYMBOL_INTEGER = 5,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_SBREAK = 7,                     /* SBREAK  */
  YYSYMBOL_SDO = 8,                        /* SDO  */
  YYSYMBOL_SIF = 9,                        /* SIF  */
  YYSYMBOL_SSIZEOF = 10,                   /* SSIZEOF  */
  YYSYMBOL_SCASE = 11,                     /* SCASE  */
  YYSYMBOL_SDOUBLE = 12,                   /* SDOUBLE  */
  YYSYMBOL_SINT = 13,                      /* SINT  */
  YYSYMBOL_SSTRUCT = 14,                   /* SSTRUCT  */
  YYSYMBOL_SFUNC = 15,                     /* SFUNC  */
  YYSYMBOL_SELSE = 16,                     /* SELSE  */
  YYSYMBOL_SLONG = 17,                     /* SLONG  */
  YYSYMBOL_SSWITCH = 18,                   /* SSWITCH  */
  YYSYMBOL_SCONST = 19,                    /* SCONST  */
  YYSYMBOL_SFLOAT = 20,                    /* SFLOAT  */
  YYSYMBOL_SRETURN = 21,                   /* SRETURN  */
  YYSYMBOL_SVOID = 22,                     /* SVOID  */
  YYSYMBOL_SCONTINUE = 23,                 /* SCONTINUE  */
  YYSYMBOL_SFOR = 24,                      /* SFOR  */
  YYSYMBOL_SSHORT = 25,                    /* SSHORT  */
  YYSYMBOL_SWHILE = 26,                    /* SWHILE  */
  YYSYMBOL_PLUS = 27,                      /* "+"  */
  YYSYMBOL_MULEQ = 28,                     /* "*="  */
  YYSYMBOL_PMINEQ = 29,                    /* "--"  */
  YYSYMBOL_MINUS = 30,                     /* "-"  */
  YYSYMBOL_DIVEQ = 31,                     /* "/="  */
  YYSYMBOL_LT = 32,                        /* "<"  */
  YYSYMBOL_MUL = 33,                       /* "*"  */
  YYSYMBOL_NOT = 34,                       /* "!"  */
  YYSYMBOL_GT = 35,                        /* ">"  */
  YYSYMBOL_DIV = 36,                       /* "/"  */
  YYSYMBOL_AND = 37,                       /* "&&"  */
  YYSYMBOL_LEQ = 38,                       /* "<="  */
  YYSYMBOL_MOD = 39,                       /* "%"  */
  YYSYMBOL_OR = 40,                        /* "||"  */
  YYSYMBOL_GREQ = 41,                      /* ">="  */
  YYSYMBOL_ASSIGN = 42,                    /* "="  */
  YYSYMBOL_EQUAL = 43,                     /* "=="  */
  YYSYMBOL_ADDR = 44,                      /* "&"  */
  YYSYMBOL_PLUSEQ = 45,                    /* "+="  */
  YYSYMBOL_NOTEQ = 46,                     /* "!="  */
  YYSYMBOL_MINEQ = 47,                     /* "-="  */
  YYSYMBOL_PPLUSEQ = 48,                   /* "++"  */
  YYSYMBOL_OPENPAR = 49,                   /* "("  */
  YYSYMBOL_CLOSEPAR = 50,                  /* ")"  */
  YYSYMBOL_OPENSQBRA = 51,                 /* "["  */
  YYSYMBOL_CLOSESQBRA = 52,                /* "]"  */
  YYSYMBOL_OPENCURBRA = 53,                /* "{"  */
  YYSYMBOL_CLOSECURBRA = 54,               /* "}"  */
  YYSYMBOL_COMMA = 55,                     /* ","  */
  YYSYMBOL_BACKSLASH = 56,                 /* "\\"  */
  YYSYMBOL_DELIMITER = 57,                 /* ";"  */
  YYSYMBOL_SSCAN = 58,                     /* SSCAN  */
  YYSYMBOL_SPRINT = 59,                    /* SPRINT  */
  YYSYMBOL_SLEN = 60,                      /* SLEN  */
  YYSYMBOL_SCMP = 61,                      /* SCMP  */
  YYSYMBOL_NEWLINE = 62,                   /* NEWLINE  */
  YYSYMBOL_UNKNOWN = 63,                   /* UNKNOWN  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_type = 66,                      /* type  */
  YYSYMBOL_var = 67,                       /* var  */
  YYSYMBOL_pos_elem = 68,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 69,              /* arr_elements  */
  YYSYMBOL_integ = 70,                     /* integ  */
  YYSYMBOL_fl = 71,                        /* fl  */
  YYSYMBOL_str = 72,                       /* str  */
  YYSYMBOL_func = 73,                      /* func  */
  YYSYMBOL_scan_params = 74,               /* scan_params  */
  YYSYMBOL_len_params = 75,                /* len_params  */
  YYSYMBOL_cmp_params = 76,                /* cmp_params  */
  YYSYMBOL_print_params = 77,              /* print_params  */
  YYSYMBOL_decl_func = 78,                 /* decl_func  */
  YYSYMBOL_name_func = 79,                 /* name_func  */
  YYSYMBOL_params = 80,                    /* params  */
  YYSYMBOL_type_params = 81,               /* type_params  */
  YYSYMBOL_sign = 82,                      /* sign  */
  YYSYMBOL_arithm_expr = 83,               /* arithm_expr  */
  YYSYMBOL_number = 84,                    /* number  */
  YYSYMBOL_assign = 85,                    /* assign  */
  YYSYMBOL_oper_eq = 86,                   /* oper_eq  */
  YYSYMBOL_val = 87,                       /* val  */
  YYSYMBOL_cmp_expr = 88,                  /* cmp_expr  */
  YYSYMBOL_merge_arr = 89,                 /* merge_arr  */
  YYSYMBOL_decl_statements = 90,           /* decl_statements  */
  YYSYMBOL_block_statement = 91,           /* block_statement  */
  YYSYMBOL_decl_statement = 92,            /* decl_statement  */
  YYSYMBOL_if_statement = 93,              /* if_statement  */
  YYSYMBOL_condition = 94,                 /* condition  */
  YYSYMBOL_while_statement = 95,           /* while_statement  */
  YYSYMBOL_for_statement = 96,             /* for_statement  */
  YYSYMBOL_error_stmt = 97                 /* error_stmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   339

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   318


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    52,    53,    61,    62,    63,    64,    65,
      69,    70,    74,    75,    79,    80,    81,    82,    86,    87,
      91,    92,    96,    97,   105,   106,   107,   108,   109,   113,
     117,   118,   119,   123,   124,   125,   129,   130,   131,   132,
     133,   134,   135,   139,   143,   144,   148,   149,   153,   154,
     158,   159,   160,   161,   165,   166,   167,   168,   169,   170,
     171,   175,   176,   177,   181,   182,   183,   184,   185,   189,
     190,   191,   192,   193,   194,   195,   196,   200,   201,   202,
     203,   204,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   222,   226,   227,   231,   235,   236,   237,
     238,   239,   240,   241,   242,   246,   250,   257,   261,   268,
     275,   282,   283
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "STRING",
  "INTEGER", "FLOAT", "SBREAK", "SDO", "SIF", "SSIZEOF", "SCASE",
  "SDOUBLE", "SINT", "SSTRUCT", "SFUNC", "SELSE", "SLONG", "SSWITCH",
  "SCONST", "SFLOAT", "SRETURN", "SVOID", "SCONTINUE", "SFOR", "SSHORT",
  "SWHILE", "\"+\"", "\"*=\"", "\"--\"", "\"-\"", "\"/=\"", "\"<\"",
  "\"*\"", "\"!\"", "\">\"", "\"/\"", "\"&&\"", "\"<=\"", "\"%\"",
  "\"||\"", "\">=\"", "\"=\"", "\"==\"", "\"&\"", "\"+=\"", "\"!=\"",
  "\"-=\"", "\"++\"", "\"(\"", "\")\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"",
  "\",\"", "\"\\\\\"", "\";\"", "SSCAN", "SPRINT", "SLEN", "SCMP",
  "NEWLINE", "UNKNOWN", "$accept", "program", "type", "var", "pos_elem",
  "arr_elements", "integ", "fl", "str", "func", "scan_params",
  "len_params", "cmp_params", "print_params", "decl_func", "name_func",
  "params", "type_params", "sign", "arithm_expr", "number", "assign",
  "oper_eq", "val", "cmp_expr", "merge_arr", "decl_statements",
  "block_statement", "decl_statement", "if_statement", "condition",
  "while_statement", "for_statement", "error_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-174)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -174,     7,  -174,   -34,   -24,    -6,  -174,  -174,  -174,  -174,
    -174,    13,  -174,    26,   100,   100,    89,    80,    97,   105,
     113,   100,   146,  -174,  -174,   107,  -174,  -174,   114,   133,
     147,  -174,  -174,  -174,  -174,  -174,  -174,  -174,    35,   264,
       0,   264,  -174,   141,   141,   153,   217,    35,     2,   131,
     -20,   319,  -174,   319,    46,   319,   319,  -174,   100,   183,
    -174,  -174,  -174,  -174,   112,  -174,  -174,  -174,  -174,  -174,
      57,  -174,  -174,  -174,   225,   191,   241,  -174,  -174,   201,
      71,  -174,  -174,    65,  -174,   205,  -174,  -174,    73,  -174,
     207,  -174,  -174,  -174,  -174,  -174,   178,  -174,   199,   206,
     152,   152,   213,  -174,  -174,   263,  -174,   231,   273,  -174,
    -174,  -174,  -174,   139,   239,   180,  -174,    35,   264,   264,
     264,   264,   264,   264,   264,   264,   219,   264,   219,  -174,
    -174,  -174,  -174,  -174,  -174,     9,   132,   140,  -174,  -174,
     131,  -174,  -174,  -174,  -174,   250,   175,   175,   175,   175,
     175,   135,  -174,   303,    75,  -174,   268,   275,  -174,  -174,
    -174,   242,  -174,   280,  -174,   218,   218,   293,   171,  -174,
    -174,   323,  -174,   324,  -174,   325,  -174,  -174,  -174,    72,
      72,  -174,  -174,  -174,   207,  -174,  -174,  -174,   210,  -174,
    -174,     6,     0,  -174,  -174,  -174,  -174,   282,  -174,  -174,
     283,   264,   219,   257,  -174,   219,   316,     6,  -174
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     1,     0,    10,     0,     7,     5,    44,     9,
       6,     0,     8,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   104,    98,     0,    99,    68,     0,     0,
       0,   100,   101,   102,   103,     3,   112,   111,     0,     0,
       0,     0,    10,    72,    71,     0,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,    69,     0,    10,
      43,     2,    94,    95,    37,    36,    38,    39,    41,    40,
       0,    84,    82,    83,     0,     0,     0,    96,    29,     0,
       0,    32,    31,     0,    30,     0,    34,    33,     0,    97,
       0,    61,    62,    63,    75,    76,    55,    79,    50,    51,
       0,     0,     0,    80,    54,    66,    77,    64,    65,    67,
      73,    74,    11,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      27,    22,    18,    20,    14,     0,     0,     0,    25,    26,
       0,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,    45,     0,     0,    42,    86,
      85,    92,    87,    91,    88,    89,    90,   105,     0,   109,
      15,     0,    16,     0,    17,     0,    35,    93,    55,    56,
      57,    58,    59,    60,    78,    81,    48,    47,     0,    13,
      12,     0,     0,    19,    21,    23,    49,     0,   106,   107,
       0,     0,     0,     0,   110,     0,     0,     0,   108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,   -99,    42,   -26,   -44,   163,   162,   161,    29,
    -174,  -174,   197,   -45,  -174,  -174,  -174,   150,   125,    23,
      -9,   -39,  -174,   188,   -41,  -174,  -174,  -117,     1,  -174,
    -173,  -174,  -174,  -174
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    21,    22,    93,   103,   135,   136,   137,    69,
      79,    85,    88,    70,    24,    25,   114,   154,   104,   105,
     106,    26,    27,   107,    74,   109,    28,    29,    30,    31,
      32,    33,    34,    35
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      76,    75,    80,    42,    84,    81,    82,     2,     3,   167,
       4,   169,    68,   108,   153,   197,     5,    45,   199,     6,
       7,    68,     8,    36,     9,    38,    60,    10,    37,    14,
      23,    11,    12,    13,   199,    58,    14,    89,    64,    65,
      66,    67,    94,    39,    95,    23,   110,   111,    15,    96,
      97,    98,    99,    83,    23,    15,    43,    44,   145,    16,
      16,   170,    40,    50,   171,    17,    18,    19,    20,   131,
     132,   133,   158,   100,   198,    41,   101,   159,   160,   161,
     162,   163,   164,   165,   166,   204,   168,    68,   206,   153,
     208,    68,     4,    17,    18,    19,    20,    83,     5,   102,
     112,     6,     7,    42,     8,   148,     9,   116,   149,    10,
      59,   150,   117,    11,    12,    13,     5,   134,    14,     6,
       7,   130,     8,   139,     9,   187,   117,    10,   140,    46,
     188,    11,    12,    13,    86,    87,    14,    15,   184,    97,
      91,    92,    64,    65,    66,    67,    47,    17,    18,    19,
      20,     6,     7,   200,    48,    15,     9,   141,   142,    10,
     203,    38,    49,   115,    12,    17,    18,    19,    20,   179,
     180,   181,   182,   183,    51,    52,    61,    53,   178,   100,
     141,   142,   101,   156,   172,   157,    83,   173,    54,   152,
      62,    55,   174,    56,    57,   175,    58,    17,    18,    19,
      20,    58,   100,   118,    63,   101,   119,    77,   120,   121,
     -84,   122,   123,   -84,   124,   -84,   -84,   125,   -84,   -84,
      78,   -84,     6,     7,   -84,   143,   144,     9,   192,   115,
      10,   -82,   113,   -78,   -82,    12,   -82,   -82,   -83,   -82,
     -82,   -83,   -82,   -83,   -83,   -82,   -83,   -83,   127,   -83,
     118,   129,   -83,   119,   -61,   138,   121,   118,   115,   123,
     119,   -62,   120,   121,    83,   122,   123,    71,   124,    72,
      73,   125,    16,   118,   118,   126,   119,   119,   120,   121,
     121,   122,   123,   123,   124,   124,   151,   125,   125,   118,
     146,   128,   119,   147,   120,   121,   148,   122,   123,   149,
     124,   155,   150,   125,   177,   118,   186,   205,   119,   191,
     120,   121,   118,   122,   123,   119,   124,   120,   121,   125,
     189,   123,    90,   124,    91,    92,   125,   190,   132,   131,
     133,   201,   207,   202,   193,   194,   195,   176,   196,   185
};

static const yytype_uint8 yycheck[] =
{
      41,    40,    47,     3,    48,     3,     4,     0,     1,   126,
       3,   128,    38,    54,   113,     9,     9,    16,   191,    12,
      13,    47,    15,    57,    17,    49,    25,    20,    62,    29,
       1,    24,    25,    26,   207,    55,    29,    57,     3,     4,
       5,     6,    51,    49,    53,    16,    55,    56,    48,     3,
       4,     5,     6,    51,    25,    48,    14,    15,   102,    53,
      53,    52,    49,    21,    55,    58,    59,    60,    61,     4,
       5,     6,   117,    27,   191,    49,    30,   118,   119,   120,
     121,   122,   123,   124,   125,   202,   127,   113,   205,   188,
     207,   117,     3,    58,    59,    60,    61,    51,     9,    53,
      58,    12,    13,     3,    15,    33,    17,    50,    36,    20,
       3,    39,    55,    24,    25,    26,     9,    52,    29,    12,
      13,    50,    15,    50,    17,    50,    55,    20,    55,    49,
      55,    24,    25,    26,     3,     4,    29,    48,     3,     4,
       5,     6,     3,     4,     5,     6,    49,    58,    59,    60,
      61,    12,    13,   192,    49,    48,    17,     5,     6,    20,
     201,    49,    49,    51,    25,    58,    59,    60,    61,   146,
     147,   148,   149,   150,    28,    29,    62,    31,     3,    27,
       5,     6,    30,     3,    52,     5,    51,    55,    42,    50,
      57,    45,    52,    47,    48,    55,    55,    58,    59,    60,
      61,    55,    27,    32,    57,    30,    35,    54,    37,    38,
      32,    40,    41,    35,    43,    37,    38,    46,    40,    41,
       3,    43,    12,    13,    46,   100,   101,    17,    57,    51,
      20,    32,    49,    55,    35,    25,    37,    38,    32,    40,
      41,    35,    43,    37,    38,    46,    40,    41,    57,    43,
      32,    50,    46,    35,    55,    50,    38,    32,    51,    41,
      35,    55,    37,    38,    51,    40,    41,     3,    43,     5,
       6,    46,    53,    32,    32,    50,    35,    35,    37,    38,
      38,    40,    41,    41,    43,    43,    55,    46,    46,    32,
      27,    50,    35,    30,    37,    38,    33,    40,    41,    36,
      43,    62,    39,    46,    54,    32,     3,    50,    35,    16,
      37,    38,    32,    40,    41,    35,    43,    37,    38,    46,
      52,    41,     3,    43,     5,     6,    46,    52,     5,     4,
       6,    49,    16,    50,   171,   173,   175,   140,   188,   151
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    65,     0,     1,     3,     9,    12,    13,    15,    17,
      20,    24,    25,    26,    29,    48,    53,    58,    59,    60,
      61,    66,    67,    73,    78,    79,    85,    86,    90,    91,
      92,    93,    94,    95,    96,    97,    57,    62,    49,    49,
      49,    49,     3,    67,    67,    92,    49,    49,    49,    49,
      67,    28,    29,    31,    42,    45,    47,    48,    55,     3,
      92,    62,    57,    57,     3,     4,     5,     6,    68,    73,
      77,     3,     5,     6,    88,    85,    88,    54,     3,    74,
      77,     3,     4,    51,    69,    75,     3,     4,    76,    57,
       3,     5,     6,    68,    84,    84,     3,     4,     5,     6,
      27,    30,    53,    69,    82,    83,    84,    87,    88,    89,
      84,    84,    67,    49,    80,    51,    50,    55,    32,    35,
      37,    38,    40,    41,    43,    46,    50,    57,    50,    50,
      50,     4,     5,     6,    52,    70,    71,    72,    50,    50,
      55,     5,     6,    82,    82,    69,    27,    30,    33,    36,
      39,    55,    50,    66,    81,    62,     3,     5,    77,    88,
      88,    88,    88,    88,    88,    88,    88,    91,    88,    91,
      52,    55,    52,    55,    52,    55,    76,    54,     3,    83,
      83,    83,    83,    83,     3,    87,     3,    50,    55,    52,
      52,    16,    57,    70,    71,    72,    81,     9,    91,    94,
      85,    49,    50,    88,    91,    50,    91,    16,    91
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    66,    66,    66,    66,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    74,
      75,    75,    75,    76,    76,    76,    77,    77,    77,    77,
      77,    77,    77,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    82,    82,    83,    83,    83,    83,    83,    83,
      83,    84,    84,    84,    85,    85,    85,    85,    85,    86,
      86,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    89,    90,    90,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    94,    94,    95,
      96,    97,    97
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     2,     0,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     2,     3,     3,     3,     1,     3,
       1,     3,     1,     3,     4,     4,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     4,     2,     3,     2,     3,
       1,     1,     2,     2,     1,     1,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     5,     7,     7,     7,     5,
       9,     2,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: program decl_statements NEWLINE  */
#line 51 "simple-bison-code.y"
                                                { if ((yyvsp[-1].sval) != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1346 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program error_stmt  */
#line 52 "simple-bison-code.y"
                                                { }
#line 1352 "simple-bison-code.tab.c"
    break;

  case 4: /* program: %empty  */
#line 53 "simple-bison-code.y"
                                                { }
#line 1358 "simple-bison-code.tab.c"
    break;

  case 5: /* type: SINT  */
#line 61 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1364 "simple-bison-code.tab.c"
    break;

  case 6: /* type: SFLOAT  */
#line 62 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1370 "simple-bison-code.tab.c"
    break;

  case 7: /* type: SDOUBLE  */
#line 63 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1376 "simple-bison-code.tab.c"
    break;

  case 8: /* type: SSHORT  */
#line 64 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1382 "simple-bison-code.tab.c"
    break;

  case 9: /* type: SLONG  */
#line 65 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1388 "simple-bison-code.tab.c"
    break;

  case 10: /* var: IDENTIFIER  */
#line 69 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1394 "simple-bison-code.tab.c"
    break;

  case 11: /* var: var "," var  */
#line 70 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1400 "simple-bison-code.tab.c"
    break;

  case 12: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 74 "simple-bison-code.y"
                                             { (yyval.sval) = strdup(yytext); }
#line 1406 "simple-bison-code.tab.c"
    break;

  case 13: /* pos_elem: IDENTIFIER "[" IDENTIFIER "]"  */
#line 75 "simple-bison-code.y"
                                             { (yyval.sval) = strdup(yytext); }
#line 1412 "simple-bison-code.tab.c"
    break;

  case 14: /* arr_elements: "[" "]"  */
#line 79 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1418 "simple-bison-code.tab.c"
    break;

  case 15: /* arr_elements: "[" integ "]"  */
#line 80 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1424 "simple-bison-code.tab.c"
    break;

  case 16: /* arr_elements: "[" fl "]"  */
#line 81 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1430 "simple-bison-code.tab.c"
    break;

  case 17: /* arr_elements: "[" str "]"  */
#line 82 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1436 "simple-bison-code.tab.c"
    break;

  case 18: /* integ: INTEGER  */
#line 86 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1442 "simple-bison-code.tab.c"
    break;

  case 19: /* integ: integ "," integ  */
#line 87 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1448 "simple-bison-code.tab.c"
    break;

  case 20: /* fl: FLOAT  */
#line 91 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1454 "simple-bison-code.tab.c"
    break;

  case 21: /* fl: fl "," fl  */
#line 92 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1460 "simple-bison-code.tab.c"
    break;

  case 22: /* str: STRING  */
#line 96 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1466 "simple-bison-code.tab.c"
    break;

  case 23: /* str: str "," str  */
#line 97 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1472 "simple-bison-code.tab.c"
    break;

  case 24: /* func: SSCAN "(" scan_params ")"  */
#line 105 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1478 "simple-bison-code.tab.c"
    break;

  case 25: /* func: SLEN "(" len_params ")"  */
#line 106 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1484 "simple-bison-code.tab.c"
    break;

  case 26: /* func: SCMP "(" cmp_params ")"  */
#line 107 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1490 "simple-bison-code.tab.c"
    break;

  case 27: /* func: SPRINT "(" print_params ")"  */
#line 108 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1496 "simple-bison-code.tab.c"
    break;

  case 28: /* func: IDENTIFIER "(" print_params ")"  */
#line 109 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1502 "simple-bison-code.tab.c"
    break;

  case 29: /* scan_params: IDENTIFIER  */
#line 113 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1508 "simple-bison-code.tab.c"
    break;

  case 30: /* len_params: arr_elements  */
#line 117 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1514 "simple-bison-code.tab.c"
    break;

  case 31: /* len_params: STRING  */
#line 118 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1520 "simple-bison-code.tab.c"
    break;

  case 32: /* len_params: IDENTIFIER  */
#line 119 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1526 "simple-bison-code.tab.c"
    break;

  case 33: /* cmp_params: STRING  */
#line 123 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1532 "simple-bison-code.tab.c"
    break;

  case 34: /* cmp_params: IDENTIFIER  */
#line 124 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1538 "simple-bison-code.tab.c"
    break;

  case 35: /* cmp_params: cmp_params "," cmp_params  */
#line 125 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1544 "simple-bison-code.tab.c"
    break;

  case 36: /* print_params: STRING  */
#line 129 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1550 "simple-bison-code.tab.c"
    break;

  case 37: /* print_params: IDENTIFIER  */
#line 130 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1556 "simple-bison-code.tab.c"
    break;

  case 38: /* print_params: INTEGER  */
#line 131 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1562 "simple-bison-code.tab.c"
    break;

  case 39: /* print_params: FLOAT  */
#line 132 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1568 "simple-bison-code.tab.c"
    break;

  case 40: /* print_params: func  */
#line 133 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1574 "simple-bison-code.tab.c"
    break;

  case 41: /* print_params: pos_elem  */
#line 134 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1580 "simple-bison-code.tab.c"
    break;

  case 42: /* print_params: print_params "," print_params  */
#line 135 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1586 "simple-bison-code.tab.c"
    break;

  case 43: /* decl_func: name_func decl_statement  */
#line 139 "simple-bison-code.y"
                                 { (yyval.sval) = strdup(yytext); }
#line 1592 "simple-bison-code.tab.c"
    break;

  case 44: /* name_func: SFUNC  */
#line 143 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1598 "simple-bison-code.tab.c"
    break;

  case 45: /* name_func: name_func IDENTIFIER params NEWLINE  */
#line 144 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1604 "simple-bison-code.tab.c"
    break;

  case 46: /* params: "(" ")"  */
#line 148 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1610 "simple-bison-code.tab.c"
    break;

  case 47: /* params: "(" type_params ")"  */
#line 149 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1616 "simple-bison-code.tab.c"
    break;

  case 48: /* type_params: type IDENTIFIER  */
#line 153 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1622 "simple-bison-code.tab.c"
    break;

  case 49: /* type_params: type_params "," type_params  */
#line 154 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1628 "simple-bison-code.tab.c"
    break;

  case 50: /* sign: INTEGER  */
#line 158 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1634 "simple-bison-code.tab.c"
    break;

  case 51: /* sign: FLOAT  */
#line 159 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1640 "simple-bison-code.tab.c"
    break;

  case 52: /* sign: "+" sign  */
#line 160 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1646 "simple-bison-code.tab.c"
    break;

  case 53: /* sign: "-" sign  */
#line 161 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1652 "simple-bison-code.tab.c"
    break;

  case 54: /* arithm_expr: sign  */
#line 165 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1658 "simple-bison-code.tab.c"
    break;

  case 55: /* arithm_expr: IDENTIFIER  */
#line 166 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1664 "simple-bison-code.tab.c"
    break;

  case 56: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 167 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1670 "simple-bison-code.tab.c"
    break;

  case 57: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 168 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1676 "simple-bison-code.tab.c"
    break;

  case 58: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 169 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1682 "simple-bison-code.tab.c"
    break;

  case 59: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 170 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1688 "simple-bison-code.tab.c"
    break;

  case 60: /* arithm_expr: arithm_expr "%" arithm_expr  */
#line 171 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1694 "simple-bison-code.tab.c"
    break;

  case 61: /* number: INTEGER  */
#line 175 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1700 "simple-bison-code.tab.c"
    break;

  case 62: /* number: FLOAT  */
#line 176 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1706 "simple-bison-code.tab.c"
    break;

  case 63: /* number: pos_elem  */
#line 177 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1712 "simple-bison-code.tab.c"
    break;

  case 64: /* assign: var "=" val  */
#line 181 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1718 "simple-bison-code.tab.c"
    break;

  case 65: /* assign: var "=" cmp_expr  */
#line 182 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1724 "simple-bison-code.tab.c"
    break;

  case 66: /* assign: var "=" arithm_expr  */
#line 183 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1730 "simple-bison-code.tab.c"
    break;

  case 67: /* assign: var "=" merge_arr  */
#line 184 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1736 "simple-bison-code.tab.c"
    break;

  case 68: /* assign: oper_eq  */
#line 185 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1742 "simple-bison-code.tab.c"
    break;

  case 69: /* oper_eq: var "++"  */
#line 189 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1748 "simple-bison-code.tab.c"
    break;

  case 70: /* oper_eq: var "--"  */
#line 190 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1754 "simple-bison-code.tab.c"
    break;

  case 71: /* oper_eq: "++" var  */
#line 191 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1760 "simple-bison-code.tab.c"
    break;

  case 72: /* oper_eq: "--" var  */
#line 192 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1766 "simple-bison-code.tab.c"
    break;

  case 73: /* oper_eq: var "+=" number  */
#line 193 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1772 "simple-bison-code.tab.c"
    break;

  case 74: /* oper_eq: var "-=" number  */
#line 194 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1778 "simple-bison-code.tab.c"
    break;

  case 75: /* oper_eq: var "*=" number  */
#line 195 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1784 "simple-bison-code.tab.c"
    break;

  case 76: /* oper_eq: var "/=" number  */
#line 196 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1790 "simple-bison-code.tab.c"
    break;

  case 77: /* val: number  */
#line 200 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1796 "simple-bison-code.tab.c"
    break;

  case 78: /* val: IDENTIFIER  */
#line 201 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1802 "simple-bison-code.tab.c"
    break;

  case 79: /* val: STRING  */
#line 202 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1808 "simple-bison-code.tab.c"
    break;

  case 80: /* val: arr_elements  */
#line 203 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1814 "simple-bison-code.tab.c"
    break;

  case 81: /* val: val "," val  */
#line 204 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1820 "simple-bison-code.tab.c"
    break;

  case 82: /* cmp_expr: INTEGER  */
#line 208 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1826 "simple-bison-code.tab.c"
    break;

  case 83: /* cmp_expr: FLOAT  */
#line 209 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1832 "simple-bison-code.tab.c"
    break;

  case 84: /* cmp_expr: IDENTIFIER  */
#line 210 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1838 "simple-bison-code.tab.c"
    break;

  case 85: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 211 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1844 "simple-bison-code.tab.c"
    break;

  case 86: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 212 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1850 "simple-bison-code.tab.c"
    break;

  case 87: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 213 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1856 "simple-bison-code.tab.c"
    break;

  case 88: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 214 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1862 "simple-bison-code.tab.c"
    break;

  case 89: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 215 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1868 "simple-bison-code.tab.c"
    break;

  case 90: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 216 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1874 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: cmp_expr "||" cmp_expr  */
#line 217 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1880 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: cmp_expr "&&" cmp_expr  */
#line 218 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1886 "simple-bison-code.tab.c"
    break;

  case 93: /* merge_arr: "{" arr_elements "}"  */
#line 222 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1892 "simple-bison-code.tab.c"
    break;

  case 94: /* decl_statements: block_statement ";"  */
#line 226 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1898 "simple-bison-code.tab.c"
    break;

  case 95: /* decl_statements: decl_statement ";"  */
#line 227 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1904 "simple-bison-code.tab.c"
    break;

  case 96: /* block_statement: "{" decl_statement "}"  */
#line 231 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1910 "simple-bison-code.tab.c"
    break;

  case 97: /* decl_statement: type var ";"  */
#line 235 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1916 "simple-bison-code.tab.c"
    break;

  case 98: /* decl_statement: decl_func  */
#line 236 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1922 "simple-bison-code.tab.c"
    break;

  case 99: /* decl_statement: assign  */
#line 237 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1928 "simple-bison-code.tab.c"
    break;

  case 100: /* decl_statement: if_statement  */
#line 238 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1934 "simple-bison-code.tab.c"
    break;

  case 101: /* decl_statement: condition  */
#line 239 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1940 "simple-bison-code.tab.c"
    break;

  case 102: /* decl_statement: while_statement  */
#line 240 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1946 "simple-bison-code.tab.c"
    break;

  case 103: /* decl_statement: for_statement  */
#line 241 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1952 "simple-bison-code.tab.c"
    break;

  case 104: /* decl_statement: func  */
#line 242 "simple-bison-code.y"
                                                   { (yyval.sval) = strdup(yytext); }
#line 1958 "simple-bison-code.tab.c"
    break;

  case 105: /* if_statement: SIF "(" cmp_expr ")" block_statement  */
#line 247 "simple-bison-code.y"
        {
            (yyval.sval) = strdup(yytext);
        }
#line 1966 "simple-bison-code.tab.c"
    break;

  case 106: /* if_statement: SIF "(" cmp_expr ")" block_statement SELSE block_statement  */
#line 251 "simple-bison-code.y"
        {
            (yyval.sval) = strdup(yytext);
        }
#line 1974 "simple-bison-code.tab.c"
    break;

  case 107: /* condition: SIF "(" cmp_expr ")" block_statement SELSE condition  */
#line 258 "simple-bison-code.y"
        {
            (yyval.sval) = strdup(yytext);
        }
#line 1982 "simple-bison-code.tab.c"
    break;

  case 108: /* condition: SIF "(" cmp_expr ")" block_statement SELSE block_statement  */
#line 262 "simple-bison-code.y"
        {
            (yyval.sval) = strdup(yytext);
        }
#line 1990 "simple-bison-code.tab.c"
    break;

  case 109: /* while_statement: SWHILE "(" cmp_expr ")" block_statement  */
#line 269 "simple-bison-code.y"
        {
            (yyval.sval) = strdup(yytext);
        }
#line 1998 "simple-bison-code.tab.c"
    break;

  case 110: /* for_statement: SFOR "(" assign ";" cmp_expr ";" assign ")" block_statement  */
#line 276 "simple-bison-code.y"
        {
            (yyval.sval) = strdup(yytext);
        }
#line 2006 "simple-bison-code.tab.c"
    break;

  case 111: /* error_stmt: error NEWLINE  */
#line 282 "simple-bison-code.y"
                        { SyntaxError("Invalid statement"); }
#line 2012 "simple-bison-code.tab.c"
    break;

  case 112: /* error_stmt: error ";"  */
#line 283 "simple-bison-code.y"
                        { SyntaxError("Invalid statement"); }
#line 2018 "simple-bison-code.tab.c"
    break;


#line 2022 "simple-bison-code.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 286 "simple-bison-code.y"


void SyntaxError(const char *s) {
    fprintf(stderr, "Syntax Error: %s at line %d\n", s, line);
    errflag++;
    // Η μέθοδος του πανικού: αναγνωρίζουμε και παραβλέπουμε tokens μέχρι το τέλος γραμμής ή τη δήλωση.
    while (1) {
        int tok = yylex();
        if (tok == NEWLINE || tok == DELIMITER || tok == 0) {
            break;
        }
    }
}

void yyerror(char *s) {
    SyntaxError(s);
}

int main(int argc, char *argv[]) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error: Could not open input file %s\n", argv[1]);
            return 1;
        }
    } else {
        yyin = stdin;
    }

    if (argc > 2) {
        yyout = fopen(argv[2], "w");
        if (!yyout) {
            fprintf(stderr, "Error: Could not open output file %s\n", argv[2]);
            return 1;
        }
    } else {
        yyout = stdout;
    }

    yyparse();

    if (yyin && yyin != stdin) fclose(yyin);
    if (yyout && yyout != stdout) fclose(yyout);

    return (fatal_error_count > 0) ? 1 : 0;
}

