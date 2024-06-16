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
#define YYLAST   605

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  66
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

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
     122,   123,   124,   125,   126,   127,   128,   132,   133,   138,
     139,   144,   145,   146,   147,   151,   152,   156,   157,   161,
     162,   167,   171,   172,   173,   174,   175,   179,   183,   184,
     185,   189,   190,   191,   195,   196,   197,   198,   199,   200,
     201,   206,   210,   211,   212,   216,   217,   221,   222,   228,
     229,   230,   231,   235,   236,   237,   238,   239,   240,   241,
     245,   246,   247,   253,   254,   255,   256,   257,   261,   262,
     263,   264,   265,   266,   267,   268,   272,   273,   274,   275,
     276,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   294,   295,   300,   301,   302,   303,   304,
     314,   315,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   335,   339,   340,   342,   343,   344,
     345,   349,   354,   359
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

#define YYPACT_NINF (-75)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -75,   172,   -75,   -32,   507,   353,   413,    13,    28,    57,
     311,    71,   107,    45,   110,    13,    48,   137,    48,   140,
     137,   124,   352,   118,   146,   158,   178,   -75,   123,   137,
     222,   -75,   182,   -75,   -75,   412,   -75,   117,   203,   -75,
     473,    68,   472,   -75,   -75,   -75,   -75,   -75,   -75,    22,
     -75,   -75,   -75,    13,    13,   473,   232,   -75,   -75,   -75,
     -75,   -75,    26,   -75,   232,   -75,   -75,   -75,   -75,   116,
     -75,   -75,   116,   -75,   -75,   -75,   -75,   100,   127,   191,
      85,   292,   200,    22,    18,   251,   -75,   116,   223,   -75,
     223,    87,   223,   223,   -75,   137,   -75,   529,   -75,   156,
     156,   156,   156,   156,   -75,   136,   131,   140,   140,   140,
     140,   140,   140,   -43,   197,   -13,   -75,   -75,    74,   -75,
     -75,   -75,   -75,   -75,    60,    11,   218,   -75,   -75,   217,
     -75,   -75,   271,   -75,   273,   -75,   283,   259,   -75,   -75,
     238,   114,   -75,   -75,   -75,   239,   -75,   -75,   154,   248,
     -75,   -75,   -75,   -75,   -75,   185,   -75,   245,   305,   133,
     117,   -75,   241,   473,    85,   -75,   -75,   -75,    39,   244,
     -75,    24,    24,   -75,   -75,   -75,   156,   -75,   156,   -75,
     176,   -75,   555,   -75,   122,   122,   197,    23,   240,   197,
      10,   260,   -75,    22,   -75,   -75,   -75,   140,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   251,    62,   -75,   312,   155,
     -75,   117,   117,    85,    23,   -75,   256,   262,   -75,   548,
     -75,   248,   -75,   -75,   -75,   -75,   311,   -75,   -75,    26,
     -75,   282,   270,   352,   -75
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,     0,     1,     0,    64,    59,    60,     0,    11,     7,
      52,    15,     9,     0,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,     0,     0,
       0,   105,     0,    31,   117,     0,    63,   119,     0,    77,
     120,   121,     0,   110,   112,   122,   113,   114,     3,     0,
      93,    91,    92,     0,     0,   125,     0,    12,     8,    53,
      16,    10,     0,    14,     0,    59,    60,    61,    17,    81,
      62,   102,    80,    29,    25,    27,    21,     0,     0,     0,
     121,     0,     0,     0,     0,     0,   115,     6,     0,    79,
       0,     0,     0,     0,    78,     0,   116,    64,    51,     0,
       0,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,   111,    45,    44,
      46,    47,    49,    48,     0,   130,     0,   129,   124,     0,
     132,    22,     0,    23,     0,    24,     0,     0,   131,    37,
       0,     0,    40,    39,    38,     0,    42,    41,     0,     0,
      70,    71,    72,    84,    85,    93,    88,    91,    92,   105,
      75,    86,    73,    74,    76,    82,    83,    18,     0,     0,
      64,    65,    66,    67,    68,    69,     0,    95,     0,    94,
     101,    96,   100,    97,    98,    99,     0,   106,   109,     0,
       0,     0,    36,     0,   126,   128,   127,     0,    26,    28,
      30,    32,    35,    33,    34,     0,     0,    55,     0,     0,
      54,   104,   103,   108,   107,     4,     0,     0,    50,     0,
      43,    87,    89,    90,    57,    56,     0,    20,    19,     0,
      58,     0,     0,     0,   133
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -75,   -75,   -75,   -10,   -16,   -44,   -74,   193,   199,   198,
     -75,   -42,   -75,   -75,   134,   -71,   -75,   -75,   -75,   121,
     255,   -67,   278,   280,   119,   143,    -4,     5,   334,   -33,
     -75,    31,   -75,   -75,   -75
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    28,    29,    30,   152,    31,    77,    78,    79,
      32,    33,   140,   145,   148,   124,    34,    35,   169,   209,
      36,    37,   161,    38,    39,   162,    40,    80,    42,    43,
      44,    56,    45,    46,    47
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      59,    69,    98,    55,    72,   122,    41,   123,    21,   117,
     144,    55,   141,    87,   189,    71,    50,   159,    51,    52,
     186,   142,   143,   128,   160,   118,   119,   120,   121,    68,
      48,   130,   171,   172,   173,   174,   175,   113,    21,   122,
      57,   123,   118,   119,   120,   121,    64,    19,   117,    55,
      55,     8,     9,    65,    66,    17,    11,   101,   114,    12,
     102,   194,    53,   103,    14,   221,   156,   150,   151,    21,
      58,   114,   215,   137,    20,    16,   195,    54,    18,   167,
      23,    24,    25,    26,   125,   126,   137,   163,    60,   207,
     155,   156,   157,   158,    62,   113,   164,    23,    24,    25,
      26,   177,   179,   180,   181,   182,   183,   184,   185,   211,
     192,   212,   113,    21,    16,   193,   114,    18,   187,   188,
     190,    19,   218,    49,   122,   191,   123,    61,    73,    74,
      75,   115,   222,   114,    50,    63,    51,    52,    21,    50,
      68,    51,    52,    50,    99,    51,    52,   100,   137,   122,
     101,   123,   131,   102,   105,   132,   103,   106,   208,   170,
     108,    65,    66,   110,   202,    19,   178,    82,   176,   193,
      19,    95,     2,     3,    19,     4,    76,     5,     6,   133,
      86,     7,   134,    16,     8,     9,    18,    10,   -89,    11,
     -89,   213,    12,   219,   214,    83,    13,    14,    15,    16,
     234,    17,    18,   139,   204,   225,    19,    84,   105,   205,
     226,   106,   -64,   231,   108,   -64,   208,   110,   -64,   111,
      20,   -64,   112,    21,   -64,    22,   149,    85,   150,   151,
      23,    24,    25,    26,    27,     4,   191,     5,     6,    96,
     -87,     7,   -64,   135,     8,     9,   136,    10,    21,    11,
      88,    89,    12,    90,   146,   147,    13,    14,    15,    16,
     104,    17,    18,   216,    91,   217,    19,    92,   196,    93,
      94,    67,   -59,    70,   197,   -59,    74,    95,   -59,    75,
      20,   -59,   127,    21,   -59,    22,   189,    73,   201,   203,
      23,    24,    25,    26,    27,     4,   206,     5,     6,   191,
     -70,     7,   -59,   137,     8,     9,   210,    10,   227,    11,
      88,    89,    12,    90,   228,   224,    13,    14,    15,    16,
     233,    17,    18,     8,     9,   198,    19,    92,    11,    93,
      94,    12,   -60,   199,   200,   -60,    14,    95,   -60,   220,
      20,   -60,   129,    21,   -60,    22,   138,   230,   232,   223,
      23,    24,    25,    26,    27,     4,    81,     5,     6,     0,
     -71,     7,   -60,     0,     8,     9,   153,    10,   154,    11,
     165,   166,    12,     0,     0,     0,    13,    14,    15,    16,
       0,    17,    18,     0,     0,   -91,    19,     0,   -91,     0,
     -91,   -91,     0,   -91,   -91,     0,   -91,     0,     0,   -91,
      20,     0,     0,    21,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,    27,    97,     0,     5,     6,     0,
       0,     7,     0,     0,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,     0,    13,    14,    15,    16,
       0,    17,    18,     0,     0,   -92,    19,     0,   -92,     0,
     -92,   -92,     0,   -92,   -92,     0,   -92,     0,     0,   -92,
      20,     0,     0,    21,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,    27,     4,     0,     5,     6,     0,
       0,     7,     0,     0,     8,     9,     0,    10,     0,    11,
       0,     0,    12,     0,     0,     0,    13,    14,    15,    16,
       0,    17,    18,     0,     0,   105,    19,     0,   106,     0,
     107,   108,     0,   109,   110,     0,   111,     0,     0,   112,
      20,     0,     0,    21,     0,    22,     0,     0,     0,     0,
      23,    24,    25,    26,   116,   -17,   -17,     0,   -17,   -93,
       0,     0,   -93,     0,   -93,   -93,     0,   -93,   -93,   -17,
     -93,     0,   -17,   -93,   -17,   -17,    49,   -17,   -17,     0,
     -17,   -93,   -17,     0,   -93,     0,   -93,   -93,     0,   -93,
     -93,   -17,   -93,     0,   -17,   -93,   -17,   -17,   168,     0,
     105,     0,     0,   106,   -17,   107,   108,   105,   109,   110,
     106,   111,   107,   108,   112,     0,   110,     0,   111,     0,
       0,   112,     0,     0,     0,   229
};

static const yytype_int16 yycheck[] =
{
      10,    17,    35,     7,    20,    49,     1,    49,    51,    42,
      84,    15,    83,    29,    27,    19,     3,    91,     5,     6,
      63,     3,     4,    56,    91,     3,     4,     5,     6,     3,
      62,    64,    99,   100,   101,   102,   103,    27,    51,    83,
      12,    83,     3,     4,     5,     6,    15,    34,    81,    53,
      54,    12,    13,     5,     6,    29,    17,    33,    48,    20,
      36,    50,    49,    39,    25,     3,     4,     5,     6,    51,
      13,    48,    62,    63,    48,    27,    65,    64,    30,    95,
      58,    59,    60,    61,    53,    54,    63,    91,    17,    50,
       3,     4,     5,     6,    49,    27,    91,    58,    59,    60,
      61,   105,   106,   107,   108,   109,   110,   111,   112,   176,
      50,   178,    27,    51,    27,    55,    48,    30,   113,   114,
     115,    34,   193,    49,   168,    51,   168,    20,     4,     5,
       6,    63,   206,    48,     3,    25,     5,     6,    51,     3,
       3,     5,     6,     3,    27,     5,     6,    30,    63,   193,
      33,   193,    52,    36,    32,    55,    39,    35,   168,     3,
      38,     5,     6,    41,    50,    34,    35,    49,    32,    55,
      34,    55,     0,     1,    34,     3,    52,     5,     6,    52,
      57,     9,    55,    27,    12,    13,    30,    15,    55,    17,
      57,   186,    20,   197,   189,    49,    24,    25,    26,    27,
     233,    29,    30,     3,    50,    50,    34,    49,    32,    55,
      55,    35,    27,   229,    38,    30,   226,    41,    33,    43,
      48,    36,    46,    51,    39,    53,     3,    49,     5,     6,
      58,    59,    60,    61,    62,     3,    51,     5,     6,    57,
      55,     9,    57,    52,    12,    13,    55,    15,    51,    17,
      28,    29,    20,    31,     3,     4,    24,    25,    26,    27,
      57,    29,    30,     3,    42,     5,    34,    45,    50,    47,
      48,    16,    27,    18,    57,    30,     5,    55,    33,     6,
      48,    36,    50,    51,    39,    53,    27,     4,    50,    50,
      58,    59,    60,    61,    62,     3,    55,     5,     6,    51,
      55,     9,    57,    63,    12,    13,    62,    15,    52,    17,
      28,    29,    20,    31,    52,     3,    24,    25,    26,    27,
      50,    29,    30,    12,    13,   132,    34,    45,    17,    47,
      48,    20,    27,   134,   136,    30,    25,    55,    33,   205,
      48,    36,    62,    51,    39,    53,    54,   226,   229,   206,
      58,    59,    60,    61,    62,     3,    22,     5,     6,    -1,
      55,     9,    57,    -1,    12,    13,    88,    15,    90,    17,
      92,    93,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,    -1,    -1,    32,    34,    -1,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    43,    -1,    -1,    46,
      48,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,     3,    -1,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    -1,    15,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,    -1,    -1,    32,    34,    -1,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    43,    -1,    -1,    46,
      48,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,     3,    -1,     5,     6,    -1,
      -1,     9,    -1,    -1,    12,    13,    -1,    15,    -1,    17,
      -1,    -1,    20,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    29,    30,    -1,    -1,    32,    34,    -1,    35,    -1,
      37,    38,    -1,    40,    41,    -1,    43,    -1,    -1,    46,
      48,    -1,    -1,    51,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    60,    61,    62,    28,    29,    -1,    31,    32,
      -1,    -1,    35,    -1,    37,    38,    -1,    40,    41,    42,
      43,    -1,    45,    46,    47,    48,    49,    28,    29,    -1,
      31,    32,    55,    -1,    35,    -1,    37,    38,    -1,    40,
      41,    42,    43,    -1,    45,    46,    47,    48,    49,    -1,
      32,    -1,    -1,    35,    55,    37,    38,    32,    40,    41,
      35,    43,    37,    38,    46,    -1,    41,    -1,    43,    -1,
      -1,    46,    -1,    -1,    -1,    57
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
       3,     5,     6,    49,    64,    92,    97,    12,    13,    69,
      17,    20,    49,    25,    97,     5,     6,    86,     3,    70,
      86,    92,    70,     4,     5,     6,    52,    73,    74,    75,
      93,    94,    49,    49,    49,    49,    57,    70,    28,    29,
      31,    42,    45,    47,    48,    55,    57,     3,    95,    27,
      30,    33,    36,    39,    57,    32,    35,    37,    38,    40,
      41,    43,    46,    27,    48,    63,    62,    95,     3,     4,
       5,     6,    71,    77,    81,    97,    97,    50,    95,    89,
      95,    52,    55,    52,    55,    52,    55,    63,    54,     3,
      78,    81,     3,     4,    72,    79,     3,     4,    80,     3,
       5,     6,    71,    88,    88,     3,     4,     5,     6,    72,
      87,    88,    91,    92,    93,    88,    88,    70,    49,    84,
       3,    87,    87,    87,    87,    87,    32,    92,    35,    92,
      92,    92,    92,    92,    92,    92,    63,    93,    93,    27,
      93,    51,    50,    55,    50,    65,    50,    57,    73,    74,
      75,    50,    50,    50,    50,    55,    55,    50,    69,    85,
      62,    87,    87,    93,    93,    62,     3,     5,    81,    92,
      80,     3,    72,    91,     3,    50,    55,    52,    52,    57,
      85,    70,    90,    50,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    66,    67,    67,    67,    67,    68,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    70,    70,    71,
      71,    72,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    76,    77,    77,    77,    77,    77,    78,    79,    79,
      79,    80,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    82,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    96,    97,    97,    97,    97,    97,
      97,    98,    99,   100
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     5,     0,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     3,     4,
       4,     2,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     4,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     2,     1,     2,     4,     2,     3,     2,     3,     1,
       1,     2,     2,     1,     1,     3,     3,     3,     3,     3,
       1,     1,     1,     3,     3,     3,     3,     1,     2,     2,
       2,     2,     3,     3,     3,     3,     1,     1,     1,     1,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     4,     4,     1,     3,     4,     4,     3,
       1,     2,     1,     1,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     2,
       2,     3,     3,     9
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
#line 1428 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program error NEWLINE  */
#line 105 "simple-bison-code.y"
                                                { fatal_errors++; errflag = 1; yyerrok; }
#line 1434 "simple-bison-code.tab.c"
    break;

  case 4: /* program: program merge_arr TOKEN_ERROR merge_arr NEWLINE  */
#line 106 "simple-bison-code.y"
                                                          { yyerrok; }
#line 1440 "simple-bison-code.tab.c"
    break;

  case 5: /* program: %empty  */
#line 107 "simple-bison-code.y"
                                                { }
#line 1446 "simple-bison-code.tab.c"
    break;

  case 6: /* decl_var: type var  */
#line 115 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1452 "simple-bison-code.tab.c"
    break;

  case 7: /* type: SINT  */
#line 119 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1458 "simple-bison-code.tab.c"
    break;

  case 8: /* type: SINT SINT  */
#line 120 "simple-bison-code.y"
                         {par_warnings; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double int detected at Line=%d\n", line); }
#line 1464 "simple-bison-code.tab.c"
    break;

  case 9: /* type: SFLOAT  */
#line 121 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1470 "simple-bison-code.tab.c"
    break;

  case 10: /* type: SFLOAT SFLOAT  */
#line 122 "simple-bison-code.y"
                         {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double float detected at Line=%d\n", line); }
#line 1476 "simple-bison-code.tab.c"
    break;

  case 11: /* type: SDOUBLE  */
#line 123 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1482 "simple-bison-code.tab.c"
    break;

  case 12: /* type: SDOUBLE SDOUBLE  */
#line 124 "simple-bison-code.y"
                          {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double double detected at Line=%d\n", line); }
#line 1488 "simple-bison-code.tab.c"
    break;

  case 13: /* type: SSHORT  */
#line 125 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1494 "simple-bison-code.tab.c"
    break;

  case 14: /* type: SSHORT SSHORT  */
#line 126 "simple-bison-code.y"
                         {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double short detected at Line=%d\n", line); }
#line 1500 "simple-bison-code.tab.c"
    break;

  case 15: /* type: SLONG  */
#line 127 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1506 "simple-bison-code.tab.c"
    break;

  case 16: /* type: SLONG SLONG  */
#line 128 "simple-bison-code.y"
                         {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double long detected at Line=%d\n", line); }
#line 1512 "simple-bison-code.tab.c"
    break;

  case 17: /* var: IDENTIFIER  */
#line 132 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1518 "simple-bison-code.tab.c"
    break;

  case 18: /* var: var "," var  */
#line 133 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1524 "simple-bison-code.tab.c"
    break;

  case 19: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 138 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1530 "simple-bison-code.tab.c"
    break;

  case 20: /* pos_elem: IDENTIFIER "[" IDENTIFIER "]"  */
#line 139 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1536 "simple-bison-code.tab.c"
    break;

  case 21: /* arr_elements: "[" "]"  */
#line 144 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1542 "simple-bison-code.tab.c"
    break;

  case 22: /* arr_elements: "[" integ "]"  */
#line 145 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1548 "simple-bison-code.tab.c"
    break;

  case 23: /* arr_elements: "[" fl "]"  */
#line 146 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1554 "simple-bison-code.tab.c"
    break;

  case 24: /* arr_elements: "[" str "]"  */
#line 147 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1560 "simple-bison-code.tab.c"
    break;

  case 25: /* integ: INTEGER  */
#line 151 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1566 "simple-bison-code.tab.c"
    break;

  case 26: /* integ: integ "," integ  */
#line 152 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1572 "simple-bison-code.tab.c"
    break;

  case 27: /* fl: FLOAT  */
#line 156 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1578 "simple-bison-code.tab.c"
    break;

  case 28: /* fl: fl "," fl  */
#line 157 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1584 "simple-bison-code.tab.c"
    break;

  case 29: /* str: STRING  */
#line 161 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1590 "simple-bison-code.tab.c"
    break;

  case 30: /* str: str "," str  */
#line 162 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1596 "simple-bison-code.tab.c"
    break;

  case 31: /* build_func: func  */
#line 167 "simple-bison-code.y"
              { (yyval.sval) = strdup(yytext); }
#line 1602 "simple-bison-code.tab.c"
    break;

  case 32: /* func: SSCAN "(" scan_params ")"  */
#line 171 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1608 "simple-bison-code.tab.c"
    break;

  case 33: /* func: SLEN "(" len_params ")"  */
#line 172 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1614 "simple-bison-code.tab.c"
    break;

  case 34: /* func: SCMP "(" cmp_params ")"  */
#line 173 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1620 "simple-bison-code.tab.c"
    break;

  case 35: /* func: SPRINT "(" print_params ")"  */
#line 174 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1626 "simple-bison-code.tab.c"
    break;

  case 36: /* func: IDENTIFIER "(" print_params ")"  */
#line 175 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1632 "simple-bison-code.tab.c"
    break;

  case 37: /* scan_params: IDENTIFIER  */
#line 179 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1638 "simple-bison-code.tab.c"
    break;

  case 38: /* len_params: arr_elements  */
#line 183 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1644 "simple-bison-code.tab.c"
    break;

  case 39: /* len_params: STRING  */
#line 184 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1650 "simple-bison-code.tab.c"
    break;

  case 40: /* len_params: IDENTIFIER  */
#line 185 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1656 "simple-bison-code.tab.c"
    break;

  case 41: /* cmp_params: STRING  */
#line 189 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1662 "simple-bison-code.tab.c"
    break;

  case 42: /* cmp_params: IDENTIFIER  */
#line 190 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1668 "simple-bison-code.tab.c"
    break;

  case 43: /* cmp_params: cmp_params "," cmp_params  */
#line 191 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1674 "simple-bison-code.tab.c"
    break;

  case 44: /* print_params: STRING  */
#line 195 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1680 "simple-bison-code.tab.c"
    break;

  case 45: /* print_params: IDENTIFIER  */
#line 196 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1686 "simple-bison-code.tab.c"
    break;

  case 46: /* print_params: INTEGER  */
#line 197 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1692 "simple-bison-code.tab.c"
    break;

  case 47: /* print_params: FLOAT  */
#line 198 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1698 "simple-bison-code.tab.c"
    break;

  case 48: /* print_params: func  */
#line 199 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1704 "simple-bison-code.tab.c"
    break;

  case 49: /* print_params: pos_elem  */
#line 200 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1710 "simple-bison-code.tab.c"
    break;

  case 50: /* print_params: print_params "," print_params  */
#line 201 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1716 "simple-bison-code.tab.c"
    break;

  case 51: /* decl_func: name_func decl_statement  */
#line 206 "simple-bison-code.y"
                                 { (yyval.sval) = strdup(yytext); }
#line 1722 "simple-bison-code.tab.c"
    break;

  case 52: /* name_func: SFUNC  */
#line 210 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1728 "simple-bison-code.tab.c"
    break;

  case 53: /* name_func: SFUNC type  */
#line 211 "simple-bison-code.y"
                                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Return type unnecessary at Line=%d\n", line);}
#line 1734 "simple-bison-code.tab.c"
    break;

  case 54: /* name_func: name_func IDENTIFIER params NEWLINE  */
#line 212 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1740 "simple-bison-code.tab.c"
    break;

  case 55: /* params: "(" ")"  */
#line 216 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1746 "simple-bison-code.tab.c"
    break;

  case 56: /* params: "(" type_params ")"  */
#line 217 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1752 "simple-bison-code.tab.c"
    break;

  case 57: /* type_params: type IDENTIFIER  */
#line 221 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1758 "simple-bison-code.tab.c"
    break;

  case 58: /* type_params: type_params "," type_params  */
#line 222 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1764 "simple-bison-code.tab.c"
    break;

  case 59: /* sign: INTEGER  */
#line 228 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1770 "simple-bison-code.tab.c"
    break;

  case 60: /* sign: FLOAT  */
#line 229 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1776 "simple-bison-code.tab.c"
    break;

  case 61: /* sign: "+" sign  */
#line 230 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1782 "simple-bison-code.tab.c"
    break;

  case 62: /* sign: "-" sign  */
#line 231 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1788 "simple-bison-code.tab.c"
    break;

  case 63: /* arithm_expr: sign  */
#line 235 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1794 "simple-bison-code.tab.c"
    break;

  case 64: /* arithm_expr: IDENTIFIER  */
#line 236 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1800 "simple-bison-code.tab.c"
    break;

  case 65: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 237 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1806 "simple-bison-code.tab.c"
    break;

  case 66: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 238 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1812 "simple-bison-code.tab.c"
    break;

  case 67: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 239 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1818 "simple-bison-code.tab.c"
    break;

  case 68: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 240 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1824 "simple-bison-code.tab.c"
    break;

  case 69: /* arithm_expr: arithm_expr "%" arithm_expr  */
#line 241 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1830 "simple-bison-code.tab.c"
    break;

  case 70: /* number: INTEGER  */
#line 245 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1836 "simple-bison-code.tab.c"
    break;

  case 71: /* number: FLOAT  */
#line 246 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1842 "simple-bison-code.tab.c"
    break;

  case 72: /* number: pos_elem  */
#line 247 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1848 "simple-bison-code.tab.c"
    break;

  case 73: /* assign: var "=" val  */
#line 253 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1854 "simple-bison-code.tab.c"
    break;

  case 74: /* assign: var "=" cmp_expr  */
#line 254 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1860 "simple-bison-code.tab.c"
    break;

  case 75: /* assign: var "=" arithm_expr  */
#line 255 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1866 "simple-bison-code.tab.c"
    break;

  case 76: /* assign: var "=" merge_arr  */
#line 256 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1872 "simple-bison-code.tab.c"
    break;

  case 77: /* assign: oper_eq  */
#line 257 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1878 "simple-bison-code.tab.c"
    break;

  case 78: /* oper_eq: var "++"  */
#line 261 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1884 "simple-bison-code.tab.c"
    break;

  case 79: /* oper_eq: var "--"  */
#line 262 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1890 "simple-bison-code.tab.c"
    break;

  case 80: /* oper_eq: "++" var  */
#line 263 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1896 "simple-bison-code.tab.c"
    break;

  case 81: /* oper_eq: "--" var  */
#line 264 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1902 "simple-bison-code.tab.c"
    break;

  case 82: /* oper_eq: var "+=" number  */
#line 265 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1908 "simple-bison-code.tab.c"
    break;

  case 83: /* oper_eq: var "-=" number  */
#line 266 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1914 "simple-bison-code.tab.c"
    break;

  case 84: /* oper_eq: var "*=" number  */
#line 267 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1920 "simple-bison-code.tab.c"
    break;

  case 85: /* oper_eq: var "/=" number  */
#line 268 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1926 "simple-bison-code.tab.c"
    break;

  case 86: /* val: number  */
#line 272 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1932 "simple-bison-code.tab.c"
    break;

  case 87: /* val: IDENTIFIER  */
#line 273 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1938 "simple-bison-code.tab.c"
    break;

  case 88: /* val: STRING  */
#line 274 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1944 "simple-bison-code.tab.c"
    break;

  case 89: /* val: arr_elements  */
#line 275 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1950 "simple-bison-code.tab.c"
    break;

  case 90: /* val: val "," val  */
#line 276 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1956 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: INTEGER  */
#line 281 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1962 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: FLOAT  */
#line 282 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1968 "simple-bison-code.tab.c"
    break;

  case 93: /* cmp_expr: IDENTIFIER  */
#line 283 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1974 "simple-bison-code.tab.c"
    break;

  case 94: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 284 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1980 "simple-bison-code.tab.c"
    break;

  case 95: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 285 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1986 "simple-bison-code.tab.c"
    break;

  case 96: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 286 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1992 "simple-bison-code.tab.c"
    break;

  case 97: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 287 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1998 "simple-bison-code.tab.c"
    break;

  case 98: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 288 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2004 "simple-bison-code.tab.c"
    break;

  case 99: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 289 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2010 "simple-bison-code.tab.c"
    break;

  case 100: /* cmp_expr: cmp_expr "||" cmp_expr  */
#line 290 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2016 "simple-bison-code.tab.c"
    break;

  case 101: /* cmp_expr: cmp_expr "&&" cmp_expr  */
#line 291 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2022 "simple-bison-code.tab.c"
    break;

  case 102: /* cmp_expr: "!" cmp_expr  */
#line 292 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2028 "simple-bison-code.tab.c"
    break;

  case 103: /* cmp_expr: cmp_expr ">" ">" arithm_expr  */
#line 294 "simple-bison-code.y"
                                       { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double > detected at Line=%d\n", line-1); }
#line 2034 "simple-bison-code.tab.c"
    break;

  case 104: /* cmp_expr: cmp_expr "<" "<" arithm_expr  */
#line 295 "simple-bison-code.y"
                                       { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double < detected at Line=%d\n", line-1); }
#line 2040 "simple-bison-code.tab.c"
    break;

  case 105: /* merge_arr: arr_elements  */
#line 300 "simple-bison-code.y"
                     { (yyval.sval) = strdup(yytext); }
#line 2046 "simple-bison-code.tab.c"
    break;

  case 106: /* merge_arr: merge_arr "+" merge_arr  */
#line 301 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2052 "simple-bison-code.tab.c"
    break;

  case 107: /* merge_arr: merge_arr TOKEN_ERROR "+" merge_arr  */
#line 302 "simple-bison-code.y"
                                              {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
#line 2058 "simple-bison-code.tab.c"
    break;

  case 108: /* merge_arr: merge_arr "+" TOKEN_ERROR merge_arr  */
#line 303 "simple-bison-code.y"
                                              {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Invalid character in array merge detected at Line=%d\n", line);}
#line 2064 "simple-bison-code.tab.c"
    break;

  case 109: /* merge_arr: merge_arr "++" merge_arr  */
#line 304 "simple-bison-code.y"
                                   {par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: ++ operation in array merge detected at Line=%d\n", line);}
#line 2070 "simple-bison-code.tab.c"
    break;

  case 110: /* decl_statements: decl_statement  */
#line 314 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 2076 "simple-bison-code.tab.c"
    break;

  case 111: /* decl_statements: decl_statements decl_statement  */
#line 315 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 2082 "simple-bison-code.tab.c"
    break;

  case 112: /* decl_statement: if_statement  */
#line 319 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 2088 "simple-bison-code.tab.c"
    break;

  case 113: /* decl_statement: while_statement  */
#line 320 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση while\""; }
#line 2094 "simple-bison-code.tab.c"
    break;

  case 114: /* decl_statement: for_statement  */
#line 321 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση for\""; }
#line 2100 "simple-bison-code.tab.c"
    break;

  case 115: /* decl_statement: decl_var ";"  */
#line 322 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση μεταβλητής\""; }
#line 2106 "simple-bison-code.tab.c"
    break;

  case 116: /* decl_statement: build_func ";"  */
#line 323 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Κλήση συνάρτησης\""; }
#line 2112 "simple-bison-code.tab.c"
    break;

  case 117: /* decl_statement: decl_func  */
#line 324 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση συναρτήσεων χρήστη\""; }
#line 2118 "simple-bison-code.tab.c"
    break;

  case 118: /* decl_statement: assign ";"  */
#line 325 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Ανάθεση τιμής σε μεταβλητή\""; }
#line 2124 "simple-bison-code.tab.c"
    break;

  case 119: /* decl_statement: arithm_expr  */
#line 326 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Αριθμητική έκφραση\""; }
#line 2130 "simple-bison-code.tab.c"
    break;

  case 120: /* decl_statement: cmp_expr  */
#line 327 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Σύγκριση\""; }
#line 2136 "simple-bison-code.tab.c"
    break;

  case 121: /* decl_statement: merge_arr  */
#line 328 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Συνένωση πινάκων\""; }
#line 2142 "simple-bison-code.tab.c"
    break;

  case 122: /* decl_statement: block_statement  */
#line 329 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Σύνθετες δηλώσεις\""; }
#line 2148 "simple-bison-code.tab.c"
    break;

  case 123: /* decl_statement: NEWLINE  */
#line 330 "simple-bison-code.y"
                                         { (yyval.sval) = "\n"; }
#line 2154 "simple-bison-code.tab.c"
    break;

  case 124: /* if_statement: SIF condition decl_statement  */
#line 335 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 2160 "simple-bison-code.tab.c"
    break;

  case 125: /* condition: cmp_expr  */
#line 339 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2166 "simple-bison-code.tab.c"
    break;

  case 126: /* condition: "(" condition ")"  */
#line 340 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2172 "simple-bison-code.tab.c"
    break;

  case 127: /* condition: "((" condition ")"  */
#line 342 "simple-bison-code.y"
                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double ( detected at Line=%d\n", line); }
#line 2178 "simple-bison-code.tab.c"
    break;

  case 128: /* condition: "(" condition "))"  */
#line 343 "simple-bison-code.y"
                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double ) detected at Line=%d\n", line); }
#line 2184 "simple-bison-code.tab.c"
    break;

  case 129: /* condition: condition ")"  */
#line 344 "simple-bison-code.y"
                                  { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: No ( detected at Line=%d\n", line);}
#line 2190 "simple-bison-code.tab.c"
    break;

  case 130: /* condition: "(" condition  */
#line 345 "simple-bison-code.y"
                                   { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: No ) detected at Line=%d\n", line);}
#line 2196 "simple-bison-code.tab.c"
    break;

  case 131: /* block_statement: "{" decl_statements "}"  */
#line 349 "simple-bison-code.y"
                                {  (yyval.sval) = strdup(yytext); }
#line 2202 "simple-bison-code.tab.c"
    break;

  case 132: /* while_statement: SWHILE condition decl_statement  */
#line 354 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 2208 "simple-bison-code.tab.c"
    break;

  case 133: /* for_statement: SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement  */
#line 359 "simple-bison-code.y"
                                                                    { (yyval.sval) = strdup(yytext); }
#line 2214 "simple-bison-code.tab.c"
    break;


#line 2218 "simple-bison-code.tab.c"

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

#line 362 "simple-bison-code.y"





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
