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
#line 19 "simple-bison-code.y"

/* Ορισμοί και δηλώσεις γλώσσας C. Οτιδήποτε έχει να κάνει με ορισμό ή αρχικοποίηση
   μεταβλητών & συναρτήσεων, αρχεία header και δηλώσεις #define μπαίνει σε αυτό το σημείο */
        
        #include <stdio.h>
	#include <stdlib.h>
        #define YYSTYPE char*
        #define YYDEBUG 1
	
	int line = 1;
	int errflag = 0;
	extern char *yytext;
	
	void yyerror(char *);

        /* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

        extern FILE *yyin;
        extern FILE *yyout;

#line 93 "simple-bison-code.tab.c"

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
  YYSYMBOL_decl_var = 66,                  /* decl_var  */
  YYSYMBOL_type = 67,                      /* type  */
  YYSYMBOL_var = 68,                       /* var  */
  YYSYMBOL_decl_arr = 69,                  /* decl_arr  */
  YYSYMBOL_pos_elem = 70,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 71,              /* arr_elements  */
  YYSYMBOL_integ = 72,                     /* integ  */
  YYSYMBOL_fl = 73,                        /* fl  */
  YYSYMBOL_str = 74,                       /* str  */
  YYSYMBOL_build_func = 75,                /* build_func  */
  YYSYMBOL_func = 76,                      /* func  */
  YYSYMBOL_scan_params = 77,               /* scan_params  */
  YYSYMBOL_len_params = 78,                /* len_params  */
  YYSYMBOL_cmp_params = 79,                /* cmp_params  */
  YYSYMBOL_print_params = 80,              /* print_params  */
  YYSYMBOL_decl_func = 81,                 /* decl_func  */
  YYSYMBOL_name_func = 82,                 /* name_func  */
  YYSYMBOL_params = 83,                    /* params  */
  YYSYMBOL_type_params = 84,               /* type_params  */
  YYSYMBOL_code_func = 85,                 /* code_func  */
  YYSYMBOL_code = 86,                      /* code  */
  YYSYMBOL_decl_ops = 87,                  /* decl_ops  */
  YYSYMBOL_sign = 88,                      /* sign  */
  YYSYMBOL_arithm_expr = 89,               /* arithm_expr  */
  YYSYMBOL_cmp_expr = 90,                  /* cmp_expr  */
  YYSYMBOL_merge_arr = 91                  /* merge_arr  */
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
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

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
static const yytype_uint8 yyrline[] =
{
       0,   103,   103,   104,   105,   106,   107,   108,   109,   116,
     119,   120,   121,   122,   123,   126,   127,   132,   135,   137,
     138,   139,   140,   143,   144,   147,   148,   151,   152,   157,
     160,   161,   162,   163,   166,   169,   170,   171,   174,   175,
     176,   179,   180,   181,   182,   183,   184,   185,   190,   193,
     194,   197,   198,   201,   202,   205,   207,   214,   216,   217,
     220,   221,   222,   223,   226,   227,   228,   229,   230,   231,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   247
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
  "NEWLINE", "UNKNOWN", "$accept", "program", "decl_var", "type", "var",
  "decl_arr", "pos_elem", "arr_elements", "integ", "fl", "str",
  "build_func", "func", "scan_params", "len_params", "cmp_params",
  "print_params", "decl_func", "name_func", "params", "type_params",
  "code_func", "code", "decl_ops", "sign", "arithm_expr", "cmp_expr",
  "merge_arr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-43)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-66)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -43,     0,   -43,    14,    41,    45,   -43,   -43,     1,   -43,
     -43,   -43,    74,    74,    17,   -42,   -31,   -21,   -15,   -43,
     -23,    54,    11,    73,    70,    63,    71,    69,    72,   -43,
      60,    51,   -43,    84,   -43,    87,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,   -17,    -9,    36,   134,     5,    -2,
     109,   -43,   -43,    64,   -43,    84,   -43,   -43,   -43,   -43,
     -43,   -43,    79,    79,    79,    79,   111,   111,   111,   111,
     111,   111,    81,    20,    77,   -43,   135,   -43,   136,   -43,
     137,   -43,    93,    94,   -43,   -43,   -43,   -43,   -43,   -36,
     -43,   -43,   -43,    96,   -43,   -43,   -26,    54,   -43,   -43,
      82,   -43,    62,    62,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,    67,    67,   -43,   -43,   144,   -19,   -43,
     -43,   -43,   -43,   -43,   143,   -43,     5,   -43,   -43,   109,
     -43,    95,   -43,   -43,    98,    99,   -43,   -43,   -43,   -43,
     -43
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       8,     0,     1,    72,    70,    71,    12,    10,     0,    14,
      11,    13,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    64,
      57,    58,    59,     0,    49,     0,    60,    61,    62,    63,
      27,    23,    25,    19,     0,     0,     0,     0,     0,     0,
       0,     2,    15,     0,     3,     0,     4,    29,     5,    56,
      48,     6,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,    21,     0,    22,
       0,    34,     0,    42,    41,    43,    44,    46,    45,     0,
      37,    36,    35,     0,    39,    38,     0,     0,     9,    79,
       0,    65,    66,    67,    68,    69,    72,    70,    71,    74,
      73,    75,    76,    77,    78,    17,    51,     0,     0,    50,
      24,    26,    28,    30,     0,    33,     0,    31,    32,     0,
      16,     0,    53,    52,     0,     0,    47,    40,    55,    54,
      18
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -43,   -43,   -43,   149,    55,   -43,   -43,    -7,    78,    75,
      76,   -43,   154,   -43,   -43,    28,    32,   -43,   151,   -43,
      26,   -43,   -43,   -43,   118,   -10,    58,   -43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    20,   117,    53,    22,    87,    23,    44,    45,
      46,    24,    88,    82,    93,    96,    89,    26,    27,    74,
     118,    60,   100,    28,    29,    30,    31,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       2,    90,    91,     3,    34,     4,     5,    47,    83,    84,
      85,    86,     6,     7,   125,     8,     8,     9,    48,   126,
      10,    40,    41,    42,   128,    11,    72,    12,    49,   129,
      13,   133,     6,     7,    50,    75,   134,     9,    76,    51,
      10,   -65,    92,    77,   -65,    11,    78,   -65,    99,    14,
     -65,    14,   102,   103,   104,   105,    33,    52,    15,    16,
      17,    18,    19,    15,    16,    17,    18,   -49,   -60,    43,
     116,   -60,   -61,    54,   -60,   -61,   -65,   -60,   -61,    36,
      37,   -61,   101,    66,    36,    37,    67,    62,    79,    68,
      63,    80,    69,    64,    70,    64,    65,    71,    65,    66,
      55,    12,    67,   -60,    13,    68,    12,   -61,    69,    13,
       6,     7,    94,    95,   106,     9,   107,   108,    10,    97,
      57,    98,    59,    11,   109,   110,   111,   112,   113,   114,
      38,    39,    56,    58,    61,    14,    73,    81,   115,   119,
      41,    40,    42,   123,   131,   124,   127,   132,   135,   138,
      21,   140,   130,   121,   120,    25,   122,   137,   136,    35,
     139
};

static const yytype_uint8 yycheck[] =
{
       0,     3,     4,     3,     3,     5,     6,    49,     3,     4,
       5,     6,    12,    13,    50,    15,    15,    17,    49,    55,
      20,     4,     5,     6,    50,    25,    33,    27,    49,    55,
      30,    50,    12,    13,    49,    52,    55,    17,    55,    62,
      20,    27,    49,    52,    30,    25,    55,    33,    55,    51,
      36,    51,    62,    63,    64,    65,    42,     3,    58,    59,
      60,    61,    62,    58,    59,    60,    61,    53,    27,    52,
      50,    30,    27,    62,    33,    30,    62,    36,    33,     5,
       6,    36,     3,    32,     5,     6,    35,    27,    52,    38,
      30,    55,    41,    33,    43,    33,    36,    46,    36,    32,
      27,    27,    35,    62,    30,    38,    27,    62,    41,    30,
      12,    13,     3,     4,     3,    17,     5,     6,    20,    55,
      57,    57,    53,    25,    66,    67,    68,    69,    70,    71,
      12,    13,    62,    62,    62,    51,    49,     3,    57,    62,
       5,     4,     6,    50,    62,    51,    50,     3,     5,    54,
       1,    52,    97,    78,    76,     1,    80,   129,   126,     8,
     134
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    65,     0,     3,     5,     6,    12,    13,    15,    17,
      20,    25,    27,    30,    51,    58,    59,    60,    61,    62,
      66,    67,    69,    71,    75,    76,    81,    82,    87,    88,
      89,    90,    91,    42,     3,    82,     5,     6,    88,    88,
       4,     5,     6,    52,    72,    73,    74,    49,    49,    49,
      49,    62,     3,    68,    62,    27,    62,    57,    62,    53,
      85,    62,    27,    30,    33,    36,    32,    35,    38,    41,
      43,    46,    71,    49,    83,    52,    55,    52,    55,    52,
      55,     3,    77,     3,     4,     5,     6,    70,    76,    80,
       3,     4,    71,    78,     3,     4,    79,    55,    57,    71,
      86,     3,    89,    89,    89,    89,     3,     5,     6,    90,
      90,    90,    90,    90,    90,    57,    50,    67,    84,    62,
      72,    73,    74,    50,    51,    50,    55,    50,    50,    55,
      68,    62,     3,    50,    55,     5,    80,    79,    54,    84,
      52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    65,    65,    65,    66,
      67,    67,    67,    67,    67,    68,    68,    69,    70,    71,
      71,    71,    71,    72,    72,    73,    73,    74,    74,    75,
      76,    76,    76,    76,    77,    78,    78,    78,    79,    79,
      79,    80,    80,    80,    80,    80,    80,    80,    81,    82,
      82,    83,    83,    84,    84,    85,    86,    87,    87,    87,
      88,    88,    88,    88,    89,    89,    89,    89,    89,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    90,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     3,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     4,     2,
       3,     3,     3,     1,     3,     1,     3,     1,     3,     2,
       4,     4,     4,     4,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       4,     2,     3,     2,     3,     4,     0,     1,     1,     1,
       1,     1,     2,     2,     1,     1,     3,     3,     3,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3
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
  case 2: /* program: program decl_var NEWLINE  */
#line 103 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] [2.2] Δηλώσεις Μεταβλητών\n\n"); }
#line 1275 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program decl_arr NEWLINE  */
#line 104 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] [2.3] Πίνακες\n\n"); }
#line 1281 "simple-bison-code.tab.c"
    break;

  case 4: /* program: program build_func NEWLINE  */
#line 105 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] [2.4] Ενσωματωμένες απλές συναρτήσεις\n\n");}
#line 1287 "simple-bison-code.tab.c"
    break;

  case 5: /* program: program decl_func NEWLINE  */
#line 106 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] [2.5] Δήλωση συναρτήσεων χρήστη\n\n");}
#line 1293 "simple-bison-code.tab.c"
    break;

  case 6: /* program: program decl_ops NEWLINE  */
#line 107 "simple-bison-code.y"
                                              { fprintf(yyout, "[BISON] [2.6] Δηλώσεις απλών εκφράσεων\n\n"); }
#line 1299 "simple-bison-code.tab.c"
    break;

  case 7: /* program: program NEWLINE  */
#line 108 "simple-bison-code.y"
                                                { }
#line 1305 "simple-bison-code.tab.c"
    break;

  case 9: /* decl_var: type var ";"  */
#line 116 "simple-bison-code.y"
                     { fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση Μεταβλητής\"", line); }
#line 1311 "simple-bison-code.tab.c"
    break;

  case 10: /* type: SINT  */
#line 119 "simple-bison-code.y"
                         { yyval = strdup(yytext); }
#line 1317 "simple-bison-code.tab.c"
    break;

  case 11: /* type: SFLOAT  */
#line 120 "simple-bison-code.y"
                         { yyval = strdup(yytext); }
#line 1323 "simple-bison-code.tab.c"
    break;

  case 12: /* type: SDOUBLE  */
#line 121 "simple-bison-code.y"
                         { yyval = strdup(yytext); }
#line 1329 "simple-bison-code.tab.c"
    break;

  case 13: /* type: SSHORT  */
#line 122 "simple-bison-code.y"
                         { yyval = strdup(yytext); }
#line 1335 "simple-bison-code.tab.c"
    break;

  case 14: /* type: SLONG  */
#line 123 "simple-bison-code.y"
                         { yyval = strdup(yytext); }
#line 1341 "simple-bison-code.tab.c"
    break;

  case 15: /* var: IDENTIFIER  */
#line 126 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1347 "simple-bison-code.tab.c"
    break;

  case 16: /* var: var "," var  */
#line 127 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1353 "simple-bison-code.tab.c"
    break;

  case 17: /* decl_arr: IDENTIFIER "=" arr_elements ";"  */
#line 132 "simple-bison-code.y"
                                        { fprintf(yyout, "[BISON] Line= %d, expression=\"Δήλωση Πίνακα\"", line); }
#line 1359 "simple-bison-code.tab.c"
    break;

  case 18: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 135 "simple-bison-code.y"
                                    { yyval = strdup(yytext); }
#line 1365 "simple-bison-code.tab.c"
    break;

  case 19: /* arr_elements: "[" "]"  */
#line 137 "simple-bison-code.y"
                                {yyval = strdup(yytext); }
#line 1371 "simple-bison-code.tab.c"
    break;

  case 20: /* arr_elements: "[" integ "]"  */
#line 138 "simple-bison-code.y"
                              { yyval = strdup(yytext); }
#line 1377 "simple-bison-code.tab.c"
    break;

  case 21: /* arr_elements: "[" fl "]"  */
#line 139 "simple-bison-code.y"
                            { yyval = strdup(yytext); }
#line 1383 "simple-bison-code.tab.c"
    break;

  case 22: /* arr_elements: "[" str "]"  */
#line 140 "simple-bison-code.y"
                            { yyval = strdup(yytext); }
#line 1389 "simple-bison-code.tab.c"
    break;

  case 23: /* integ: INTEGER  */
#line 143 "simple-bison-code.y"
                                { yyval = yyvsp[0]; }
#line 1395 "simple-bison-code.tab.c"
    break;

  case 24: /* integ: integ "," integ  */
#line 144 "simple-bison-code.y"
                            { yyval = strdup(yytext); }
#line 1401 "simple-bison-code.tab.c"
    break;

  case 25: /* fl: FLOAT  */
#line 147 "simple-bison-code.y"
                                { yyval = yyvsp[0]; }
#line 1407 "simple-bison-code.tab.c"
    break;

  case 26: /* fl: fl "," fl  */
#line 148 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1413 "simple-bison-code.tab.c"
    break;

  case 27: /* str: STRING  */
#line 151 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1419 "simple-bison-code.tab.c"
    break;

  case 28: /* str: str "," str  */
#line 152 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1425 "simple-bison-code.tab.c"
    break;

  case 29: /* build_func: func ";"  */
#line 157 "simple-bison-code.y"
                 { fprintf(yyout, "[BISON] Line=%d, expression=\"Ενσωματωμένη απλή συνάρτηση\"", line); }
#line 1431 "simple-bison-code.tab.c"
    break;

  case 30: /* func: SSCAN "(" scan_params ")"  */
#line 160 "simple-bison-code.y"
                                         { yyval = strdup(yytext); }
#line 1437 "simple-bison-code.tab.c"
    break;

  case 31: /* func: SLEN "(" len_params ")"  */
#line 161 "simple-bison-code.y"
                                         { yyval = strdup(yytext); }
#line 1443 "simple-bison-code.tab.c"
    break;

  case 32: /* func: SCMP "(" cmp_params ")"  */
#line 162 "simple-bison-code.y"
                                         { yyval = strdup(yytext); }
#line 1449 "simple-bison-code.tab.c"
    break;

  case 33: /* func: SPRINT "(" print_params ")"  */
#line 163 "simple-bison-code.y"
                                         { yyval = strdup(yytext); }
#line 1455 "simple-bison-code.tab.c"
    break;

  case 34: /* scan_params: IDENTIFIER  */
#line 166 "simple-bison-code.y"
                   { yyval = strdup(yytext); }
#line 1461 "simple-bison-code.tab.c"
    break;

  case 35: /* len_params: arr_elements  */
#line 169 "simple-bison-code.y"
                            { yyval = strdup(yytext); }
#line 1467 "simple-bison-code.tab.c"
    break;

  case 36: /* len_params: STRING  */
#line 170 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1473 "simple-bison-code.tab.c"
    break;

  case 37: /* len_params: IDENTIFIER  */
#line 171 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1479 "simple-bison-code.tab.c"
    break;

  case 38: /* cmp_params: STRING  */
#line 174 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1485 "simple-bison-code.tab.c"
    break;

  case 39: /* cmp_params: IDENTIFIER  */
#line 175 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1491 "simple-bison-code.tab.c"
    break;

  case 40: /* cmp_params: cmp_params "," cmp_params  */
#line 176 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1497 "simple-bison-code.tab.c"
    break;

  case 41: /* print_params: STRING  */
#line 179 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1503 "simple-bison-code.tab.c"
    break;

  case 42: /* print_params: IDENTIFIER  */
#line 180 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1509 "simple-bison-code.tab.c"
    break;

  case 43: /* print_params: INTEGER  */
#line 181 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1515 "simple-bison-code.tab.c"
    break;

  case 44: /* print_params: FLOAT  */
#line 182 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1521 "simple-bison-code.tab.c"
    break;

  case 45: /* print_params: func  */
#line 183 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1527 "simple-bison-code.tab.c"
    break;

  case 46: /* print_params: pos_elem  */
#line 184 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1533 "simple-bison-code.tab.c"
    break;

  case 47: /* print_params: print_params "," print_params  */
#line 185 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1539 "simple-bison-code.tab.c"
    break;

  case 48: /* decl_func: name_func code_func  */
#line 190 "simple-bison-code.y"
                            { fprintf(yyout, "[BISON] Line=%d, expression=\"Δήλωση συναρτήσεων χρήστη\"", line); }
#line 1545 "simple-bison-code.tab.c"
    break;

  case 49: /* name_func: IDENTIFIER  */
#line 193 "simple-bison-code.y"
                                        { yyval=strdup(yytext); }
#line 1551 "simple-bison-code.tab.c"
    break;

  case 50: /* name_func: SFUNC name_func params NEWLINE  */
#line 194 "simple-bison-code.y"
                                         { yyval=strdup(yytext); }
#line 1557 "simple-bison-code.tab.c"
    break;

  case 51: /* params: "(" ")"  */
#line 197 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1563 "simple-bison-code.tab.c"
    break;

  case 52: /* params: "(" type_params ")"  */
#line 198 "simple-bison-code.y"
                                { yyval = strdup(yytext); }
#line 1569 "simple-bison-code.tab.c"
    break;

  case 53: /* type_params: type IDENTIFIER  */
#line 201 "simple-bison-code.y"
                                       { yyval = strdup(yytext); }
#line 1575 "simple-bison-code.tab.c"
    break;

  case 54: /* type_params: type_params "," type_params  */
#line 202 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1581 "simple-bison-code.tab.c"
    break;

  case 55: /* code_func: "{" code NEWLINE "}"  */
#line 205 "simple-bison-code.y"
                             {yyval=strdup(yytext);}
#line 1587 "simple-bison-code.tab.c"
    break;

  case 57: /* decl_ops: arithm_expr  */
#line 214 "simple-bison-code.y"
                                { fprintf(yyout, "[BISON] Line=%d, expression=\"Αριθμητική έκφραση\"\n", line); }
#line 1593 "simple-bison-code.tab.c"
    break;

  case 58: /* decl_ops: cmp_expr  */
#line 216 "simple-bison-code.y"
                                { fprintf(yyout, "[BISON] Line=%d, expression=\"Σύγκριση\"\n", line); }
#line 1599 "simple-bison-code.tab.c"
    break;

  case 59: /* decl_ops: merge_arr  */
#line 217 "simple-bison-code.y"
                                { fprintf(yyout, "[BISON] Line=%d, expression=\"Συνένωση Πινάκων\"\n", line); }
#line 1605 "simple-bison-code.tab.c"
    break;

  case 60: /* sign: INTEGER  */
#line 220 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1611 "simple-bison-code.tab.c"
    break;

  case 61: /* sign: FLOAT  */
#line 221 "simple-bison-code.y"
                       { yyval = strdup(yytext); }
#line 1617 "simple-bison-code.tab.c"
    break;

  case 62: /* sign: "+" sign  */
#line 222 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1623 "simple-bison-code.tab.c"
    break;

  case 63: /* sign: "-" sign  */
#line 223 "simple-bison-code.y"
                        { yyval = strdup(yytext); }
#line 1629 "simple-bison-code.tab.c"
    break;

  case 64: /* arithm_expr: sign  */
#line 226 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1635 "simple-bison-code.tab.c"
    break;

  case 65: /* arithm_expr: IDENTIFIER  */
#line 227 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1641 "simple-bison-code.tab.c"
    break;

  case 66: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 228 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1647 "simple-bison-code.tab.c"
    break;

  case 67: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 229 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1653 "simple-bison-code.tab.c"
    break;

  case 68: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 230 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1659 "simple-bison-code.tab.c"
    break;

  case 69: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 231 "simple-bison-code.y"
                                        { yyval = strdup(yytext); }
#line 1665 "simple-bison-code.tab.c"
    break;

  case 70: /* cmp_expr: INTEGER  */
#line 235 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1671 "simple-bison-code.tab.c"
    break;

  case 71: /* cmp_expr: FLOAT  */
#line 236 "simple-bison-code.y"
                                 { yyval = strdup(yytext); }
#line 1677 "simple-bison-code.tab.c"
    break;

  case 72: /* cmp_expr: IDENTIFIER  */
#line 237 "simple-bison-code.y"
                                 { yyval = strdup(yytext); }
#line 1683 "simple-bison-code.tab.c"
    break;

  case 73: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 238 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1689 "simple-bison-code.tab.c"
    break;

  case 74: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 239 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1695 "simple-bison-code.tab.c"
    break;

  case 75: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 240 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1701 "simple-bison-code.tab.c"
    break;

  case 76: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 241 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1707 "simple-bison-code.tab.c"
    break;

  case 77: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 242 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1713 "simple-bison-code.tab.c"
    break;

  case 78: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 243 "simple-bison-code.y"
                                  { yyval = strdup(yytext); }
#line 1719 "simple-bison-code.tab.c"
    break;

  case 79: /* merge_arr: arr_elements "+" arr_elements  */
#line 247 "simple-bison-code.y"
                                      { yyval = strdup(yytext); }
#line 1725 "simple-bison-code.tab.c"
    break;


#line 1729 "simple-bison-code.tab.c"

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

#line 254 "simple-bison-code.y"





/* Η συνάρτηση yyerror χρησιμοποιείται για την αναφορά σφαλμάτων. Συγκεκριμένα καλείται
   από την yyparse όταν υπάρξει κάποιο συντακτικό λάθος. Στην παρακάτω περίπτωση η
   συνάρτηση επί της ουσίας τυπώνει μήνυμα λάθους στην οθόνη. */
void yyerror(char *s) {
        fprintf(stderr, "Error: %s\n", s);
}

/* Η συνάρτηση main που αποτελεί και το σημείο εκκίνησης του προγράμματος.
   Στην συγκεκριμένη περίπτωση απλά καλεί τη συνάρτηση yyparse του Bison
   για να ξεκινήσει η συντακτική ανάλυση. */
int main(int argc, char **argv)  
{       
        yydebug = 1;

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

	if (errflag == 0 && parse == 0)
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\n", parse);
        else
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\n", parse);

	return 0;
} 
