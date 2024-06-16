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

#line 100 "simple-bison-code.tab.c"

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
  YYSYMBOL_64_ = 64,                       /* "(("  */
  YYSYMBOL_65_ = 65,                       /* "))"  */
  YYSYMBOL_YYACCEPT = 66,                  /* $accept  */
  YYSYMBOL_program = 67,                   /* program  */
  YYSYMBOL_decl_var = 68,                  /* decl_var  */
  YYSYMBOL_type = 69,                      /* type  */
  YYSYMBOL_var = 70,                       /* var  */
  YYSYMBOL_pos_elem = 71,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 72,              /* arr_elements  */
  YYSYMBOL_integ = 73,                     /* integ  */
  YYSYMBOL_fl = 74,                        /* fl  */
  YYSYMBOL_str = 75,                       /* str  */
  YYSYMBOL_build_func = 76,                /* build_func  */
  YYSYMBOL_func = 77,                      /* func  */
  YYSYMBOL_scan_params = 78,               /* scan_params  */
  YYSYMBOL_len_params = 79,                /* len_params  */
  YYSYMBOL_cmp_params = 80,                /* cmp_params  */
  YYSYMBOL_print_params = 81,              /* print_params  */
  YYSYMBOL_decl_func = 82,                 /* decl_func  */
  YYSYMBOL_name_func = 83,                 /* name_func  */
  YYSYMBOL_params = 84,                    /* params  */
  YYSYMBOL_type_params = 85,               /* type_params  */
  YYSYMBOL_sign = 86,                      /* sign  */
  YYSYMBOL_arithm_expr = 87,               /* arithm_expr  */
  YYSYMBOL_number = 88,                    /* number  */
  YYSYMBOL_assign = 89,                    /* assign  */
  YYSYMBOL_oper_eq = 90,                   /* oper_eq  */
  YYSYMBOL_val = 91,                       /* val  */
  YYSYMBOL_cmp_expr = 92,                  /* cmp_expr  */
  YYSYMBOL_merge_arr = 93,                 /* merge_arr  */
  YYSYMBOL_decl_statements = 94,           /* decl_statements  */
  YYSYMBOL_decl_statement = 95,            /* decl_statement  */
  YYSYMBOL_if_statement = 96,              /* if_statement  */
  YYSYMBOL_condition = 97,                 /* condition  */
  YYSYMBOL_block_statement = 98,           /* block_statement  */
  YYSYMBOL_while_statement = 99,           /* while_statement  */
  YYSYMBOL_for_statement = 100             /* for_statement  */
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
#define YYLAST   600

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  230

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   320


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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   105,   106,   107,   115,   119,   120,   121,
     122,   123,   127,   128,   133,   134,   139,   140,   141,   142,
     146,   147,   151,   152,   156,   157,   162,   166,   167,   168,
     169,   170,   174,   178,   179,   180,   184,   185,   186,   190,
     191,   192,   193,   194,   195,   196,   201,   205,   206,   207,
     211,   212,   216,   217,   223,   224,   225,   226,   230,   231,
     232,   233,   234,   235,   236,   240,   241,   242,   248,   249,
     250,   251,   252,   256,   257,   258,   259,   260,   261,   262,
     263,   267,   268,   269,   270,   271,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   289,   290,
     295,   296,   297,   298,   299,   309,   310,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   330,
     334,   335,   337,   338,   339,   340,   344,   349,   354
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
  "NEWLINE", "TOKEN_ERROR", "\"((\"", "\"))\"", "$accept", "program",
  "decl_var", "type", "var", "pos_elem", "arr_elements", "integ", "fl",
  "str", "build_func", "func", "scan_params", "len_params", "cmp_params",
  "print_params", "decl_func", "name_func", "params", "type_params",
  "sign", "arithm_expr", "number", "assign", "oper_eq", "val", "cmp_expr",
  "merge_arr", "decl_statements", "decl_statement", "if_statement",
  "condition", "block_statement", "while_statement", "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -71,   167,   -71,   -27,   502,   348,   408,    19,   -71,   -71,
     306,   -71,   -71,    -1,   -71,    19,   133,    52,   133,   156,
      52,    71,   347,    15,    16,    30,    40,   -71,    53,    52,
     217,   -71,    54,   -71,   -71,   407,   -71,   357,    72,   -71,
     468,    18,   467,   -71,   -71,   -71,   -71,   -71,   -71,    66,
     -71,   -71,   -71,    19,    19,   468,   227,   -71,   102,   227,
     -71,   -71,   -71,   -71,    75,   -71,   -71,    75,   -71,   -71,
     -71,   -71,   119,   186,   203,    93,   287,   154,    66,    29,
      38,   -71,    75,   218,   -71,   218,    82,   218,   218,   -71,
      52,   -71,   524,   -71,   172,   172,   172,   172,   172,   -71,
     149,   131,   156,   156,   156,   156,   156,   156,    27,   107,
      -7,   -71,   -71,   -37,   -71,   -71,   -71,   -71,   -71,   -34,
       2,   135,   -71,   -71,   147,   -71,   -71,   200,   -71,   216,
     -71,   230,   222,   -71,   -71,   193,    67,   -71,   -71,   -71,
     221,   -71,   -71,    85,   199,   -71,   -71,   -71,   -71,   -71,
     180,   -71,   240,   300,    92,   357,   -71,   213,   468,    93,
     -71,   -71,   -71,    34,   212,   -71,   112,   112,   -71,   -71,
     -71,   172,   -71,   172,   -71,   171,   -71,   550,   -71,   228,
     228,   107,    10,   219,   107,    80,   195,   -71,    66,   -71,
     -71,   -71,   156,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
      38,    57,   -71,   281,   114,   -71,   357,   357,    93,    10,
     -71,   239,   242,   -71,   543,   -71,   199,   -71,   -71,   -71,
     -71,   306,   -71,   -71,   102,   -71,   277,   248,   347,   -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     1,     0,    59,    54,    55,     0,     9,     7,
      47,    11,     8,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,   100,     0,    26,   112,     0,    58,   114,     0,    72,
     115,   116,     0,   105,   107,   117,   108,   109,     3,     0,
      88,    86,    87,     0,     0,   120,     0,    48,     0,     0,
      54,    55,    56,    12,    76,    57,    97,    75,    24,    20,
      22,    16,     0,     0,     0,   116,     0,     0,     0,     0,
       0,   110,     6,     0,    74,     0,     0,     0,     0,    73,
       0,   111,    59,    46,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,   106,    40,    39,    41,    42,    44,    43,     0,
     125,     0,   124,   119,     0,   127,    17,     0,    18,     0,
      19,     0,     0,   126,    32,     0,     0,    35,    34,    33,
       0,    37,    36,     0,     0,    65,    66,    67,    79,    80,
      88,    83,    86,    87,   100,    70,    81,    68,    69,    71,
      77,    78,    13,     0,     0,    59,    60,    61,    62,    63,
      64,     0,    90,     0,    89,    96,    91,    95,    92,    93,
      94,     0,   101,   104,     0,     0,     0,    31,     0,   121,
     123,   122,     0,    21,    23,    25,    27,    30,    28,    29,
       0,     0,    50,     0,     0,    49,    99,    98,   103,   102,
       4,     0,     0,    45,     0,    38,    82,    84,    85,    52,
      51,     0,    15,    14,     0,    53,     0,     0,     0,   128
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -71,   -71,   -10,   -16,   -44,   -69,   174,   181,   178,
     -71,   -42,   -71,   -71,   103,   -70,   -71,   -71,   -71,    94,
     265,   -67,   278,   262,   104,   128,    -4,     5,   312,   -33,
     -71,     3,   -71,   -71,   -71
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    28,    29,    30,   147,    31,    72,    73,    74,
      32,    33,   135,   140,   143,   119,    34,    35,   164,   204,
      36,    37,   156,    38,    39,   157,    40,    75,    42,    43,
      44,    56,    45,    46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    64,    93,    55,    67,   117,    41,   118,   136,   112,
     139,    55,    49,    82,   186,    66,   187,   154,    59,   155,
     184,   188,    50,   123,    51,    52,   125,   166,   167,   168,
     169,   170,   137,   138,   117,    48,   118,   113,   114,   115,
     116,   141,   142,   112,    21,   108,     8,     9,    58,    55,
      55,    11,   189,    19,    12,    63,   120,   121,   109,    14,
     216,   151,   145,   146,    77,    78,   109,   190,    53,   113,
     114,   115,   116,   132,   162,    68,    69,    70,    21,    79,
      21,   110,   158,    54,   202,   150,   151,   152,   153,    80,
     181,   159,    23,    24,    25,    26,   172,   174,   175,   176,
     177,   178,   179,   180,   206,    63,   207,   108,    21,    16,
      81,    91,    18,   182,   183,   185,    19,   197,   213,   117,
     108,   118,   188,    71,    23,    24,    25,    26,   109,    99,
      90,    17,   217,    21,    50,   199,    51,    52,    60,    61,
     200,   109,   210,   132,   117,    96,   118,   -84,    97,   -84,
      20,    98,    50,   203,    51,    52,   132,   134,    21,    50,
      16,    51,    52,    18,   220,    19,   173,     2,     3,   221,
       4,   126,     5,     6,   127,   165,     7,    60,    61,     8,
       9,   171,    10,    19,    11,   191,   208,    12,   214,   209,
      19,    13,    14,    15,    16,   229,    17,    18,   211,    16,
     212,    19,    18,   100,   192,    69,   101,   -59,   226,   103,
     -59,   203,   105,   -59,   106,    20,   -59,   107,    21,   -59,
      22,   144,    70,   145,   146,    23,    24,    25,    26,    27,
       4,   186,     5,     6,    68,   -82,     7,   -59,   128,     8,
       9,   129,    10,   196,    11,    83,    84,    12,    85,   184,
     186,    13,    14,    15,    16,   130,    17,    18,   131,    86,
     100,    19,    87,   101,    88,    89,   103,   -54,   201,   105,
     -54,   198,    90,   -54,   205,    20,   -54,   122,    21,   -54,
      22,    62,   132,    65,   219,    23,    24,    25,    26,    27,
       4,   222,     5,     6,   223,   -65,     7,   -54,   228,     8,
       9,   193,    10,   215,    11,    83,    84,    12,    85,   195,
     194,    13,    14,    15,    16,   225,    17,    18,     8,     9,
     124,    19,    87,    11,    88,    89,    12,   -55,   227,   218,
     -55,    14,    90,   -55,    76,    20,   -55,     0,    21,   -55,
      22,   133,     0,     0,     0,    23,    24,    25,    26,    27,
       4,     0,     5,     6,     0,   -66,     7,   -55,     0,     8,
       9,   148,    10,   149,    11,   160,   161,    12,     0,     0,
       0,    13,    14,    15,    16,     0,    17,    18,     0,     0,
     -86,    19,     0,   -86,    94,   -86,   -86,    95,   -86,   -86,
      96,   -86,     0,    97,   -86,    20,    98,     0,    21,     0,
      22,     0,     0,     0,     0,    23,    24,    25,    26,    27,
      92,     0,     5,     6,     0,     0,     7,     0,     0,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
       0,    13,    14,    15,    16,     0,    17,    18,     0,     0,
     -87,    19,     0,   -87,     0,   -87,   -87,     0,   -87,   -87,
       0,   -87,     0,     0,   -87,    20,     0,     0,    21,     0,
      22,     0,     0,     0,     0,    23,    24,    25,    26,    27,
       4,     0,     5,     6,     0,     0,     7,     0,     0,     8,
       9,     0,    10,     0,    11,     0,     0,    12,     0,     0,
       0,    13,    14,    15,    16,     0,    17,    18,     0,     0,
     100,    19,     0,   101,     0,   102,   103,     0,   104,   105,
       0,   106,     0,     0,   107,    20,     0,     0,    21,     0,
      22,     0,     0,     0,     0,    23,    24,    25,    26,   111,
     -12,   -12,     0,   -12,   -88,     0,     0,   -88,     0,   -88,
     -88,     0,   -88,   -88,   -12,   -88,     0,   -12,   -88,   -12,
     -12,    49,   -12,   -12,     0,   -12,   -88,   -12,     0,   -88,
       0,   -88,   -88,     0,   -88,   -88,   -12,   -88,     0,   -12,
     -88,   -12,   -12,   163,     0,   100,     0,     0,   101,   -12,
     102,   103,   100,   104,   105,   101,   106,   102,   103,   107,
       0,   105,     0,   106,     0,     0,   107,     0,     0,     0,
     224
};

static const yytype_int16 yycheck[] =
{
      10,    17,    35,     7,    20,    49,     1,    49,    78,    42,
      79,    15,    49,    29,    51,    19,    50,    86,    15,    86,
      27,    55,     3,    56,     5,     6,    59,    94,    95,    96,
      97,    98,     3,     4,    78,    62,    78,     3,     4,     5,
       6,     3,     4,    76,    51,    27,    12,    13,    49,    53,
      54,    17,    50,    34,    20,     3,    53,    54,    48,    25,
       3,     4,     5,     6,    49,    49,    48,    65,    49,     3,
       4,     5,     6,    63,    90,     4,     5,     6,    51,    49,
      51,    63,    86,    64,    50,     3,     4,     5,     6,    49,
      63,    86,    58,    59,    60,    61,   100,   101,   102,   103,
     104,   105,   106,   107,   171,     3,   173,    27,    51,    27,
      57,    57,    30,   108,   109,   110,    34,    50,   188,   163,
      27,   163,    55,    52,    58,    59,    60,    61,    48,    57,
      55,    29,   201,    51,     3,    50,     5,     6,     5,     6,
      55,    48,    62,    63,   188,    33,   188,    55,    36,    57,
      48,    39,     3,   163,     5,     6,    63,     3,    51,     3,
      27,     5,     6,    30,    50,    34,    35,     0,     1,    55,
       3,    52,     5,     6,    55,     3,     9,     5,     6,    12,
      13,    32,    15,    34,    17,    50,   181,    20,   192,   184,
      34,    24,    25,    26,    27,   228,    29,    30,     3,    27,
       5,    34,    30,    32,    57,     5,    35,    27,   224,    38,
      30,   221,    41,    33,    43,    48,    36,    46,    51,    39,
      53,     3,     6,     5,     6,    58,    59,    60,    61,    62,
       3,    51,     5,     6,     4,    55,     9,    57,    52,    12,
      13,    55,    15,    50,    17,    28,    29,    20,    31,    27,
      51,    24,    25,    26,    27,    52,    29,    30,    55,    42,
      32,    34,    45,    35,    47,    48,    38,    27,    55,    41,
      30,    50,    55,    33,    62,    48,    36,    50,    51,    39,
      53,    16,    63,    18,     3,    58,    59,    60,    61,    62,
       3,    52,     5,     6,    52,    55,     9,    57,    50,    12,
      13,   127,    15,   200,    17,    28,    29,    20,    31,   131,
     129,    24,    25,    26,    27,   221,    29,    30,    12,    13,
      58,    34,    45,    17,    47,    48,    20,    27,   224,   201,
      30,    25,    55,    33,    22,    48,    36,    -1,    51,    39,
      53,    54,    -1,    -1,    -1,    58,    59,    60,    61,    62,
       3,    -1,     5,     6,    -1,    55,     9,    57,    -1,    12,
      13,    83,    15,    85,    17,    87,    88,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,    -1,    -1,
      32,    34,    -1,    35,    27,    37,    38,    30,    40,    41,
      33,    43,    -1,    36,    46,    48,    39,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
       3,    -1,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    -1,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,    -1,    -1,
      32,    34,    -1,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    43,    -1,    -1,    46,    48,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
       3,    -1,     5,     6,    -1,    -1,     9,    -1,    -1,    12,
      13,    -1,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,    26,    27,    -1,    29,    30,    -1,    -1,
      32,    34,    -1,    35,    -1,    37,    38,    -1,    40,    41,
      -1,    43,    -1,    -1,    46,    48,    -1,    -1,    51,    -1,
      53,    -1,    -1,    -1,    -1,    58,    59,    60,    61,    62,
      28,    29,    -1,    31,    32,    -1,    -1,    35,    -1,    37,
      38,    -1,    40,    41,    42,    43,    -1,    45,    46,    47,
      48,    49,    28,    29,    -1,    31,    32,    55,    -1,    35,
      -1,    37,    38,    -1,    40,    41,    42,    43,    -1,    45,
      46,    47,    48,    49,    -1,    32,    -1,    -1,    35,    55,
      37,    38,    32,    40,    41,    35,    43,    37,    38,    46,
      -1,    41,    -1,    43,    -1,    -1,    46,    -1,    -1,    -1,
      57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    67,     0,     1,     3,     5,     6,     9,    12,    13,
      15,    17,    20,    24,    25,    26,    27,    29,    30,    34,
      48,    51,    53,    58,    59,    60,    61,    62,    68,    69,
      70,    72,    76,    77,    82,    83,    86,    87,    89,    90,
      92,    93,    94,    95,    96,    98,    99,   100,    62,    49,
       3,     5,     6,    49,    64,    92,    97,    69,    49,    97,
       5,     6,    86,     3,    70,    86,    92,    70,     4,     5,
       6,    52,    73,    74,    75,    93,    94,    49,    49,    49,
      49,    57,    70,    28,    29,    31,    42,    45,    47,    48,
      55,    57,     3,    95,    27,    30,    33,    36,    39,    57,
      32,    35,    37,    38,    40,    41,    43,    46,    27,    48,
      63,    62,    95,     3,     4,     5,     6,    71,    77,    81,
      97,    97,    50,    95,    89,    95,    52,    55,    52,    55,
      52,    55,    63,    54,     3,    78,    81,     3,     4,    72,
      79,     3,     4,    80,     3,     5,     6,    71,    88,    88,
       3,     4,     5,     6,    72,    87,    88,    91,    92,    93,
      88,    88,    70,    49,    84,     3,    87,    87,    87,    87,
      87,    32,    92,    35,    92,    92,    92,    92,    92,    92,
      92,    63,    93,    93,    27,    93,    51,    50,    55,    50,
      65,    50,    57,    73,    74,    75,    50,    50,    50,    50,
      55,    55,    50,    69,    85,    62,    87,    87,    93,    93,
      62,     3,     5,    81,    92,    80,     3,    72,    91,     3,
      50,    55,    52,    52,    57,    85,    70,    90,    50,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    68,    69,    69,    69,
      69,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    76,    77,    77,    77,
      77,    77,    78,    79,    79,    79,    80,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    82,    83,    83,    83,
      84,    84,    85,    85,    86,    86,    86,    86,    87,    87,
      87,    87,    87,    87,    87,    88,    88,    88,    89,    89,
      89,    89,    89,    90,    90,    90,    90,    90,    90,    90,
      90,    91,    91,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    93,    93,    93,    94,    94,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    96,
      97,    97,    97,    97,    97,    97,    98,    99,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     5,     0,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     4,     2,     3,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     4,     4,
       4,     4,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     3,     2,     1,     2,     4,
       2,     3,     2,     3,     1,     1,     2,     2,     1,     1,
       3,     3,     3,     3,     3,     1,     1,     1,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     3,     3,     3,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     4,     4,
       1,     3,     4,     4,     3,     1,     2,     1,     1,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     3,     3,     3,     2,     2,     3,     3,     9
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
#line 104 "simple-bison-code.y"
                                                { correct_exprs++; if ((yyvsp[-1].sval) != "\n") fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1422 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program error NEWLINE  */
#line 105 "simple-bison-code.y"
                                                { fatal_errors++; errflag = 1; yyerrok; }
#line 1428 "simple-bison-code.tab.c"
    break;

  case 4: /* program: program merge_arr TOKEN_ERROR merge_arr NEWLINE  */
#line 106 "simple-bison-code.y"
                                                          { yyerrok; }
#line 1434 "simple-bison-code.tab.c"
    break;

  case 5: /* program: %empty  */
#line 107 "simple-bison-code.y"
                                                { }
#line 1440 "simple-bison-code.tab.c"
    break;

  case 6: /* decl_var: type var  */
#line 115 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1446 "simple-bison-code.tab.c"
    break;

  case 7: /* type: SINT  */
#line 119 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1452 "simple-bison-code.tab.c"
    break;

  case 8: /* type: SFLOAT  */
#line 120 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1458 "simple-bison-code.tab.c"
    break;

  case 9: /* type: SDOUBLE  */
#line 121 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1464 "simple-bison-code.tab.c"
    break;

  case 10: /* type: SSHORT  */
#line 122 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1470 "simple-bison-code.tab.c"
    break;

  case 11: /* type: SLONG  */
#line 123 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1476 "simple-bison-code.tab.c"
    break;

  case 12: /* var: IDENTIFIER  */
#line 127 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1482 "simple-bison-code.tab.c"
    break;

  case 13: /* var: var "," var  */
#line 128 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1488 "simple-bison-code.tab.c"
    break;

  case 14: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 133 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1494 "simple-bison-code.tab.c"
    break;

  case 15: /* pos_elem: IDENTIFIER "[" IDENTIFIER "]"  */
#line 134 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1500 "simple-bison-code.tab.c"
    break;

  case 16: /* arr_elements: "[" "]"  */
#line 139 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1506 "simple-bison-code.tab.c"
    break;

  case 17: /* arr_elements: "[" integ "]"  */
#line 140 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1512 "simple-bison-code.tab.c"
    break;

  case 18: /* arr_elements: "[" fl "]"  */
#line 141 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1518 "simple-bison-code.tab.c"
    break;

  case 19: /* arr_elements: "[" str "]"  */
#line 142 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1524 "simple-bison-code.tab.c"
    break;

  case 20: /* integ: INTEGER  */
#line 146 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1530 "simple-bison-code.tab.c"
    break;

  case 21: /* integ: integ "," integ  */
#line 147 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1536 "simple-bison-code.tab.c"
    break;

  case 22: /* fl: FLOAT  */
#line 151 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1542 "simple-bison-code.tab.c"
    break;

  case 23: /* fl: fl "," fl  */
#line 152 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1548 "simple-bison-code.tab.c"
    break;

  case 24: /* str: STRING  */
#line 156 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1554 "simple-bison-code.tab.c"
    break;

  case 25: /* str: str "," str  */
#line 157 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1560 "simple-bison-code.tab.c"
    break;

  case 26: /* build_func: func  */
#line 162 "simple-bison-code.y"
              { (yyval.sval) = strdup(yytext); }
#line 1566 "simple-bison-code.tab.c"
    break;

  case 27: /* func: SSCAN "(" scan_params ")"  */
#line 166 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1572 "simple-bison-code.tab.c"
    break;

  case 28: /* func: SLEN "(" len_params ")"  */
#line 167 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1578 "simple-bison-code.tab.c"
    break;

  case 29: /* func: SCMP "(" cmp_params ")"  */
#line 168 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1584 "simple-bison-code.tab.c"
    break;

  case 30: /* func: SPRINT "(" print_params ")"  */
#line 169 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1590 "simple-bison-code.tab.c"
    break;

  case 31: /* func: IDENTIFIER "(" print_params ")"  */
#line 170 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1596 "simple-bison-code.tab.c"
    break;

  case 32: /* scan_params: IDENTIFIER  */
#line 174 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1602 "simple-bison-code.tab.c"
    break;

  case 33: /* len_params: arr_elements  */
#line 178 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1608 "simple-bison-code.tab.c"
    break;

  case 34: /* len_params: STRING  */
#line 179 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1614 "simple-bison-code.tab.c"
    break;

  case 35: /* len_params: IDENTIFIER  */
#line 180 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1620 "simple-bison-code.tab.c"
    break;

  case 36: /* cmp_params: STRING  */
#line 184 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1626 "simple-bison-code.tab.c"
    break;

  case 37: /* cmp_params: IDENTIFIER  */
#line 185 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1632 "simple-bison-code.tab.c"
    break;

  case 38: /* cmp_params: cmp_params "," cmp_params  */
#line 186 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1638 "simple-bison-code.tab.c"
    break;

  case 39: /* print_params: STRING  */
#line 190 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1644 "simple-bison-code.tab.c"
    break;

  case 40: /* print_params: IDENTIFIER  */
#line 191 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1650 "simple-bison-code.tab.c"
    break;

  case 41: /* print_params: INTEGER  */
#line 192 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1656 "simple-bison-code.tab.c"
    break;

  case 42: /* print_params: FLOAT  */
#line 193 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1662 "simple-bison-code.tab.c"
    break;

  case 43: /* print_params: func  */
#line 194 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1668 "simple-bison-code.tab.c"
    break;

  case 44: /* print_params: pos_elem  */
#line 195 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1674 "simple-bison-code.tab.c"
    break;

  case 45: /* print_params: print_params "," print_params  */
#line 196 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1680 "simple-bison-code.tab.c"
    break;

  case 46: /* decl_func: name_func decl_statement  */
#line 201 "simple-bison-code.y"
                                 { (yyval.sval) = strdup(yytext); }
#line 1686 "simple-bison-code.tab.c"
    break;

  case 47: /* name_func: SFUNC  */
#line 205 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1692 "simple-bison-code.tab.c"
    break;

  case 48: /* name_func: SFUNC type  */
#line 206 "simple-bison-code.y"
                                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Return type unnecessary at Line=%d\n", line);}
#line 1698 "simple-bison-code.tab.c"
    break;

  case 49: /* name_func: name_func IDENTIFIER params NEWLINE  */
#line 207 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1704 "simple-bison-code.tab.c"
    break;

  case 50: /* params: "(" ")"  */
#line 211 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1710 "simple-bison-code.tab.c"
    break;

  case 51: /* params: "(" type_params ")"  */
#line 212 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1716 "simple-bison-code.tab.c"
    break;

  case 52: /* type_params: type IDENTIFIER  */
#line 216 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1722 "simple-bison-code.tab.c"
    break;

  case 53: /* type_params: type_params "," type_params  */
#line 217 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1728 "simple-bison-code.tab.c"
    break;

  case 54: /* sign: INTEGER  */
#line 223 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1734 "simple-bison-code.tab.c"
    break;

  case 55: /* sign: FLOAT  */
#line 224 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1740 "simple-bison-code.tab.c"
    break;

  case 56: /* sign: "+" sign  */
#line 225 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1746 "simple-bison-code.tab.c"
    break;

  case 57: /* sign: "-" sign  */
#line 226 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1752 "simple-bison-code.tab.c"
    break;

  case 58: /* arithm_expr: sign  */
#line 230 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1758 "simple-bison-code.tab.c"
    break;

  case 59: /* arithm_expr: IDENTIFIER  */
#line 231 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1764 "simple-bison-code.tab.c"
    break;

  case 60: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 232 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1770 "simple-bison-code.tab.c"
    break;

  case 61: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 233 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1776 "simple-bison-code.tab.c"
    break;

  case 62: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 234 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1782 "simple-bison-code.tab.c"
    break;

  case 63: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 235 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1788 "simple-bison-code.tab.c"
    break;

  case 64: /* arithm_expr: arithm_expr "%" arithm_expr  */
#line 236 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1794 "simple-bison-code.tab.c"
    break;

  case 65: /* number: INTEGER  */
#line 240 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1800 "simple-bison-code.tab.c"
    break;

  case 66: /* number: FLOAT  */
#line 241 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1806 "simple-bison-code.tab.c"
    break;

  case 67: /* number: pos_elem  */
#line 242 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1812 "simple-bison-code.tab.c"
    break;

  case 68: /* assign: var "=" val  */
#line 248 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1818 "simple-bison-code.tab.c"
    break;

  case 69: /* assign: var "=" cmp_expr  */
#line 249 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1824 "simple-bison-code.tab.c"
    break;

  case 70: /* assign: var "=" arithm_expr  */
#line 250 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1830 "simple-bison-code.tab.c"
    break;

  case 71: /* assign: var "=" merge_arr  */
#line 251 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1836 "simple-bison-code.tab.c"
    break;

  case 72: /* assign: oper_eq  */
#line 252 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1842 "simple-bison-code.tab.c"
    break;

  case 73: /* oper_eq: var "++"  */
#line 256 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1848 "simple-bison-code.tab.c"
    break;

  case 74: /* oper_eq: var "--"  */
#line 257 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1854 "simple-bison-code.tab.c"
    break;

  case 75: /* oper_eq: "++" var  */
#line 258 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1860 "simple-bison-code.tab.c"
    break;

  case 76: /* oper_eq: "--" var  */
#line 259 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1866 "simple-bison-code.tab.c"
    break;

  case 77: /* oper_eq: var "+=" number  */
#line 260 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1872 "simple-bison-code.tab.c"
    break;

  case 78: /* oper_eq: var "-=" number  */
#line 261 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1878 "simple-bison-code.tab.c"
    break;

  case 79: /* oper_eq: var "*=" number  */
#line 262 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1884 "simple-bison-code.tab.c"
    break;

  case 80: /* oper_eq: var "/=" number  */
#line 263 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1890 "simple-bison-code.tab.c"
    break;

  case 81: /* val: number  */
#line 267 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1896 "simple-bison-code.tab.c"
    break;

  case 82: /* val: IDENTIFIER  */
#line 268 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1902 "simple-bison-code.tab.c"
    break;

  case 83: /* val: STRING  */
#line 269 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1908 "simple-bison-code.tab.c"
    break;

  case 84: /* val: arr_elements  */
#line 270 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1914 "simple-bison-code.tab.c"
    break;

  case 85: /* val: val "," val  */
#line 271 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1920 "simple-bison-code.tab.c"
    break;

  case 86: /* cmp_expr: INTEGER  */
#line 276 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1926 "simple-bison-code.tab.c"
    break;

  case 87: /* cmp_expr: FLOAT  */
#line 277 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1932 "simple-bison-code.tab.c"
    break;

  case 88: /* cmp_expr: IDENTIFIER  */
#line 278 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1938 "simple-bison-code.tab.c"
    break;

  case 89: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 279 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1944 "simple-bison-code.tab.c"
    break;

  case 90: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 280 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1950 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 281 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1956 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 282 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1962 "simple-bison-code.tab.c"
    break;

  case 93: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 283 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1968 "simple-bison-code.tab.c"
    break;

  case 94: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 284 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1974 "simple-bison-code.tab.c"
    break;

  case 95: /* cmp_expr: cmp_expr "||" cmp_expr  */
#line 285 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1980 "simple-bison-code.tab.c"
    break;

  case 96: /* cmp_expr: cmp_expr "&&" cmp_expr  */
#line 286 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1986 "simple-bison-code.tab.c"
    break;

  case 97: /* cmp_expr: "!" cmp_expr  */
#line 287 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1992 "simple-bison-code.tab.c"
    break;

  case 98: /* cmp_expr: cmp_expr ">" ">" arithm_expr  */
#line 289 "simple-bison-code.y"
                                       { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double > detected at Line=%d\n", line-1); }
#line 1998 "simple-bison-code.tab.c"
    break;

  case 99: /* cmp_expr: cmp_expr "<" "<" arithm_expr  */
#line 290 "simple-bison-code.y"
                                       { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double < detected at Line=%d\n", line-1); }
#line 2004 "simple-bison-code.tab.c"
    break;

  case 100: /* merge_arr: arr_elements  */
#line 295 "simple-bison-code.y"
                     { (yyval.sval) = strdup(yytext); }
#line 2010 "simple-bison-code.tab.c"
    break;

  case 101: /* merge_arr: merge_arr "+" merge_arr  */
#line 296 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2016 "simple-bison-code.tab.c"
    break;

  case 102: /* merge_arr: merge_arr TOKEN_ERROR "+" merge_arr  */
#line 297 "simple-bison-code.y"
                                              {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
#line 2022 "simple-bison-code.tab.c"
    break;

  case 103: /* merge_arr: merge_arr "+" TOKEN_ERROR merge_arr  */
#line 298 "simple-bison-code.y"
                                              {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
#line 2028 "simple-bison-code.tab.c"
    break;

  case 104: /* merge_arr: merge_arr "++" merge_arr  */
#line 299 "simple-bison-code.y"
                                   {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: ++ operation in array merge detected at Line=%d\n", line);}
#line 2034 "simple-bison-code.tab.c"
    break;

  case 105: /* decl_statements: decl_statement  */
#line 309 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 2040 "simple-bison-code.tab.c"
    break;

  case 106: /* decl_statements: decl_statements decl_statement  */
#line 310 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 2046 "simple-bison-code.tab.c"
    break;

  case 107: /* decl_statement: if_statement  */
#line 314 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 2052 "simple-bison-code.tab.c"
    break;

  case 108: /* decl_statement: while_statement  */
#line 315 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση while\""; }
#line 2058 "simple-bison-code.tab.c"
    break;

  case 109: /* decl_statement: for_statement  */
#line 316 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση for\""; }
#line 2064 "simple-bison-code.tab.c"
    break;

  case 110: /* decl_statement: decl_var ";"  */
#line 317 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση μεταβλητής\""; }
#line 2070 "simple-bison-code.tab.c"
    break;

  case 111: /* decl_statement: build_func ";"  */
#line 318 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Κλήση συνάρτησης\""; }
#line 2076 "simple-bison-code.tab.c"
    break;

  case 112: /* decl_statement: decl_func  */
#line 319 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση συναρτήσεων χρήστη\""; }
#line 2082 "simple-bison-code.tab.c"
    break;

  case 113: /* decl_statement: assign ";"  */
#line 320 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Ανάθεση τιμής σε μεταβλητή\""; }
#line 2088 "simple-bison-code.tab.c"
    break;

  case 114: /* decl_statement: arithm_expr  */
#line 321 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Αριθμητική έκφραση\""; }
#line 2094 "simple-bison-code.tab.c"
    break;

  case 115: /* decl_statement: cmp_expr  */
#line 322 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Σύγκριση\""; }
#line 2100 "simple-bison-code.tab.c"
    break;

  case 116: /* decl_statement: merge_arr  */
#line 323 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Συνένωση πινάκων\""; }
#line 2106 "simple-bison-code.tab.c"
    break;

  case 117: /* decl_statement: block_statement  */
#line 324 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Σύνθετες δηλώσεις\""; }
#line 2112 "simple-bison-code.tab.c"
    break;

  case 118: /* decl_statement: NEWLINE  */
#line 325 "simple-bison-code.y"
                                         { (yyval.sval) = "\n"; }
#line 2118 "simple-bison-code.tab.c"
    break;

  case 119: /* if_statement: SIF condition decl_statement  */
#line 330 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 2124 "simple-bison-code.tab.c"
    break;

  case 120: /* condition: cmp_expr  */
#line 334 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2130 "simple-bison-code.tab.c"
    break;

  case 121: /* condition: "(" condition ")"  */
#line 335 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2136 "simple-bison-code.tab.c"
    break;

  case 122: /* condition: "((" condition ")"  */
#line 337 "simple-bison-code.y"
                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double ( detected at Line=%d\n", line); }
#line 2142 "simple-bison-code.tab.c"
    break;

  case 123: /* condition: "(" condition "))"  */
#line 338 "simple-bison-code.y"
                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double ) detected at Line=%d\n", line); }
#line 2148 "simple-bison-code.tab.c"
    break;

  case 124: /* condition: condition ")"  */
#line 339 "simple-bison-code.y"
                                  { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: No ( detected at Line=%d\n", line);}
#line 2154 "simple-bison-code.tab.c"
    break;

  case 125: /* condition: "(" condition  */
#line 340 "simple-bison-code.y"
                                   { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: No ) detected at Line=%d\n", line);}
#line 2160 "simple-bison-code.tab.c"
    break;

  case 126: /* block_statement: "{" decl_statements "}"  */
#line 344 "simple-bison-code.y"
                                {  (yyval.sval) = strdup(yytext); }
#line 2166 "simple-bison-code.tab.c"
    break;

  case 127: /* while_statement: SWHILE condition decl_statement  */
#line 349 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 2172 "simple-bison-code.tab.c"
    break;

  case 128: /* for_statement: SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement  */
#line 354 "simple-bison-code.y"
                                                                    { (yyval.sval) = strdup(yytext); }
#line 2178 "simple-bison-code.tab.c"
    break;


#line 2182 "simple-bison-code.tab.c"

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

#line 357 "simple-bison-code.y"





/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
/*void yyerror(const char *msg) {
        fprintf(stderr, "Error: %s\n", msg);
}*/

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
