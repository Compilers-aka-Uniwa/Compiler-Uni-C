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

/* Ορισμοί και δηλώσεις γλώσσας C. Οτιδήποτε έχει να κάνει με ορισμό ή αρχικοποίηση
   μεταβλητών & συναρτήσεων, αρχεία header και δηλώσεις #define μπαίνει σε αυτό το σημείο */
        
        #include <stdio.h>
        #include <string.h>
	#include <stdlib.h>
        #define YYSTYPE char*
        #define YYDEBUG 1

	int line = 1;
	int errflag = 0;

	extern char *yytext;
        int correct_words = 0;
        int correct_exprs = 0;
        int fatal_errors = 0; 
        int par_warnings = 0;
        int lex_warnings = 0;
	
        int yylex();
	void yyerror(const char *msg);

        /* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

        extern FILE *yyin;
        extern FILE *yyout;

#line 101 "simple-bison-code.tab.c"

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
  YYSYMBOL_TOKEN_ERROR = 63,               /* TOKEN_ERROR  */
  YYSYMBOL_YYACCEPT = 64,                  /* $accept  */
  YYSYMBOL_program = 65,                   /* program  */
  YYSYMBOL_decl_var = 66,                  /* decl_var  */
  YYSYMBOL_type = 67,                      /* type  */
  YYSYMBOL_var = 68,                       /* var  */
  YYSYMBOL_pos_elem = 69,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 70,              /* arr_elements  */
  YYSYMBOL_integ = 71,                     /* integ  */
  YYSYMBOL_fl = 72,                        /* fl  */
  YYSYMBOL_str = 73,                       /* str  */
  YYSYMBOL_build_func = 74,                /* build_func  */
  YYSYMBOL_func = 75,                      /* func  */
  YYSYMBOL_scan_params = 76,               /* scan_params  */
  YYSYMBOL_len_params = 77,                /* len_params  */
  YYSYMBOL_cmp_params = 78,                /* cmp_params  */
  YYSYMBOL_print_params = 79,              /* print_params  */
  YYSYMBOL_decl_func = 80,                 /* decl_func  */
  YYSYMBOL_name_func = 81,                 /* name_func  */
  YYSYMBOL_params = 82,                    /* params  */
  YYSYMBOL_type_params = 83,               /* type_params  */
  YYSYMBOL_sign = 84,                      /* sign  */
  YYSYMBOL_arithm_expr = 85,               /* arithm_expr  */
  YYSYMBOL_number = 86,                    /* number  */
  YYSYMBOL_assign = 87,                    /* assign  */
  YYSYMBOL_oper_eq = 88,                   /* oper_eq  */
  YYSYMBOL_val2 = 89,                      /* val2  */
  YYSYMBOL_val = 90,                       /* val  */
  YYSYMBOL_cmp_expr = 91,                  /* cmp_expr  */
  YYSYMBOL_merge_arr = 92,                 /* merge_arr  */
  YYSYMBOL_decl_statements = 93,           /* decl_statements  */
  YYSYMBOL_decl_statement = 94,            /* decl_statement  */
  YYSYMBOL_if_statement = 95,              /* if_statement  */
  YYSYMBOL_condition = 96,                 /* condition  */
  YYSYMBOL_block_statement = 97,           /* block_statement  */
  YYSYMBOL_while_statement = 98,           /* while_statement  */
  YYSYMBOL_for_statement = 99              /* for_statement  */
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
#define YYLAST   534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

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
       0,    94,    94,    95,    96,    97,   103,   107,   108,   109,
     110,   111,   113,   114,   115,   116,   117,   122,   123,   128,
     129,   134,   135,   136,   137,   138,   142,   143,   147,   148,
     152,   153,   158,   162,   163,   164,   165,   166,   170,   174,
     175,   176,   180,   181,   182,   186,   187,   188,   189,   190,
     191,   192,   197,   201,   203,   205,   209,   210,   214,   215,
     221,   222,   223,   224,   225,   229,   230,   231,   232,   233,
     234,   238,   239,   240,   246,   247,   248,   249,   250,   254,
     255,   256,   257,   258,   259,   260,   261,   265,   266,   270,
     271,   272,   273,   274,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   292,   293,   299,   300,
     302,   303,   310,   311,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   331,   335,   336,   338,
     343,   348,   353
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
  "NEWLINE", "TOKEN_ERROR", "$accept", "program", "decl_var", "type",
  "var", "pos_elem", "arr_elements", "integ", "fl", "str", "build_func",
  "func", "scan_params", "len_params", "cmp_params", "print_params",
  "decl_func", "name_func", "params", "type_params", "sign", "arithm_expr",
  "number", "assign", "oper_eq", "val2", "val", "cmp_expr", "merge_arr",
  "decl_statements", "decl_statement", "if_statement", "condition",
  "block_statement", "while_statement", "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-84)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-109)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -84,   182,   -84,   -51,   400,   243,   465,   144,     5,     8,
     382,    18,    30,    25,    53,   144,   231,    72,   231,   226,
      72,    33,   242,    38,    49,    65,    66,   -84,    85,    72,
     292,   -84,    89,   -84,   -84,   302,   -84,   378,   114,   -84,
     475,    29,   362,   -84,   -84,   -84,   -84,   -84,   -84,    23,
     -84,   -84,   -84,   152,   475,   242,   -84,   -84,   -84,   -84,
     -84,    41,   -84,   242,   -84,   -84,   -84,   -84,   -84,    31,
     -84,   -84,    31,   -84,   -84,   -84,   -84,    79,   222,   261,
     278,    36,    42,   119,    23,    37,    61,   -84,    31,   293,
     -84,   293,   219,    28,   293,   -84,    72,   -84,   422,   -84,
     231,   231,   231,   231,   231,   -84,   138,   133,   226,   226,
     226,   226,   226,   226,    -5,    46,   -84,   -84,   201,   -84,
     -84,   -84,   -84,   -84,   134,   152,   130,   -84,   124,   -84,
     -84,   -84,   199,   -84,   212,   -84,   215,   200,   -84,   -84,
     178,   148,   -84,   -84,   -84,   188,   -84,   -84,   155,   205,
     -84,   -84,   -84,   -84,   -84,   -84,   255,   -84,   315,   370,
      50,   378,   -84,   184,   475,    36,   205,   -84,   184,   -84,
     -84,   115,   202,   181,   181,   -84,   -84,   -84,   226,   -84,
     226,   -84,   113,   -84,   482,   -84,   128,   128,   228,   210,
     228,    -2,   159,   -84,    23,   237,   -84,   226,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,    61,    28,   -84,   289,   171,
     -84,   -84,   -84,    36,   210,   -84,   245,   257,   -84,   268,
     447,   -84,   -84,   -84,   -84,   382,   -84,   -84,   -84,    41,
     -84,   444,   274,   242,   -84
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     1,     0,    62,    60,    61,     0,     9,     7,
      53,    11,     8,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   125,     0,     0,
       0,   108,     0,    32,   119,     0,    65,   121,     0,    78,
     122,   123,     0,   112,   114,   124,   115,   116,     3,     0,
      96,    94,    95,     0,   127,     0,    13,    14,    54,    15,
      12,     0,    16,     0,    62,    60,    61,    63,    17,    82,
      64,   105,    81,    30,    26,    28,    21,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,   117,     6,     0,
      80,     0,     0,     0,     0,    79,     0,   118,    62,    52,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,   113,    46,    45,
      47,    48,    50,    49,     0,     0,     0,   126,     0,   131,
      25,    22,     0,    23,     0,    24,     0,     0,   130,    38,
       0,     0,    41,    40,    39,     0,    43,    42,     0,    88,
      71,    72,    73,    87,    85,    86,    96,    91,    94,    95,
      92,    76,    89,    74,    75,    77,    90,    92,    83,    84,
      18,     0,     0,    66,    67,    68,    69,    70,     0,    98,
       0,    97,   104,    99,   103,   100,   101,   102,     0,   109,
       0,     0,     0,    37,     0,     0,   128,     0,    27,    29,
      31,    33,    36,    34,    35,     0,     0,    56,     0,     0,
      55,   107,   106,   111,   110,     4,     0,     0,    51,     0,
       0,    44,    93,    58,    57,     0,    20,    19,   129,     0,
      59,     0,     0,     0,   132
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,   -10,   -16,   -42,   -73,   193,   207,   208,
     -84,   -41,   -84,   -84,   141,   -68,   -84,   -84,   -84,   118,
     247,   430,   -69,   288,   123,   244,   -83,    -1,     2,   334,
     -33,   -84,     0,   -84,   -84,   -84
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    28,    29,    30,   152,    31,    78,    79,    80,
      32,    33,   140,   145,   148,   124,    34,    35,   172,   209,
      36,    37,   153,    38,    39,   154,   163,    40,    81,    42,
      43,    44,    55,    45,    46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,    69,    99,    41,    72,    77,    54,   122,   123,   117,
     168,    48,   144,    88,    54,    63,   141,    56,    71,   160,
     167,    57,   127,   162,   162,   114,   118,   119,   120,   121,
     129,   166,   157,   150,   151,    59,    68,    73,    74,    75,
     142,   143,   122,   123,    68,     4,    21,     5,     6,   117,
      60,     7,    54,   126,     8,     9,   114,    10,   188,    11,
     215,   137,    12,   114,   146,   147,    13,    14,    15,    16,
      17,    17,    18,   190,    61,    68,    19,  -108,    62,    21,
     170,    23,    24,    25,    26,    76,    96,    83,    21,    20,
      20,   164,   115,    21,   165,    22,   138,    21,    84,   137,
      23,    24,    25,    26,    27,   179,   181,   182,   183,   184,
     185,   186,   187,  -108,    85,    86,   189,   191,   118,   119,
     120,   121,   139,   222,    54,   195,   218,     8,     9,   122,
     123,   130,    11,   167,    96,    12,    50,   162,    51,    52,
      14,    50,    87,    51,    52,   106,    97,    50,   107,    51,
      52,   109,   122,   123,   111,    50,   112,    51,    52,   113,
     106,   208,   216,   107,   217,   207,   109,    19,   180,   111,
     178,   105,    19,    23,    24,    25,    26,   211,    19,   212,
     196,   197,     2,     3,   193,     4,    19,     5,     6,   194,
     213,     7,   214,    53,     8,     9,   220,    10,   202,    11,
     234,   125,    12,   194,    74,   204,    13,    14,    15,    16,
     205,    17,    18,   231,   102,   208,    19,   103,    75,    73,
     104,   224,   156,   157,   158,   159,   225,   190,   201,    50,
      20,    51,    52,    21,    64,    22,    65,    66,   203,   206,
      23,    24,    25,    26,    27,     4,    16,     5,     6,    18,
      49,     7,   192,    19,     8,     9,   192,    10,    16,    11,
      19,    18,    12,    67,   210,    70,    13,    14,    15,    16,
      21,    17,    18,   137,   131,   -94,    19,   132,   -94,    21,
     -94,   -94,   -62,   -94,   -94,   -62,   -94,   219,   -62,   -94,
      20,   -62,   223,    21,   -62,    22,   149,   226,   150,   151,
      23,    24,    25,    26,    27,    98,   192,     5,     6,   227,
     -90,     7,   -62,   133,     8,     9,   134,    10,   228,    11,
      89,    90,    12,    91,   233,   198,    13,    14,    15,    16,
     135,    17,    18,   136,    92,   155,    19,    93,   169,    94,
      95,   199,   -60,   230,   200,   -60,   221,    96,   -60,   128,
      20,   -60,   232,    21,   -60,    22,    82,     0,     0,     0,
      23,    24,    25,    26,    27,     4,     0,     5,     6,     0,
     -71,     7,   -60,     0,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,     0,    13,    14,    15,    16,
       0,    17,    18,     0,     8,     9,    19,   -61,     0,    11,
     -61,     0,    12,   -61,     0,   100,   -61,    14,   101,   -61,
      20,   102,     0,    21,   103,    22,     0,   104,     0,     0,
      23,    24,    25,    26,   116,   -72,     0,   -61,   -17,   -17,
       0,   -17,   -96,     0,     0,   -96,     0,   -96,   -96,     0,
     -96,   -96,   -17,   -96,     0,   -17,   -96,   -17,   -17,    49,
     -17,   -17,     0,   -17,   -96,   -17,     0,   -96,     0,   -96,
     -96,     0,   -96,   -96,   -17,   -96,     0,   -17,   -96,   -17,
     -17,   171,    89,    90,     0,    91,     0,   -17,     0,   106,
       0,     0,   107,     0,   108,   109,     0,   110,   111,    93,
     112,    94,    95,   113,     0,     0,     0,   -95,     0,    96,
     -95,     0,   -95,   -95,   229,   -95,   -95,   106,   -95,     0,
     107,   -95,   108,   109,   106,   110,   111,   107,   112,   108,
     109,   113,   161,   111,     0,   112,     0,     0,   113,     0,
     173,   174,   175,   176,   177
};

static const yytype_int16 yycheck[] =
{
      10,    17,    35,     1,    20,    21,     7,    49,    49,    42,
      93,    62,    85,    29,    15,    15,    84,    12,    19,    92,
      93,    13,    55,    92,    93,    27,     3,     4,     5,     6,
      63,     3,     4,     5,     6,    17,     3,     4,     5,     6,
       3,     4,    84,    84,     3,     3,    51,     5,     6,    82,
      20,     9,    53,    53,    12,    13,    27,    15,    63,    17,
      62,    63,    20,    27,     3,     4,    24,    25,    26,    27,
      29,    29,    30,    27,    49,     3,    34,    27,    25,    51,
      96,    58,    59,    60,    61,    52,    55,    49,    51,    48,
      48,    92,    63,    51,    92,    53,    54,    51,    49,    63,
      58,    59,    60,    61,    62,   106,   107,   108,   109,   110,
     111,   112,   113,    63,    49,    49,   114,   115,     3,     4,
       5,     6,     3,   206,   125,   125,   194,    12,    13,   171,
     171,    52,    17,   206,    55,    20,     3,   206,     5,     6,
      25,     3,    57,     5,     6,    32,    57,     3,    35,     5,
       6,    38,   194,   194,    41,     3,    43,     5,     6,    46,
      32,   171,     3,    35,     5,    50,    38,    34,    35,    41,
      32,    57,    34,    58,    59,    60,    61,   178,    34,   180,
      50,    57,     0,     1,    50,     3,    34,     5,     6,    55,
     188,     9,   190,    49,    12,    13,   197,    15,    50,    17,
     233,    49,    20,    55,     5,    50,    24,    25,    26,    27,
      55,    29,    30,   229,    33,   225,    34,    36,     6,     4,
      39,    50,     3,     4,     5,     6,    55,    27,    50,     3,
      48,     5,     6,    51,     3,    53,     5,     6,    50,    55,
      58,    59,    60,    61,    62,     3,    27,     5,     6,    30,
      49,     9,    51,    34,    12,    13,    51,    15,    27,    17,
      34,    30,    20,    16,    62,    18,    24,    25,    26,    27,
      51,    29,    30,    63,    52,    32,    34,    55,    35,    51,
      37,    38,    27,    40,    41,    30,    43,    50,    33,    46,
      48,    36,     3,    51,    39,    53,     3,    52,     5,     6,
      58,    59,    60,    61,    62,     3,    51,     5,     6,    52,
      55,     9,    57,    52,    12,    13,    55,    15,    50,    17,
      28,    29,    20,    31,    50,   132,    24,    25,    26,    27,
      52,    29,    30,    55,    42,    91,    34,    45,    94,    47,
      48,   134,    27,   225,   136,    30,   205,    55,    33,    61,
      48,    36,   229,    51,    39,    53,    22,    -1,    -1,    -1,
      58,    59,    60,    61,    62,     3,    -1,     5,     6,    -1,
      55,     9,    57,    -1,    12,    13,    -1,    15,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,    -1,    12,    13,    34,    27,    -1,    17,
      30,    -1,    20,    33,    -1,    27,    36,    25,    30,    39,
      48,    33,    -1,    51,    36,    53,    -1,    39,    -1,    -1,
      58,    59,    60,    61,    62,    55,    -1,    57,    28,    29,
      -1,    31,    32,    -1,    -1,    35,    -1,    37,    38,    -1,
      40,    41,    42,    43,    -1,    45,    46,    47,    48,    49,
      28,    29,    -1,    31,    32,    55,    -1,    35,    -1,    37,
      38,    -1,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    28,    29,    -1,    31,    -1,    55,    -1,    32,
      -1,    -1,    35,    -1,    37,    38,    -1,    40,    41,    45,
      43,    47,    48,    46,    -1,    -1,    -1,    32,    -1,    55,
      35,    -1,    37,    38,    57,    40,    41,    32,    43,    -1,
      35,    46,    37,    38,    32,    40,    41,    35,    43,    37,
      38,    46,    92,    41,    -1,    43,    -1,    -1,    46,    -1,
     100,   101,   102,   103,   104
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    65,     0,     1,     3,     5,     6,     9,    12,    13,
      15,    17,    20,    24,    25,    26,    27,    29,    30,    34,
      48,    51,    53,    58,    59,    60,    61,    62,    66,    67,
      68,    70,    74,    75,    80,    81,    84,    85,    87,    88,
      91,    92,    93,    94,    95,    97,    98,    99,    62,    49,
       3,     5,     6,    49,    91,    96,    12,    13,    67,    17,
      20,    49,    25,    96,     3,     5,     6,    84,     3,    68,
      84,    91,    68,     4,     5,     6,    52,    68,    71,    72,
      73,    92,    93,    49,    49,    49,    49,    57,    68,    28,
      29,    31,    42,    45,    47,    48,    55,    57,     3,    94,
      27,    30,    33,    36,    39,    57,    32,    35,    37,    38,
      40,    41,    43,    46,    27,    63,    62,    94,     3,     4,
       5,     6,    69,    75,    79,    49,    96,    94,    87,    94,
      52,    52,    55,    52,    55,    52,    55,    63,    54,     3,
      76,    79,     3,     4,    70,    77,     3,     4,    78,     3,
       5,     6,    69,    86,    89,    89,     3,     4,     5,     6,
      70,    85,    86,    90,    91,    92,     3,    70,    90,    89,
      68,    49,    82,    85,    85,    85,    85,    85,    32,    91,
      35,    91,    91,    91,    91,    91,    91,    91,    63,    92,
      27,    92,    51,    50,    55,    96,    50,    57,    71,    72,
      73,    50,    50,    50,    50,    55,    55,    50,    67,    83,
      62,    91,    91,    92,    92,    62,     3,     5,    79,    50,
      91,    78,    90,     3,    50,    55,    52,    52,    50,    57,
      83,    68,    88,    50,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    66,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    70,    70,    71,    71,    72,    72,
      73,    73,    74,    75,    75,    75,    75,    75,    76,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    80,    81,    81,    81,    82,    82,    83,    83,
      84,    84,    84,    84,    84,    85,    85,    85,    85,    85,
      85,    86,    86,    86,    87,    87,    87,    87,    87,    88,
      88,    88,    88,    88,    88,    88,    88,    89,    89,    90,
      90,    90,    90,    90,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    92,    92,
      92,    92,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    95,    96,    96,    96,
      97,    98,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     5,     0,     2,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     1,     3,     4,
       4,     2,     3,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     4,     4,     4,     4,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     2,     1,     2,     4,     2,     3,     2,     3,
       1,     1,     1,     2,     2,     1,     3,     3,     3,     3,
       3,     1,     1,     1,     3,     3,     3,     3,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     4,     4,     1,     3,
       4,     4,     1,     2,     1,     1,     1,     2,     2,     1,
       2,     1,     1,     1,     1,     1,     3,     1,     3,     5,
       3,     3,     9
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
#line 94 "simple-bison-code.y"
                                                          { correct_exprs++; if (yyvsp[-1] != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, yyvsp[-1]); }
#line 1413 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program error NEWLINE  */
#line 95 "simple-bison-code.y"
                                                          { fatal_errors++; errflag = 1; yyerrok; }
#line 1419 "simple-bison-code.tab.c"
    break;

  case 4: /* program: program merge_arr TOKEN_ERROR merge_arr NEWLINE  */
#line 96 "simple-bison-code.y"
                                                          { yyerrok; }
#line 1425 "simple-bison-code.tab.c"
    break;

  case 5: /* program: %empty  */
#line 97 "simple-bison-code.y"
                                                          { }
#line 1431 "simple-bison-code.tab.c"
    break;

  case 6: /* decl_var: type var  */
#line 103 "simple-bison-code.y"
                 { yyval = strdup(yytext); }
#line 1437 "simple-bison-code.tab.c"
    break;

  case 7: /* type: SINT  */
#line 107 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1443 "simple-bison-code.tab.c"
    break;

  case 8: /* type: SFLOAT  */
#line 108 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1449 "simple-bison-code.tab.c"
    break;

  case 9: /* type: SDOUBLE  */
#line 109 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1455 "simple-bison-code.tab.c"
    break;

  case 10: /* type: SSHORT  */
#line 110 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1461 "simple-bison-code.tab.c"
    break;

  case 11: /* type: SLONG  */
#line 111 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1467 "simple-bison-code.tab.c"
    break;

  case 12: /* type: SFLOAT SFLOAT  */
#line 113 "simple-bison-code.y"
                          { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double float detected at Line=%d\n", line); }
#line 1473 "simple-bison-code.tab.c"
    break;

  case 13: /* type: SDOUBLE SDOUBLE  */
#line 114 "simple-bison-code.y"
                          { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double double detected at Line=%d\n", line); }
#line 1479 "simple-bison-code.tab.c"
    break;

  case 14: /* type: SINT SINT  */
#line 115 "simple-bison-code.y"
                          { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double int detected at Line=%d\n", line); }
#line 1485 "simple-bison-code.tab.c"
    break;

  case 15: /* type: SLONG SLONG  */
#line 116 "simple-bison-code.y"
                          { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double long detected at Line=%d\n", line); }
#line 1491 "simple-bison-code.tab.c"
    break;

  case 16: /* type: SSHORT SSHORT  */
#line 117 "simple-bison-code.y"
                          { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double short detected at Line=%d\n", line); }
#line 1497 "simple-bison-code.tab.c"
    break;

  case 17: /* var: IDENTIFIER  */
#line 122 "simple-bison-code.y"
                       { yyval = strdup(yytext); }
#line 1503 "simple-bison-code.tab.c"
    break;

  case 18: /* var: var "," var  */
#line 123 "simple-bison-code.y"
                       { yyval = strdup(yytext); }
#line 1509 "simple-bison-code.tab.c"
    break;

  case 19: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 128 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1515 "simple-bison-code.tab.c"
    break;

  case 20: /* pos_elem: IDENTIFIER "[" IDENTIFIER "]"  */
#line 129 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1521 "simple-bison-code.tab.c"
    break;

  case 21: /* arr_elements: "[" "]"  */
#line 134 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1527 "simple-bison-code.tab.c"
    break;

  case 22: /* arr_elements: "[" integ "]"  */
#line 135 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1533 "simple-bison-code.tab.c"
    break;

  case 23: /* arr_elements: "[" fl "]"  */
#line 136 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1539 "simple-bison-code.tab.c"
    break;

  case 24: /* arr_elements: "[" str "]"  */
#line 137 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1545 "simple-bison-code.tab.c"
    break;

  case 25: /* arr_elements: "[" var "]"  */
#line 138 "simple-bison-code.y"
                          { yyval = strdup(yytext); }
#line 1551 "simple-bison-code.tab.c"
    break;

  case 26: /* integ: INTEGER  */
#line 142 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1557 "simple-bison-code.tab.c"
    break;

  case 27: /* integ: integ "," integ  */
#line 143 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1563 "simple-bison-code.tab.c"
    break;

  case 28: /* fl: FLOAT  */
#line 147 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1569 "simple-bison-code.tab.c"
    break;

  case 29: /* fl: fl "," fl  */
#line 148 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1575 "simple-bison-code.tab.c"
    break;

  case 30: /* str: STRING  */
#line 152 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1581 "simple-bison-code.tab.c"
    break;

  case 31: /* str: str "," str  */
#line 153 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1587 "simple-bison-code.tab.c"
    break;

  case 32: /* build_func: func  */
#line 158 "simple-bison-code.y"
              { yyval = strdup(yytext); }
#line 1593 "simple-bison-code.tab.c"
    break;

  case 33: /* func: SSCAN "(" scan_params ")"  */
#line 162 "simple-bison-code.y"
                                          { yyval = strdup(yytext); }
#line 1599 "simple-bison-code.tab.c"
    break;

  case 34: /* func: SLEN "(" len_params ")"  */
#line 163 "simple-bison-code.y"
                                          { yyval = strdup(yytext); }
#line 1605 "simple-bison-code.tab.c"
    break;

  case 35: /* func: SCMP "(" cmp_params ")"  */
#line 164 "simple-bison-code.y"
                                          { yyval = strdup(yytext); }
#line 1611 "simple-bison-code.tab.c"
    break;

  case 36: /* func: SPRINT "(" print_params ")"  */
#line 165 "simple-bison-code.y"
                                          { yyval = strdup(yytext); }
#line 1617 "simple-bison-code.tab.c"
    break;

  case 37: /* func: IDENTIFIER "(" print_params ")"  */
#line 166 "simple-bison-code.y"
                                          { yyval = strdup(yytext); }
#line 1623 "simple-bison-code.tab.c"
    break;

  case 38: /* scan_params: IDENTIFIER  */
#line 170 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1629 "simple-bison-code.tab.c"
    break;

  case 39: /* len_params: arr_elements  */
#line 174 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1635 "simple-bison-code.tab.c"
    break;

  case 40: /* len_params: STRING  */
#line 175 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1641 "simple-bison-code.tab.c"
    break;

  case 41: /* len_params: IDENTIFIER  */
#line 176 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1647 "simple-bison-code.tab.c"
    break;

  case 42: /* cmp_params: STRING  */
#line 180 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1653 "simple-bison-code.tab.c"
    break;

  case 43: /* cmp_params: IDENTIFIER  */
#line 181 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1659 "simple-bison-code.tab.c"
    break;

  case 44: /* cmp_params: cmp_params "," cmp_params  */
#line 182 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1665 "simple-bison-code.tab.c"
    break;

  case 45: /* print_params: STRING  */
#line 186 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1671 "simple-bison-code.tab.c"
    break;

  case 46: /* print_params: IDENTIFIER  */
#line 187 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1677 "simple-bison-code.tab.c"
    break;

  case 47: /* print_params: INTEGER  */
#line 188 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1683 "simple-bison-code.tab.c"
    break;

  case 48: /* print_params: FLOAT  */
#line 189 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1689 "simple-bison-code.tab.c"
    break;

  case 49: /* print_params: func  */
#line 190 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1695 "simple-bison-code.tab.c"
    break;

  case 50: /* print_params: pos_elem  */
#line 191 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1701 "simple-bison-code.tab.c"
    break;

  case 51: /* print_params: print_params "," print_params  */
#line 192 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1707 "simple-bison-code.tab.c"
    break;

  case 52: /* decl_func: name_func decl_statement  */
#line 197 "simple-bison-code.y"
                                 { yyval = strdup(yytext); }
#line 1713 "simple-bison-code.tab.c"
    break;

  case 53: /* name_func: SFUNC  */
#line 201 "simple-bison-code.y"
                                                { yyval = strdup(yytext); }
#line 1719 "simple-bison-code.tab.c"
    break;

  case 54: /* name_func: SFUNC type  */
#line 203 "simple-bison-code.y"
                                                { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Return type unnecessary at Line=%d\n", line); }
#line 1725 "simple-bison-code.tab.c"
    break;

  case 55: /* name_func: name_func IDENTIFIER params NEWLINE  */
#line 205 "simple-bison-code.y"
                                                { yyval = strdup(yytext); }
#line 1731 "simple-bison-code.tab.c"
    break;

  case 56: /* params: "(" ")"  */
#line 209 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1737 "simple-bison-code.tab.c"
    break;

  case 57: /* params: "(" type_params ")"  */
#line 210 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1743 "simple-bison-code.tab.c"
    break;

  case 58: /* type_params: type IDENTIFIER  */
#line 214 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1749 "simple-bison-code.tab.c"
    break;

  case 59: /* type_params: type_params "," type_params  */
#line 215 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1755 "simple-bison-code.tab.c"
    break;

  case 60: /* sign: INTEGER  */
#line 221 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1761 "simple-bison-code.tab.c"
    break;

  case 61: /* sign: FLOAT  */
#line 222 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1767 "simple-bison-code.tab.c"
    break;

  case 62: /* sign: IDENTIFIER  */
#line 223 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1773 "simple-bison-code.tab.c"
    break;

  case 63: /* sign: "+" sign  */
#line 224 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1779 "simple-bison-code.tab.c"
    break;

  case 64: /* sign: "-" sign  */
#line 225 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1785 "simple-bison-code.tab.c"
    break;

  case 65: /* arithm_expr: sign  */
#line 229 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1791 "simple-bison-code.tab.c"
    break;

  case 66: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 230 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1797 "simple-bison-code.tab.c"
    break;

  case 67: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 231 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1803 "simple-bison-code.tab.c"
    break;

  case 68: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 232 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1809 "simple-bison-code.tab.c"
    break;

  case 69: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 233 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1815 "simple-bison-code.tab.c"
    break;

  case 70: /* arithm_expr: arithm_expr "%" arithm_expr  */
#line 234 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1821 "simple-bison-code.tab.c"
    break;

  case 71: /* number: INTEGER  */
#line 238 "simple-bison-code.y"
                    { yyval = strdup(yytext); }
#line 1827 "simple-bison-code.tab.c"
    break;

  case 72: /* number: FLOAT  */
#line 239 "simple-bison-code.y"
                    { yyval = strdup(yytext); }
#line 1833 "simple-bison-code.tab.c"
    break;

  case 73: /* number: pos_elem  */
#line 240 "simple-bison-code.y"
                    { yyval = strdup(yytext); }
#line 1839 "simple-bison-code.tab.c"
    break;

  case 74: /* assign: var "=" val  */
#line 246 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1845 "simple-bison-code.tab.c"
    break;

  case 75: /* assign: var "=" cmp_expr  */
#line 247 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1851 "simple-bison-code.tab.c"
    break;

  case 76: /* assign: var "=" arithm_expr  */
#line 248 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1857 "simple-bison-code.tab.c"
    break;

  case 77: /* assign: var "=" merge_arr  */
#line 249 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1863 "simple-bison-code.tab.c"
    break;

  case 78: /* assign: oper_eq  */
#line 250 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1869 "simple-bison-code.tab.c"
    break;

  case 79: /* oper_eq: var "++"  */
#line 254 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1875 "simple-bison-code.tab.c"
    break;

  case 80: /* oper_eq: var "--"  */
#line 255 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1881 "simple-bison-code.tab.c"
    break;

  case 81: /* oper_eq: "++" var  */
#line 256 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1887 "simple-bison-code.tab.c"
    break;

  case 82: /* oper_eq: "--" var  */
#line 257 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1893 "simple-bison-code.tab.c"
    break;

  case 83: /* oper_eq: var "+=" val  */
#line 258 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1899 "simple-bison-code.tab.c"
    break;

  case 84: /* oper_eq: var "-=" val2  */
#line 259 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1905 "simple-bison-code.tab.c"
    break;

  case 85: /* oper_eq: var "*=" val2  */
#line 260 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1911 "simple-bison-code.tab.c"
    break;

  case 86: /* oper_eq: var "/=" val2  */
#line 261 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1917 "simple-bison-code.tab.c"
    break;

  case 87: /* val2: number  */
#line 265 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1923 "simple-bison-code.tab.c"
    break;

  case 88: /* val2: IDENTIFIER  */
#line 266 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1929 "simple-bison-code.tab.c"
    break;

  case 89: /* val: number  */
#line 270 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1935 "simple-bison-code.tab.c"
    break;

  case 90: /* val: IDENTIFIER  */
#line 271 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1941 "simple-bison-code.tab.c"
    break;

  case 91: /* val: STRING  */
#line 272 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1947 "simple-bison-code.tab.c"
    break;

  case 92: /* val: arr_elements  */
#line 273 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1953 "simple-bison-code.tab.c"
    break;

  case 93: /* val: val "," val  */
#line 274 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1959 "simple-bison-code.tab.c"
    break;

  case 94: /* cmp_expr: INTEGER  */
#line 279 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1965 "simple-bison-code.tab.c"
    break;

  case 95: /* cmp_expr: FLOAT  */
#line 280 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1971 "simple-bison-code.tab.c"
    break;

  case 96: /* cmp_expr: IDENTIFIER  */
#line 281 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1977 "simple-bison-code.tab.c"
    break;

  case 97: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 282 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1983 "simple-bison-code.tab.c"
    break;

  case 98: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 283 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1989 "simple-bison-code.tab.c"
    break;

  case 99: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 284 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1995 "simple-bison-code.tab.c"
    break;

  case 100: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 285 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 2001 "simple-bison-code.tab.c"
    break;

  case 101: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 286 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 2007 "simple-bison-code.tab.c"
    break;

  case 102: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 287 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 2013 "simple-bison-code.tab.c"
    break;

  case 103: /* cmp_expr: cmp_expr "||" cmp_expr  */
#line 288 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 2019 "simple-bison-code.tab.c"
    break;

  case 104: /* cmp_expr: cmp_expr "&&" cmp_expr  */
#line 289 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 2025 "simple-bison-code.tab.c"
    break;

  case 105: /* cmp_expr: "!" cmp_expr  */
#line 290 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 2031 "simple-bison-code.tab.c"
    break;

  case 106: /* cmp_expr: cmp_expr ">" ">" cmp_expr  */
#line 292 "simple-bison-code.y"
                                    { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double > detected at Line=%d\n", line-1); }
#line 2037 "simple-bison-code.tab.c"
    break;

  case 107: /* cmp_expr: cmp_expr "<" "<" cmp_expr  */
#line 293 "simple-bison-code.y"
                                    { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double < detected at Line=%d\n", line-1); }
#line 2043 "simple-bison-code.tab.c"
    break;

  case 108: /* merge_arr: arr_elements  */
#line 299 "simple-bison-code.y"
                                              { yyval = strdup(yytext); }
#line 2049 "simple-bison-code.tab.c"
    break;

  case 109: /* merge_arr: merge_arr "+" merge_arr  */
#line 300 "simple-bison-code.y"
                                              { yyval = strdup(yytext); }
#line 2055 "simple-bison-code.tab.c"
    break;

  case 110: /* merge_arr: merge_arr TOKEN_ERROR "+" merge_arr  */
#line 302 "simple-bison-code.y"
                                              { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Invalid character in array merge detected at Line=%d\n", line); }
#line 2061 "simple-bison-code.tab.c"
    break;

  case 111: /* merge_arr: merge_arr "+" TOKEN_ERROR merge_arr  */
#line 303 "simple-bison-code.y"
                                              { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Invalid character in array merge detected at Line=%d\n", line); }
#line 2067 "simple-bison-code.tab.c"
    break;

  case 112: /* decl_statements: decl_statement  */
#line 310 "simple-bison-code.y"
                                         { yyval = yyvsp[0];  }
#line 2073 "simple-bison-code.tab.c"
    break;

  case 113: /* decl_statements: decl_statements decl_statement  */
#line 311 "simple-bison-code.y"
                                         { yyval = yyvsp[0];  if (yyvsp[0] != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, yyvsp[0]); }
#line 2079 "simple-bison-code.tab.c"
    break;

  case 114: /* decl_statement: if_statement  */
#line 315 "simple-bison-code.y"
                                         { yyval = "\"Δήλωση if\""; }
#line 2085 "simple-bison-code.tab.c"
    break;

  case 115: /* decl_statement: while_statement  */
#line 316 "simple-bison-code.y"
                                         { yyval = "\"Δήλωση while\""; }
#line 2091 "simple-bison-code.tab.c"
    break;

  case 116: /* decl_statement: for_statement  */
#line 317 "simple-bison-code.y"
                                         { yyval = "\"Δήλωση for\""; }
#line 2097 "simple-bison-code.tab.c"
    break;

  case 117: /* decl_statement: decl_var ";"  */
#line 318 "simple-bison-code.y"
                                         { yyval = "\"Δήλωση μεταβλητής\""; }
#line 2103 "simple-bison-code.tab.c"
    break;

  case 118: /* decl_statement: build_func ";"  */
#line 319 "simple-bison-code.y"
                                         { yyval = "\"Κλήση συνάρτησης\""; }
#line 2109 "simple-bison-code.tab.c"
    break;

  case 119: /* decl_statement: decl_func  */
#line 320 "simple-bison-code.y"
                                         { yyval = "\"Δήλωση συναρτήσεων χρήστη\""; }
#line 2115 "simple-bison-code.tab.c"
    break;

  case 120: /* decl_statement: assign ";"  */
#line 321 "simple-bison-code.y"
                                         { yyval = "\"Ανάθεση τιμής σε μεταβλητή\""; }
#line 2121 "simple-bison-code.tab.c"
    break;

  case 121: /* decl_statement: arithm_expr  */
#line 322 "simple-bison-code.y"
                                         { yyval = "\"Αριθμητική έκφραση\""; }
#line 2127 "simple-bison-code.tab.c"
    break;

  case 122: /* decl_statement: cmp_expr  */
#line 323 "simple-bison-code.y"
                                         { yyval = "\"Σύγκριση\""; }
#line 2133 "simple-bison-code.tab.c"
    break;

  case 123: /* decl_statement: merge_arr  */
#line 324 "simple-bison-code.y"
                                         { yyval = "\"Συνένωση πινάκων\""; }
#line 2139 "simple-bison-code.tab.c"
    break;

  case 124: /* decl_statement: block_statement  */
#line 325 "simple-bison-code.y"
                                         { yyval = "\"Σύνθετες δηλώσεις\""; }
#line 2145 "simple-bison-code.tab.c"
    break;

  case 125: /* decl_statement: NEWLINE  */
#line 326 "simple-bison-code.y"
                                         { yyval = "\n"; }
#line 2151 "simple-bison-code.tab.c"
    break;

  case 126: /* if_statement: SIF condition decl_statement  */
#line 331 "simple-bison-code.y"
                                         { yyval = strdup(yytext); }
#line 2157 "simple-bison-code.tab.c"
    break;

  case 127: /* condition: cmp_expr  */
#line 335 "simple-bison-code.y"
                               { yyval = strdup(yytext); }
#line 2163 "simple-bison-code.tab.c"
    break;

  case 128: /* condition: "(" condition ")"  */
#line 336 "simple-bison-code.y"
                               { yyval = strdup(yytext); }
#line 2169 "simple-bison-code.tab.c"
    break;

  case 129: /* condition: "(" "(" condition ")" ")"  */
#line 338 "simple-bison-code.y"
                                      { par_warnings++; yyval = strdup(yytext); fprintf(yyout, "## Warning ## -> Double parethensis detected at Line=%d\n", line); }
#line 2175 "simple-bison-code.tab.c"
    break;

  case 130: /* block_statement: "{" decl_statements "}"  */
#line 343 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 2181 "simple-bison-code.tab.c"
    break;

  case 131: /* while_statement: SWHILE condition decl_statement  */
#line 348 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 2187 "simple-bison-code.tab.c"
    break;

  case 132: /* for_statement: SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement  */
#line 353 "simple-bison-code.y"
                                                                    { yyval = strdup(yytext); }
#line 2193 "simple-bison-code.tab.c"
    break;


#line 2197 "simple-bison-code.tab.c"

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

#line 356 "simple-bison-code.y"



/* Η συνάρτηση main που αποτελεί και το σημείο εκκίνησης του προγράμματος.
   Στην συγκεκριμένη περίπτωση απλά καλεί τη συνάρτηση yyparse του Bison
   για να ξεκινήσει η συντακτική ανάλυση. */
int main(int argc, char **argv)  
{       
        yydebug = 0;

	if (argc == 3)
        {
                if (!(yyin = fopen(argv[1], "r"))) 
                {
                        fprintf(stderr, "Cannot read file: %s\n", argv[1]);
                        return 1;
                }
                if (!(yyout = fopen(argv[2], "w"))) 
                {
                        fprintf(stderr, "Cannot create file: %s\n", argv[2]);
                        return 1;
                }
        }
		
	int parse = yyparse();

        fprintf(yyout, "\n\n\t\tΣΤΑΤΙΣΤΙΚΑ ΣΥΝΤΑΚΤΙΚΗΣ ΑΝΑΛΥΣΗΣ\n\n");

        if (errflag == 0 && parse == 0) 
                fprintf(yyout, "BISON -> Η συντακτική ανάλυση ολοκλήρωθηκε με επιτυχία\n");
        else
                fprintf(yyout, "BISON -> Η συντακτική ανάλυση ολοκλήρωθηκε με αποτυχία\n");
        
        if (par_warnings > 0)
                fprintf(yyout, "\t\t(με %d warnings)\n\n", par_warnings);

       
        fprintf(yyout, "\t\tΣΩΣΤΕΣ ΛΕΞΕΙΣ: %d\n", correct_words);
        fprintf(yyout, "\t\tΣΩΣΤΕΣ ΕΚΦΡΑΣΕΙΣ: %d\n", correct_exprs);
        fprintf(yyout, "\t\tΛΑΘΟΣ ΛΕΞΕΙΣ: %d\n", lex_warnings);
        fprintf(yyout, "\t\tΛΑΘΟΣ ΕΚΦΡΑΣΕΙΣ: %d\n", fatal_errors);
        fprintf(yyout, "\n");

        fclose(yyin);
        fclose(yyout);

	return 0;
} 
