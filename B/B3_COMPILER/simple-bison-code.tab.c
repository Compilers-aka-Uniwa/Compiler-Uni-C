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
  YYSYMBOL_64_ = 64,                       /* "+-"  */
  YYSYMBOL_65_ = 65,                       /* "-+"  */
  YYSYMBOL_66_ = 66,                       /* "(("  */
  YYSYMBOL_67_ = 67,                       /* "))"  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_program = 69,                   /* program  */
  YYSYMBOL_decl_var = 70,                  /* decl_var  */
  YYSYMBOL_type = 71,                      /* type  */
  YYSYMBOL_var = 72,                       /* var  */
  YYSYMBOL_pos_elem = 73,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 74,              /* arr_elements  */
  YYSYMBOL_integ = 75,                     /* integ  */
  YYSYMBOL_fl = 76,                        /* fl  */
  YYSYMBOL_str = 77,                       /* str  */
  YYSYMBOL_build_func = 78,                /* build_func  */
  YYSYMBOL_func = 79,                      /* func  */
  YYSYMBOL_scan_params = 80,               /* scan_params  */
  YYSYMBOL_len_params = 81,                /* len_params  */
  YYSYMBOL_cmp_params = 82,                /* cmp_params  */
  YYSYMBOL_print_params = 83,              /* print_params  */
  YYSYMBOL_decl_func = 84,                 /* decl_func  */
  YYSYMBOL_name_func = 85,                 /* name_func  */
  YYSYMBOL_params = 86,                    /* params  */
  YYSYMBOL_type_params = 87,               /* type_params  */
  YYSYMBOL_sign = 88,                      /* sign  */
  YYSYMBOL_arithm_expr = 89,               /* arithm_expr  */
  YYSYMBOL_number = 90,                    /* number  */
  YYSYMBOL_assign = 91,                    /* assign  */
  YYSYMBOL_oper_eq = 92,                   /* oper_eq  */
  YYSYMBOL_val = 93,                       /* val  */
  YYSYMBOL_cmp_expr = 94,                  /* cmp_expr  */
  YYSYMBOL_merge_arr = 95,                 /* merge_arr  */
  YYSYMBOL_decl_statements = 96,           /* decl_statements  */
  YYSYMBOL_decl_statement = 97,            /* decl_statement  */
  YYSYMBOL_if_statement = 98,              /* if_statement  */
  YYSYMBOL_condition = 99,                 /* condition  */
  YYSYMBOL_block_statement = 100,          /* block_statement  */
  YYSYMBOL_while_statement = 101,          /* while_statement  */
  YYSYMBOL_for_statement = 102             /* for_statement  */
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
#define YYLAST   621

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  126
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  224

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


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
      65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   105,   106,   114,   118,   119,   120,   121,
     122,   126,   127,   132,   133,   138,   139,   140,   141,   145,
     146,   150,   151,   155,   156,   161,   165,   166,   167,   168,
     169,   173,   177,   178,   179,   183,   184,   185,   189,   190,
     191,   192,   193,   194,   195,   200,   204,   205,   209,   210,
     214,   215,   221,   222,   223,   224,   228,   229,   230,   231,
     232,   233,   234,   238,   239,   240,   246,   247,   248,   249,
     250,   254,   255,   256,   257,   258,   259,   260,   261,   263,
     264,   265,   266,   270,   271,   272,   273,   274,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     292,   293,   298,   303,   304,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   324,   328,   329,
     331,   332,   333,   334,   338,   343,   348
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
  "NEWLINE", "TOKEN_ERROR", "\"+-\"", "\"-+\"", "\"((\"", "\"))\"",
  "$accept", "program", "decl_var", "type", "var", "pos_elem",
  "arr_elements", "integ", "fl", "str", "build_func", "func",
  "scan_params", "len_params", "cmp_params", "print_params", "decl_func",
  "name_func", "params", "type_params", "sign", "arithm_expr", "number",
  "assign", "oper_eq", "val", "cmp_expr", "merge_arr", "decl_statements",
  "decl_statement", "if_statement", "condition", "block_statement",
  "while_statement", "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-157)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -157,   144,  -157,   -32,   525,   334,   397,    22,  -157,  -157,
    -157,  -157,  -157,   -34,  -157,    22,   161,    23,   161,   149,
      23,    37,   333,   -10,    13,    21,    28,  -157,    23,    23,
      57,    23,   134,    67,    66,  -157,  -157,   396,  -157,   220,
      84,  -157,   497,  -157,   459,  -157,  -157,  -157,  -157,  -157,
    -157,    32,  -157,  -157,  -157,    22,    22,   497,   207,     3,
     207,  -157,  -157,  -157,  -157,    93,  -157,  -157,    93,  -157,
    -157,  -157,  -157,    17,    80,    88,   270,   148,    32,    60,
      92,    93,    93,  -157,    93,   212,  -157,   212,    95,   212,
     212,  -157,    23,  -157,  -157,    36,  -157,   556,  -157,    52,
      52,    52,    52,    52,  -157,   275,    78,   149,   149,   149,
     149,   149,   149,  -157,  -157,     1,  -157,  -157,  -157,  -157,
    -157,    10,    -6,   122,  -157,  -157,   118,  -157,  -157,   172,
    -157,   174,  -157,   180,  -157,  -157,   135,    30,  -157,  -157,
    -157,   140,  -157,  -157,    47,   143,  -157,  -157,  -157,  -157,
    -157,   286,  -157,   349,   412,    67,   220,  -157,   138,   497,
    -157,  -157,  -157,  -157,  -157,   491,   145,  -157,    91,    91,
    -157,  -157,  -157,    52,  -157,    52,  -157,   208,  -157,    96,
    -157,   273,   273,    73,  -157,    32,  -157,  -157,  -157,   149,
    -157,  -157,  -157,  -157,  -157,  -157,  -157,    92,    15,  -157,
     193,    65,  -157,   220,   220,   159,   162,  -157,   490,  -157,
     143,  -157,  -157,  -157,  -157,   489,  -157,  -157,     3,  -157,
     197,   150,   333,  -157
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     1,     0,    57,    52,    53,     0,     8,     6,
      46,    10,     7,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   116,     0,     0,
       0,     0,     0,     0,     0,    25,   110,     0,    56,   112,
       0,    70,   113,   114,     0,   103,   105,   115,   106,   107,
       3,     0,    90,    88,    89,     0,     0,   118,     0,     0,
       0,    52,    53,    54,    11,    74,    55,    99,    73,    23,
      19,    21,    15,     0,     0,     0,     0,     0,     0,     0,
       0,    81,    82,   108,     5,     0,    72,     0,     0,     0,
       0,    71,     0,    79,    80,     0,   109,    57,    45,     0,
       0,     0,     0,     0,   111,     0,     0,     0,     0,     0,
       0,     0,     0,     2,   104,    39,    38,    40,    41,    43,
      42,     0,   123,     0,   122,   117,     0,   125,    16,     0,
      17,     0,    18,     0,   124,    31,     0,     0,    34,    33,
      32,     0,    36,    35,     0,     0,    63,    64,    65,    77,
      78,    90,    85,    88,    89,    86,    68,    83,    66,    67,
      69,    75,    76,    12,   102,     0,     0,    57,    58,    59,
      60,    61,    62,     0,    92,     0,    91,    98,    93,    97,
      94,    95,    96,     0,    30,     0,   119,   121,   120,     0,
      20,    22,    24,    26,    29,    27,    28,     0,     0,    48,
       0,     0,    47,   101,   100,     0,     0,    44,     0,    37,
      84,    86,    87,    50,    49,     0,    14,    13,     0,    51,
       0,     0,     0,   126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -157,  -157,  -157,  -156,   -17,   -49,   -72,    94,    90,    97,
    -157,   -47,  -157,  -157,    38,   -68,  -157,  -157,  -157,    14,
     142,   -54,   199,   179,    45,    41,    -2,   160,   242,   -36,
    -157,    18,  -157,  -157,  -157
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    30,    31,    32,   148,    33,    73,    74,    75,
      34,    35,   136,   141,   144,   121,    36,    37,   166,   201,
      38,    39,   157,    40,    41,   158,    42,    43,    44,    45,
      46,    58,    47,    48,    49
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,    98,   119,    68,   120,    57,    64,   140,   114,   200,
     137,    81,    82,    57,    84,    59,   155,    67,   210,   152,
     146,   147,   125,   164,   127,    52,    64,    53,    54,   119,
      50,   120,    17,    60,   156,   115,   116,   117,   118,    77,
     114,    69,    70,    71,   186,   168,   169,   170,   171,   172,
      51,    20,   183,    57,    57,   167,    19,    61,    62,   200,
     184,   187,    78,   138,   139,   185,    21,    28,    29,   128,
      79,    55,   129,   122,   123,   163,   205,    80,   206,    16,
     194,    52,    18,    53,    54,   185,   159,    21,    56,    72,
      23,    24,    25,    26,    95,   142,   143,   196,   151,   152,
     153,   154,   197,   174,   176,   177,   178,   179,   180,   181,
     182,    21,    19,   175,    83,   214,   119,   207,   120,   203,
     215,   204,    16,    96,   101,    18,   211,   102,   105,    19,
     103,   106,   130,   107,   108,   131,   119,   110,   120,   111,
     132,   104,   112,   133,     2,     3,    21,     4,    92,     5,
       6,   135,    52,     7,    53,    54,     8,     9,    63,    10,
      66,    11,    85,    86,    12,    87,    61,    62,    13,    14,
      15,    16,   188,    17,    18,   189,    88,    70,    19,    89,
      71,    90,    91,    19,    69,   193,   223,   208,    16,    92,
     195,    18,    20,   198,   183,    21,   213,    22,    93,    94,
     222,   220,    23,    24,    25,    26,    27,   202,    28,    29,
       4,   216,     5,     6,   217,   145,     7,   146,   147,     8,
       9,   191,    10,   190,    11,    85,    86,    12,    87,   219,
     192,    13,    14,    15,    16,   209,    17,    18,   126,   212,
     105,    19,    89,   106,    90,    91,   108,    99,   160,   110,
     100,   111,    92,   101,   112,    20,   102,   124,    21,   103,
      22,    93,    94,   221,    76,    23,    24,    25,    26,    27,
       0,    28,    29,     4,     0,     5,     6,     0,    52,     7,
      53,    54,     8,     9,   149,    10,   150,    11,   161,   162,
      12,     0,     0,     0,    13,    14,    15,    16,     0,    17,
      18,     0,     0,     0,    19,   105,     0,   173,   106,    19,
       0,   108,     0,   -57,   110,     0,   -57,     0,    20,   -57,
       0,    21,   -57,    22,   134,   -57,     0,     0,    23,    24,
      25,    26,    27,     0,    28,    29,     4,   183,     5,     6,
       0,   -84,     7,   -57,     0,     8,     9,     0,    10,     0,
      11,     0,     0,    12,     0,     0,     0,    13,    14,    15,
      16,     0,    17,    18,     0,     0,   -88,    19,     0,   -88,
       0,   -88,   -88,     0,   -88,   -88,   -52,   -88,     0,   -52,
     -88,    20,   -52,     0,    21,   -52,    22,     0,   -52,     0,
       0,    23,    24,    25,    26,    27,     0,    28,    29,    97,
       0,     5,     6,     0,   -63,     7,   -52,     0,     8,     9,
       0,    10,     0,    11,     0,     0,    12,     0,     0,     0,
      13,    14,    15,    16,     0,    17,    18,     0,     0,   -89,
      19,     0,   -89,     0,   -89,   -89,     0,   -89,   -89,   -53,
     -89,     0,   -53,   -89,    20,   -53,     0,    21,   -53,    22,
       0,   -53,     0,     0,    23,    24,    25,    26,    27,     0,
      28,    29,     4,     0,     5,     6,     0,   -64,     7,   -53,
       0,     8,     9,     0,    10,     0,    11,     0,     0,    12,
       0,     0,     0,    13,    14,    15,    16,     0,    17,    18,
       0,     0,     0,    19,   115,   116,   117,   118,     0,     0,
       0,     8,     9,     8,     9,     0,    11,    20,    11,    12,
      21,    12,    22,     0,    14,     0,    14,    23,    24,    25,
      26,   113,   105,    28,    29,   106,     0,   107,   108,   105,
     109,   110,   106,   111,   107,   108,   112,   109,   110,     0,
     111,   199,     0,   112,     0,     0,     0,   218,     0,    23,
      24,    25,    26,   -11,   -11,     0,   -11,   -90,     0,     0,
     -90,     0,   -90,   -90,     0,   -90,   -90,   -11,   -90,     0,
     -11,   -90,   -11,   -11,    51,     0,     0,     0,     0,     0,
     -11,     0,     0,     0,   -11,   -11,     0,   -11,   -90,   -11,
     -11,   -90,     0,   -90,   -90,     0,   -90,   -90,   -11,   -90,
       0,   -11,   -90,   -11,   -11,   165,     0,     0,     0,     0,
       0,   -11,     0,     0,     0,     0,     0,     0,     0,     0,
     -11,   -11
};

static const yytype_int16 yycheck[] =
{
      17,    37,    51,    20,    51,     7,     3,    79,    44,   165,
      78,    28,    29,    15,    31,    49,    88,    19,     3,     4,
       5,     6,    58,    95,    60,     3,     3,     5,     6,    78,
      62,    78,    29,    15,    88,     3,     4,     5,     6,    49,
      76,     4,     5,     6,    50,    99,   100,   101,   102,   103,
      49,    48,    51,    55,    56,     3,    34,     5,     6,   215,
      50,    67,    49,     3,     4,    55,    51,    64,    65,    52,
      49,    49,    55,    55,    56,    92,     3,    49,     5,    27,
      50,     3,    30,     5,     6,    55,    88,    51,    66,    52,
      58,    59,    60,    61,    27,     3,     4,    50,     3,     4,
       5,     6,    55,   105,   106,   107,   108,   109,   110,   111,
     112,    51,    34,    35,    57,    50,   165,   185,   165,   173,
      55,   175,    27,    57,    33,    30,   198,    36,    32,    34,
      39,    35,    52,    37,    38,    55,   185,    41,   185,    43,
      52,    57,    46,    55,     0,     1,    51,     3,    55,     5,
       6,     3,     3,     9,     5,     6,    12,    13,    16,    15,
      18,    17,    28,    29,    20,    31,     5,     6,    24,    25,
      26,    27,    50,    29,    30,    57,    42,     5,    34,    45,
       6,    47,    48,    34,     4,    50,   222,   189,    27,    55,
      50,    30,    48,    55,    51,    51,     3,    53,    64,    65,
      50,   218,    58,    59,    60,    61,    62,    62,    64,    65,
       3,    52,     5,     6,    52,     3,     9,     5,     6,    12,
      13,   131,    15,   129,    17,    28,    29,    20,    31,   215,
     133,    24,    25,    26,    27,   197,    29,    30,    59,   198,
      32,    34,    45,    35,    47,    48,    38,    27,    88,    41,
      30,    43,    55,    33,    46,    48,    36,    50,    51,    39,
      53,    64,    65,   218,    22,    58,    59,    60,    61,    62,
      -1,    64,    65,     3,    -1,     5,     6,    -1,     3,     9,
       5,     6,    12,    13,    85,    15,    87,    17,    89,    90,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    -1,    29,
      30,    -1,    -1,    -1,    34,    32,    -1,    32,    35,    34,
      -1,    38,    -1,    27,    41,    -1,    30,    -1,    48,    33,
      -1,    51,    36,    53,    54,    39,    -1,    -1,    58,    59,
      60,    61,    62,    -1,    64,    65,     3,    51,     5,     6,
      -1,    55,     9,    57,    -1,    12,    13,    -1,    15,    -1,
      17,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,    26,
      27,    -1,    29,    30,    -1,    -1,    32,    34,    -1,    35,
      -1,    37,    38,    -1,    40,    41,    27,    43,    -1,    30,
      46,    48,    33,    -1,    51,    36,    53,    -1,    39,    -1,
      -1,    58,    59,    60,    61,    62,    -1,    64,    65,     3,
      -1,     5,     6,    -1,    55,     9,    57,    -1,    12,    13,
      -1,    15,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,
      24,    25,    26,    27,    -1,    29,    30,    -1,    -1,    32,
      34,    -1,    35,    -1,    37,    38,    -1,    40,    41,    27,
      43,    -1,    30,    46,    48,    33,    -1,    51,    36,    53,
      -1,    39,    -1,    -1,    58,    59,    60,    61,    62,    -1,
      64,    65,     3,    -1,     5,     6,    -1,    55,     9,    57,
      -1,    12,    13,    -1,    15,    -1,    17,    -1,    -1,    20,
      -1,    -1,    -1,    24,    25,    26,    27,    -1,    29,    30,
      -1,    -1,    -1,    34,     3,     4,     5,     6,    -1,    -1,
      -1,    12,    13,    12,    13,    -1,    17,    48,    17,    20,
      51,    20,    53,    -1,    25,    -1,    25,    58,    59,    60,
      61,    62,    32,    64,    65,    35,    -1,    37,    38,    32,
      40,    41,    35,    43,    37,    38,    46,    40,    41,    -1,
      43,    50,    -1,    46,    -1,    -1,    -1,    57,    -1,    58,
      59,    60,    61,    28,    29,    -1,    31,    32,    -1,    -1,
      35,    -1,    37,    38,    -1,    40,    41,    42,    43,    -1,
      45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    28,    29,    -1,    31,    32,    64,
      65,    35,    -1,    37,    38,    -1,    40,    41,    42,    43,
      -1,    45,    46,    47,    48,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    69,     0,     1,     3,     5,     6,     9,    12,    13,
      15,    17,    20,    24,    25,    26,    27,    29,    30,    34,
      48,    51,    53,    58,    59,    60,    61,    62,    64,    65,
      70,    71,    72,    74,    78,    79,    84,    85,    88,    89,
      91,    92,    94,    95,    96,    97,    98,   100,   101,   102,
      62,    49,     3,     5,     6,    49,    66,    94,    99,    49,
      99,     5,     6,    88,     3,    72,    88,    94,    72,     4,
       5,     6,    52,    75,    76,    77,    96,    49,    49,    49,
      49,    72,    72,    57,    72,    28,    29,    31,    42,    45,
      47,    48,    55,    64,    65,    27,    57,     3,    97,    27,
      30,    33,    36,    39,    57,    32,    35,    37,    38,    40,
      41,    43,    46,    62,    97,     3,     4,     5,     6,    73,
      79,    83,    99,    99,    50,    97,    91,    97,    52,    55,
      52,    55,    52,    55,    54,     3,    80,    83,     3,     4,
      74,    81,     3,     4,    82,     3,     5,     6,    73,    90,
      90,     3,     4,     5,     6,    74,    89,    90,    93,    94,
      95,    90,    90,    72,    74,    49,    86,     3,    89,    89,
      89,    89,    89,    32,    94,    35,    94,    94,    94,    94,
      94,    94,    94,    51,    50,    55,    50,    67,    50,    57,
      75,    76,    77,    50,    50,    50,    50,    55,    55,    50,
      71,    87,    62,    89,    89,     3,     5,    83,    94,    82,
       3,    74,    93,     3,    50,    55,    52,    52,    57,    87,
      72,    92,    50,    97
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    69,    69,    70,    71,    71,    71,    71,
      71,    72,    72,    73,    73,    74,    74,    74,    74,    75,
      75,    76,    76,    77,    77,    78,    79,    79,    79,    79,
      79,    80,    81,    81,    81,    82,    82,    82,    83,    83,
      83,    83,    83,    83,    83,    84,    85,    85,    86,    86,
      87,    87,    88,    88,    88,    88,    89,    89,    89,    89,
      89,    89,    89,    90,    90,    90,    91,    91,    91,    91,
      91,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    96,    96,    97,    97,    97,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    99,    99,
      99,    99,    99,    99,   100,   101,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     0,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     2,     3,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     4,     4,     4,     4,
       4,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     4,     2,     3,
       2,     3,     1,     1,     2,     2,     1,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     3,     3,     3,     3,
       1,     2,     2,     2,     2,     3,     3,     3,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       4,     4,     3,     1,     2,     1,     1,     1,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     2,     2,     3,     3,     9
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
#line 1429 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program error NEWLINE  */
#line 105 "simple-bison-code.y"
                                                { fatal_errors++; errflag = 1; yyerrok; }
#line 1435 "simple-bison-code.tab.c"
    break;

  case 4: /* program: %empty  */
#line 106 "simple-bison-code.y"
                                                { }
#line 1441 "simple-bison-code.tab.c"
    break;

  case 5: /* decl_var: type var  */
#line 114 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1447 "simple-bison-code.tab.c"
    break;

  case 6: /* type: SINT  */
#line 118 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1453 "simple-bison-code.tab.c"
    break;

  case 7: /* type: SFLOAT  */
#line 119 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1459 "simple-bison-code.tab.c"
    break;

  case 8: /* type: SDOUBLE  */
#line 120 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1465 "simple-bison-code.tab.c"
    break;

  case 9: /* type: SSHORT  */
#line 121 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1471 "simple-bison-code.tab.c"
    break;

  case 10: /* type: SLONG  */
#line 122 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1477 "simple-bison-code.tab.c"
    break;

  case 11: /* var: IDENTIFIER  */
#line 126 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1483 "simple-bison-code.tab.c"
    break;

  case 12: /* var: var "," var  */
#line 127 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1489 "simple-bison-code.tab.c"
    break;

  case 13: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 132 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1495 "simple-bison-code.tab.c"
    break;

  case 14: /* pos_elem: IDENTIFIER "[" IDENTIFIER "]"  */
#line 133 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1501 "simple-bison-code.tab.c"
    break;

  case 15: /* arr_elements: "[" "]"  */
#line 138 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1507 "simple-bison-code.tab.c"
    break;

  case 16: /* arr_elements: "[" integ "]"  */
#line 139 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1513 "simple-bison-code.tab.c"
    break;

  case 17: /* arr_elements: "[" fl "]"  */
#line 140 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1519 "simple-bison-code.tab.c"
    break;

  case 18: /* arr_elements: "[" str "]"  */
#line 141 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1525 "simple-bison-code.tab.c"
    break;

  case 19: /* integ: INTEGER  */
#line 145 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1531 "simple-bison-code.tab.c"
    break;

  case 20: /* integ: integ "," integ  */
#line 146 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1537 "simple-bison-code.tab.c"
    break;

  case 21: /* fl: FLOAT  */
#line 150 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1543 "simple-bison-code.tab.c"
    break;

  case 22: /* fl: fl "," fl  */
#line 151 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1549 "simple-bison-code.tab.c"
    break;

  case 23: /* str: STRING  */
#line 155 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1555 "simple-bison-code.tab.c"
    break;

  case 24: /* str: str "," str  */
#line 156 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1561 "simple-bison-code.tab.c"
    break;

  case 25: /* build_func: func  */
#line 161 "simple-bison-code.y"
              { (yyval.sval) = strdup(yytext); }
#line 1567 "simple-bison-code.tab.c"
    break;

  case 26: /* func: SSCAN "(" scan_params ")"  */
#line 165 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1573 "simple-bison-code.tab.c"
    break;

  case 27: /* func: SLEN "(" len_params ")"  */
#line 166 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1579 "simple-bison-code.tab.c"
    break;

  case 28: /* func: SCMP "(" cmp_params ")"  */
#line 167 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1585 "simple-bison-code.tab.c"
    break;

  case 29: /* func: SPRINT "(" print_params ")"  */
#line 168 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1591 "simple-bison-code.tab.c"
    break;

  case 30: /* func: IDENTIFIER "(" print_params ")"  */
#line 169 "simple-bison-code.y"
                                          { (yyval.sval) = strdup(yytext); }
#line 1597 "simple-bison-code.tab.c"
    break;

  case 31: /* scan_params: IDENTIFIER  */
#line 173 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1603 "simple-bison-code.tab.c"
    break;

  case 32: /* len_params: arr_elements  */
#line 177 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1609 "simple-bison-code.tab.c"
    break;

  case 33: /* len_params: STRING  */
#line 178 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1615 "simple-bison-code.tab.c"
    break;

  case 34: /* len_params: IDENTIFIER  */
#line 179 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1621 "simple-bison-code.tab.c"
    break;

  case 35: /* cmp_params: STRING  */
#line 183 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1627 "simple-bison-code.tab.c"
    break;

  case 36: /* cmp_params: IDENTIFIER  */
#line 184 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1633 "simple-bison-code.tab.c"
    break;

  case 37: /* cmp_params: cmp_params "," cmp_params  */
#line 185 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1639 "simple-bison-code.tab.c"
    break;

  case 38: /* print_params: STRING  */
#line 189 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1645 "simple-bison-code.tab.c"
    break;

  case 39: /* print_params: IDENTIFIER  */
#line 190 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1651 "simple-bison-code.tab.c"
    break;

  case 40: /* print_params: INTEGER  */
#line 191 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1657 "simple-bison-code.tab.c"
    break;

  case 41: /* print_params: FLOAT  */
#line 192 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1663 "simple-bison-code.tab.c"
    break;

  case 42: /* print_params: func  */
#line 193 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1669 "simple-bison-code.tab.c"
    break;

  case 43: /* print_params: pos_elem  */
#line 194 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1675 "simple-bison-code.tab.c"
    break;

  case 44: /* print_params: print_params "," print_params  */
#line 195 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1681 "simple-bison-code.tab.c"
    break;

  case 45: /* decl_func: name_func decl_statement  */
#line 200 "simple-bison-code.y"
                                 { (yyval.sval) = strdup(yytext); }
#line 1687 "simple-bison-code.tab.c"
    break;

  case 46: /* name_func: SFUNC  */
#line 204 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1693 "simple-bison-code.tab.c"
    break;

  case 47: /* name_func: name_func IDENTIFIER params NEWLINE  */
#line 205 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1699 "simple-bison-code.tab.c"
    break;

  case 48: /* params: "(" ")"  */
#line 209 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1705 "simple-bison-code.tab.c"
    break;

  case 49: /* params: "(" type_params ")"  */
#line 210 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1711 "simple-bison-code.tab.c"
    break;

  case 50: /* type_params: type IDENTIFIER  */
#line 214 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1717 "simple-bison-code.tab.c"
    break;

  case 51: /* type_params: type_params "," type_params  */
#line 215 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1723 "simple-bison-code.tab.c"
    break;

  case 52: /* sign: INTEGER  */
#line 221 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1729 "simple-bison-code.tab.c"
    break;

  case 53: /* sign: FLOAT  */
#line 222 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1735 "simple-bison-code.tab.c"
    break;

  case 54: /* sign: "+" sign  */
#line 223 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1741 "simple-bison-code.tab.c"
    break;

  case 55: /* sign: "-" sign  */
#line 224 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1747 "simple-bison-code.tab.c"
    break;

  case 56: /* arithm_expr: sign  */
#line 228 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1753 "simple-bison-code.tab.c"
    break;

  case 57: /* arithm_expr: IDENTIFIER  */
#line 229 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1759 "simple-bison-code.tab.c"
    break;

  case 58: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 230 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1765 "simple-bison-code.tab.c"
    break;

  case 59: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 231 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1771 "simple-bison-code.tab.c"
    break;

  case 60: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 232 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1777 "simple-bison-code.tab.c"
    break;

  case 61: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 233 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1783 "simple-bison-code.tab.c"
    break;

  case 62: /* arithm_expr: arithm_expr "%" arithm_expr  */
#line 234 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1789 "simple-bison-code.tab.c"
    break;

  case 63: /* number: INTEGER  */
#line 238 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1795 "simple-bison-code.tab.c"
    break;

  case 64: /* number: FLOAT  */
#line 239 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1801 "simple-bison-code.tab.c"
    break;

  case 65: /* number: pos_elem  */
#line 240 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1807 "simple-bison-code.tab.c"
    break;

  case 66: /* assign: var "=" val  */
#line 246 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1813 "simple-bison-code.tab.c"
    break;

  case 67: /* assign: var "=" cmp_expr  */
#line 247 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1819 "simple-bison-code.tab.c"
    break;

  case 68: /* assign: var "=" arithm_expr  */
#line 248 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1825 "simple-bison-code.tab.c"
    break;

  case 69: /* assign: var "=" merge_arr  */
#line 249 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1831 "simple-bison-code.tab.c"
    break;

  case 70: /* assign: oper_eq  */
#line 250 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1837 "simple-bison-code.tab.c"
    break;

  case 71: /* oper_eq: var "++"  */
#line 254 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1843 "simple-bison-code.tab.c"
    break;

  case 72: /* oper_eq: var "--"  */
#line 255 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1849 "simple-bison-code.tab.c"
    break;

  case 73: /* oper_eq: "++" var  */
#line 256 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1855 "simple-bison-code.tab.c"
    break;

  case 74: /* oper_eq: "--" var  */
#line 257 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1861 "simple-bison-code.tab.c"
    break;

  case 75: /* oper_eq: var "+=" number  */
#line 258 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1867 "simple-bison-code.tab.c"
    break;

  case 76: /* oper_eq: var "-=" number  */
#line 259 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1873 "simple-bison-code.tab.c"
    break;

  case 77: /* oper_eq: var "*=" number  */
#line 260 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1879 "simple-bison-code.tab.c"
    break;

  case 78: /* oper_eq: var "/=" number  */
#line 261 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1885 "simple-bison-code.tab.c"
    break;

  case 79: /* oper_eq: var "+-"  */
#line 263 "simple-bison-code.y"
                           { fatal_errors++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Error: Invalid operator detected at Line=%d\n", line-1); }
#line 1891 "simple-bison-code.tab.c"
    break;

  case 80: /* oper_eq: var "-+"  */
#line 264 "simple-bison-code.y"
                           { fatal_errors++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Error: Invalid operator detected at Line=%d\n", line-1); }
#line 1897 "simple-bison-code.tab.c"
    break;

  case 81: /* oper_eq: "+-" var  */
#line 265 "simple-bison-code.y"
                           { fatal_errors++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Error: Invalid operator detected at Line=%d\n", line-1); }
#line 1903 "simple-bison-code.tab.c"
    break;

  case 82: /* oper_eq: "-+" var  */
#line 266 "simple-bison-code.y"
                           { fatal_errors++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Error: Invalid operator detected at Line=%d\n", line-1); }
#line 1909 "simple-bison-code.tab.c"
    break;

  case 83: /* val: number  */
#line 270 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1915 "simple-bison-code.tab.c"
    break;

  case 84: /* val: IDENTIFIER  */
#line 271 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1921 "simple-bison-code.tab.c"
    break;

  case 85: /* val: STRING  */
#line 272 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1927 "simple-bison-code.tab.c"
    break;

  case 86: /* val: arr_elements  */
#line 273 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1933 "simple-bison-code.tab.c"
    break;

  case 87: /* val: val "," val  */
#line 274 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1939 "simple-bison-code.tab.c"
    break;

  case 88: /* cmp_expr: INTEGER  */
#line 279 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1945 "simple-bison-code.tab.c"
    break;

  case 89: /* cmp_expr: FLOAT  */
#line 280 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1951 "simple-bison-code.tab.c"
    break;

  case 90: /* cmp_expr: IDENTIFIER  */
#line 281 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1957 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 282 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1963 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 283 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1969 "simple-bison-code.tab.c"
    break;

  case 93: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 284 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1975 "simple-bison-code.tab.c"
    break;

  case 94: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 285 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1981 "simple-bison-code.tab.c"
    break;

  case 95: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 286 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1987 "simple-bison-code.tab.c"
    break;

  case 96: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 287 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1993 "simple-bison-code.tab.c"
    break;

  case 97: /* cmp_expr: cmp_expr "||" cmp_expr  */
#line 288 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1999 "simple-bison-code.tab.c"
    break;

  case 98: /* cmp_expr: cmp_expr "&&" cmp_expr  */
#line 289 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2005 "simple-bison-code.tab.c"
    break;

  case 99: /* cmp_expr: "!" cmp_expr  */
#line 290 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 2011 "simple-bison-code.tab.c"
    break;

  case 100: /* cmp_expr: cmp_expr ">" ">" arithm_expr  */
#line 292 "simple-bison-code.y"
                                       { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double > detected at Line=%d\n", line-1); }
#line 2017 "simple-bison-code.tab.c"
    break;

  case 101: /* cmp_expr: cmp_expr "<" "<" arithm_expr  */
#line 293 "simple-bison-code.y"
                                       { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double < detected at Line=%d\n", line-1); }
#line 2023 "simple-bison-code.tab.c"
    break;

  case 102: /* merge_arr: arr_elements "+" arr_elements  */
#line 298 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 2029 "simple-bison-code.tab.c"
    break;

  case 103: /* decl_statements: decl_statement  */
#line 303 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 2035 "simple-bison-code.tab.c"
    break;

  case 104: /* decl_statements: decl_statements decl_statement  */
#line 304 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 2041 "simple-bison-code.tab.c"
    break;

  case 105: /* decl_statement: if_statement  */
#line 308 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 2047 "simple-bison-code.tab.c"
    break;

  case 106: /* decl_statement: while_statement  */
#line 309 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση while\""; }
#line 2053 "simple-bison-code.tab.c"
    break;

  case 107: /* decl_statement: for_statement  */
#line 310 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση for\""; }
#line 2059 "simple-bison-code.tab.c"
    break;

  case 108: /* decl_statement: decl_var ";"  */
#line 311 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση μεταβλητής\""; }
#line 2065 "simple-bison-code.tab.c"
    break;

  case 109: /* decl_statement: build_func ";"  */
#line 312 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Κλήση συνάρτησης\""; }
#line 2071 "simple-bison-code.tab.c"
    break;

  case 110: /* decl_statement: decl_func  */
#line 313 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση συναρτήσεων χρήστη\""; }
#line 2077 "simple-bison-code.tab.c"
    break;

  case 111: /* decl_statement: assign ";"  */
#line 314 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Ανάθεση τιμής σε μεταβλητή\""; }
#line 2083 "simple-bison-code.tab.c"
    break;

  case 112: /* decl_statement: arithm_expr  */
#line 315 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Αριθμητική έκφραση\""; }
#line 2089 "simple-bison-code.tab.c"
    break;

  case 113: /* decl_statement: cmp_expr  */
#line 316 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Σύγκριση\""; }
#line 2095 "simple-bison-code.tab.c"
    break;

  case 114: /* decl_statement: merge_arr  */
#line 317 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Συνένωση πινάκων\""; }
#line 2101 "simple-bison-code.tab.c"
    break;

  case 115: /* decl_statement: block_statement  */
#line 318 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Σύνθετες δηλώσεις\""; }
#line 2107 "simple-bison-code.tab.c"
    break;

  case 116: /* decl_statement: NEWLINE  */
#line 319 "simple-bison-code.y"
                                         { (yyval.sval) = "\n"; }
#line 2113 "simple-bison-code.tab.c"
    break;

  case 117: /* if_statement: SIF condition decl_statement  */
#line 324 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 2119 "simple-bison-code.tab.c"
    break;

  case 118: /* condition: cmp_expr  */
#line 328 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2125 "simple-bison-code.tab.c"
    break;

  case 119: /* condition: "(" condition ")"  */
#line 329 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2131 "simple-bison-code.tab.c"
    break;

  case 120: /* condition: "((" condition ")"  */
#line 331 "simple-bison-code.y"
                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double ( detected at Line=%d\n", line); }
#line 2137 "simple-bison-code.tab.c"
    break;

  case 121: /* condition: "(" condition "))"  */
#line 332 "simple-bison-code.y"
                                { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: Double ) detected at Line=%d\n", line); }
#line 2143 "simple-bison-code.tab.c"
    break;

  case 122: /* condition: condition ")"  */
#line 333 "simple-bison-code.y"
                                  { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: No ( detected at Line=%d\n", line);}
#line 2149 "simple-bison-code.tab.c"
    break;

  case 123: /* condition: "(" condition  */
#line 334 "simple-bison-code.y"
                                   { par_warnings++; (yyval.sval) = strdup(yytext); fprintf(yyout, "Warning: No ) detected at Line=%d\n", line);}
#line 2155 "simple-bison-code.tab.c"
    break;

  case 124: /* block_statement: "{" decl_statements "}"  */
#line 338 "simple-bison-code.y"
                                {  (yyval.sval) = strdup(yytext); }
#line 2161 "simple-bison-code.tab.c"
    break;

  case 125: /* while_statement: SWHILE condition decl_statement  */
#line 343 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 2167 "simple-bison-code.tab.c"
    break;

  case 126: /* for_statement: SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement  */
#line 348 "simple-bison-code.y"
                                                                    { (yyval.sval) = strdup(yytext); }
#line 2173 "simple-bison-code.tab.c"
    break;


#line 2177 "simple-bison-code.tab.c"

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

#line 351 "simple-bison-code.y"





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
