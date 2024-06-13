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
	
	void yyerror(char *);
        int yylex(void);

        /* Ο δείκτης yyin είναι αυτός που "δείχνει" στο αρχείο εισόδου. Εάν δεν γίνει χρήση
   του yyin, τότε η είσοδος γίνεται αποκλειστικά από το standard input (πληκτρολόγιο) */

        extern FILE *yyin;
        extern FILE *yyout;

#line 95 "simple-bison-code.tab.c"

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
  YYSYMBOL_call_func = 82,                 /* call_func  */
  YYSYMBOL_params = 83,                    /* params  */
  YYSYMBOL_type_params = 84,               /* type_params  */
  YYSYMBOL_sign = 85,                      /* sign  */
  YYSYMBOL_arithm_expr = 86,               /* arithm_expr  */
  YYSYMBOL_number = 87,                    /* number  */
  YYSYMBOL_assign = 88,                    /* assign  */
  YYSYMBOL_oper_eq = 89,                   /* oper_eq  */
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
#define YYLAST   474

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  115
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

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
       0,    96,    96,    97,   104,   108,   109,   110,   111,   112,
     116,   117,   122,   123,   127,   128,   129,   130,   134,   135,
     139,   140,   144,   145,   150,   154,   155,   156,   157,   161,
     165,   166,   167,   171,   172,   173,   177,   178,   179,   180,
     181,   182,   183,   188,   192,   193,   197,   200,   201,   205,
     206,   212,   213,   214,   215,   219,   220,   221,   222,   223,
     224,   225,   229,   230,   231,   237,   238,   239,   240,   244,
     245,   246,   247,   248,   249,   250,   251,   255,   256,   257,
     258,   259,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   280,   285,   286,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     307,   311,   312,   316,   321,   326
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
  "pos_elem", "arr_elements", "integ", "fl", "str", "build_func", "func",
  "scan_params", "len_params", "cmp_params", "print_params", "decl_func",
  "name_func", "call_func", "params", "type_params", "sign", "arithm_expr",
  "number", "assign", "oper_eq", "val", "cmp_expr", "merge_arr",
  "decl_statements", "decl_statement", "if_statement", "condition",
  "block_statement", "while_statement", "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-126)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -126,   115,  -126,   410,   236,   296,    60,  -126,  -126,  -126,
    -126,  -126,   -46,  -126,    60,   106,   106,    37,    41,   295,
     -18,   -10,    -1,    24,  -126,     3,    78,   -23,    64,    49,
    -126,  -126,   175,    68,  -126,    77,    74,   423,  -126,   355,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,    60,   423,
     295,    78,   295,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,   -14,    44,    62,   235,   131,    18,    11,   158,
    -126,  -126,    82,    23,    78,    95,  -126,   394,    18,  -126,
    -126,    92,    92,    92,    92,    92,  -126,    37,    37,    37,
      37,    37,    37,    37,    37,  -126,  -126,    98,  -126,    99,
    -126,  -126,   162,  -126,   157,  -126,   168,  -126,  -126,   129,
     138,  -126,  -126,  -126,  -126,  -126,    53,  -126,  -126,  -126,
     132,  -126,  -126,    88,   248,  -126,   308,   363,  -126,    64,
      77,  -126,   136,   423,  -126,  -126,  -126,    55,   135,   102,
    -126,    90,    90,  -126,  -126,  -126,  -126,  -126,   112,  -126,
     184,  -126,    20,    20,  -126,    37,  -126,  -126,  -126,  -126,
      51,  -126,    18,  -126,  -126,   158,    31,  -126,   195,   104,
    -126,  -126,   387,   151,   159,  -126,  -126,   138,  -126,  -126,
    -126,  -126,  -126,  -126,   375,    22,  -126,  -126,  -126,    78,
      78,   165,   164,    82,    82,   180,  -126,   180,   180,   180,
    -126,   295,   138,  -126,  -126,  -126,  -126,  -126
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    56,    51,    52,     0,     7,     5,    44,
       9,     6,     0,     8,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   109,     0,     0,     0,     0,     0,
      24,   102,     0,     0,    55,   105,     0,   106,   107,     0,
      95,    97,   108,    98,    99,    84,    82,    83,     0,   111,
       0,     0,     0,    51,    52,    53,    54,    93,    22,    18,
      20,    14,     0,     0,     0,     0,     0,     0,     0,     0,
     100,    10,     4,     0,     0,     0,   101,    56,     0,    43,
     103,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     2,    96,     0,   110,     0,
     114,    15,     0,    16,     0,    17,     0,   113,    29,     0,
      37,    36,    38,    39,    41,    40,     0,    32,    31,    30,
       0,    34,    33,     0,    84,    79,    82,    83,    64,    80,
      67,    77,    65,    66,    68,    11,    94,     0,     0,     0,
      56,    57,    58,    59,    60,    61,    86,    85,    92,    87,
      91,    88,    89,    90,   112,     0,    19,    21,    23,    25,
       0,    28,     0,    26,    27,     0,     0,    47,     0,     0,
      45,    46,     0,     0,     0,    42,    35,    78,    62,    63,
      80,    81,    49,    48,     0,     0,    13,    12,    50,     0,
       0,     0,     0,    72,    71,     0,    70,     0,     0,     0,
      69,     0,     0,    75,    76,    73,    74,   115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -125,   -25,   -62,   -64,   113,   114,   111,
    -126,   -61,  -126,  -126,    58,   -70,  -126,  -126,  -126,  -126,
      45,   155,   389,     9,   181,  -126,    65,    -4,   166,   223,
     -32,  -126,    16,  -126,  -126,  -126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    25,    26,    27,   128,    28,    62,    63,    64,
      29,    30,   109,   120,   123,   116,    31,    32,    33,   138,
     169,    34,    35,   131,    36,   192,   132,    37,    38,    39,
      40,    41,    50,    42,    43,    44
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      79,    72,    49,    51,   119,   114,   115,    96,   139,   129,
      49,   136,   168,    57,   117,   118,   114,   115,    98,    73,
     100,   110,   111,   112,   113,    71,   124,   125,   126,   127,
      52,    66,    74,    96,   177,   125,   178,   179,   101,    67,
      45,   102,    46,    47,    49,    58,    59,    60,    68,   135,
      15,   189,    87,    16,   173,    88,   174,    17,    90,   168,
      70,    92,    18,    45,    97,    46,    47,     7,     8,   133,
     190,    17,    10,    69,    18,    11,    20,    21,    22,    23,
      13,    71,    18,   146,   147,   148,   149,   150,   151,   152,
     153,    75,   175,    61,    17,   140,   103,    53,    54,   104,
     114,   115,   180,   161,    81,   167,    76,    82,   162,    48,
      83,    53,    54,    84,   105,     2,    85,   106,     3,    15,
       4,     5,    16,    83,     6,    80,    84,     7,     8,    85,
       9,    86,    10,    15,   108,    11,    16,    74,   164,    12,
      13,    14,    15,   165,    87,    16,    18,    88,   154,    17,
      90,   172,   171,    92,   183,    93,   155,   162,    94,   184,
     191,   121,   122,    60,   193,   194,    18,    59,    19,   207,
      55,    56,    58,    20,    21,    22,    23,    24,    77,   159,
       4,     5,   163,   202,     6,   178,   179,     7,     8,   160,
       9,   166,    10,   195,   196,    11,   197,   170,   182,    12,
      13,    14,    15,   186,   203,    16,   204,   205,   206,    17,
     198,   187,   199,   200,   201,   156,    87,   158,   157,    88,
      74,    89,    90,   176,    78,    92,    18,    93,    19,   188,
      94,   181,    99,    20,    21,    22,    23,    24,     3,   134,
       4,     5,    65,     0,     6,     0,     0,     7,     8,     0,
       9,     0,    10,     0,     0,    11,     0,     0,     0,    12,
      13,    14,    15,     0,     0,    16,     0,     0,   -82,    17,
       0,   -82,     0,   -82,   -82,   -56,   -82,   -82,   -56,   -82,
       0,   -56,   -82,     0,   -56,     0,    18,   -56,    19,   107,
       0,     0,     0,    20,    21,    22,    23,    24,     3,   160,
       4,     5,     0,   -78,     6,   -56,     0,     7,     8,     0,
       9,     0,    10,     0,     0,    11,     0,     0,     0,    12,
      13,    14,    15,     0,     0,    16,     0,     0,   -83,    17,
       0,   -83,     0,   -83,   -83,   -51,   -83,   -83,   -51,   -83,
       0,   -51,   -83,     0,   -51,     0,    18,   -51,    19,     0,
       0,     0,     0,    20,    21,    22,    23,    24,     3,     0,
       4,     5,     0,   -62,     6,   -51,     0,     7,     8,     0,
       9,     0,    10,     0,     0,    11,     0,     0,     0,    12,
      13,    14,    15,     0,     0,    16,     0,     7,     8,    17,
     -52,     0,    10,   -52,     0,    11,   -52,     0,     0,   -52,
      13,     0,   -52,     0,     0,     0,    18,     0,    19,     0,
       0,     0,     0,    20,    21,    22,    23,    95,   -63,    87,
     -52,     0,    88,     0,    89,    90,   -84,    91,    92,   -84,
      93,   -84,   -84,    94,   -84,   -84,   -10,   -84,     0,     0,
     -84,     0,   -84,   137,   185,   -84,     0,   -84,   -84,   -10,
     -84,   -84,   -10,   -84,     0,    87,   -84,     0,    88,     0,
      89,    90,   130,    91,    92,   -10,    93,     0,     0,    94,
     141,   142,   143,   144,   145
};

static const yytype_int16 yycheck[] =
{
      32,    26,     6,    49,    68,    67,    67,    39,    78,    73,
      14,    75,   137,    17,     3,     4,    78,    78,    50,    42,
      52,     3,     4,     5,     6,     3,     3,     4,     5,     6,
      14,    49,    55,    65,     3,     4,     5,     6,    52,    49,
       3,    55,     5,     6,    48,     4,     5,     6,    49,    74,
      27,    29,    32,    30,     3,    35,     5,    34,    38,   184,
      57,    41,    51,     3,    48,     5,     6,    12,    13,    73,
      48,    34,    17,    49,    51,    20,    58,    59,    60,    61,
      25,     3,    51,    87,    88,    89,    90,    91,    92,    93,
      94,    27,   162,    52,    34,     3,    52,     5,     6,    55,
     162,   162,   166,    50,    27,    50,    57,    30,    55,    49,
      33,     5,     6,    36,    52,     0,    39,    55,     3,    27,
       5,     6,    30,    33,     9,    57,    36,    12,    13,    39,
      15,    57,    17,    27,     3,    20,    30,    55,    50,    24,
      25,    26,    27,    55,    32,    30,    51,    35,    50,    34,
      38,   155,    50,    41,    50,    43,    57,    55,    46,    55,
     185,     3,     4,     6,   189,   190,    51,     5,    53,   201,
      15,    16,     4,    58,    59,    60,    61,    62,     3,    50,
       5,     6,    50,     3,     9,     5,     6,    12,    13,    51,
      15,    55,    17,    28,    29,    20,    31,    62,     3,    24,
      25,    26,    27,    52,   195,    30,   197,   198,   199,    34,
      45,    52,    47,    48,    50,   102,    32,   106,   104,    35,
      55,    37,    38,   165,    49,    41,    51,    43,    53,   184,
      46,   166,    51,    58,    59,    60,    61,    62,     3,    73,
       5,     6,    19,    -1,     9,    -1,    -1,    12,    13,    -1,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    30,    -1,    -1,    32,    34,
      -1,    35,    -1,    37,    38,    27,    40,    41,    30,    43,
      -1,    33,    46,    -1,    36,    -1,    51,    39,    53,    54,
      -1,    -1,    -1,    58,    59,    60,    61,    62,     3,    51,
       5,     6,    -1,    55,     9,    57,    -1,    12,    13,    -1,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    30,    -1,    -1,    32,    34,
      -1,    35,    -1,    37,    38,    27,    40,    41,    30,    43,
      -1,    33,    46,    -1,    36,    -1,    51,    39,    53,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,     3,    -1,
       5,     6,    -1,    55,     9,    57,    -1,    12,    13,    -1,
      15,    -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    27,    -1,    -1,    30,    -1,    12,    13,    34,
      27,    -1,    17,    30,    -1,    20,    33,    -1,    -1,    36,
      25,    -1,    39,    -1,    -1,    -1,    51,    -1,    53,    -1,
      -1,    -1,    -1,    58,    59,    60,    61,    62,    55,    32,
      57,    -1,    35,    -1,    37,    38,    32,    40,    41,    35,
      43,    37,    38,    46,    40,    41,    42,    43,    -1,    -1,
      46,    -1,    32,    49,    57,    35,    -1,    37,    38,    55,
      40,    41,    42,    43,    -1,    32,    46,    -1,    35,    -1,
      37,    38,    73,    40,    41,    55,    43,    -1,    -1,    46,
      81,    82,    83,    84,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    65,     0,     3,     5,     6,     9,    12,    13,    15,
      17,    20,    24,    25,    26,    27,    30,    34,    51,    53,
      58,    59,    60,    61,    62,    66,    67,    68,    70,    74,
      75,    80,    81,    82,    85,    86,    88,    91,    92,    93,
      94,    95,    97,    98,    99,     3,     5,     6,    49,    91,
      96,    49,    96,     5,     6,    85,    85,    91,     4,     5,
       6,    52,    71,    72,    73,    93,    49,    49,    49,    49,
      57,     3,    68,    42,    55,    27,    57,     3,    49,    94,
      57,    27,    30,    33,    36,    39,    57,    32,    35,    37,
      38,    40,    41,    43,    46,    62,    94,    96,    94,    88,
      94,    52,    55,    52,    55,    52,    55,    54,     3,    76,
       3,     4,     5,     6,    69,    75,    79,     3,     4,    70,
      77,     3,     4,    78,     3,     4,     5,     6,    69,    70,
      86,    87,    90,    91,    92,    68,    70,    49,    83,    79,
       3,    86,    86,    86,    86,    86,    91,    91,    91,    91,
      91,    91,    91,    91,    50,    57,    71,    72,    73,    50,
      51,    50,    55,    50,    50,    55,    55,    50,    67,    84,
      62,    50,    91,     3,     5,    79,    78,     3,     5,     6,
      70,    90,     3,    50,    55,    57,    52,    52,    84,    29,
      48,    68,    89,    68,    68,    28,    29,    31,    45,    47,
      48,    50,     3,    87,    87,    87,    87,    94
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    65,    65,    66,    67,    67,    67,    67,    67,
      68,    68,    69,    69,    70,    70,    70,    70,    71,    71,
      72,    72,    73,    73,    74,    75,    75,    75,    75,    76,
      77,    77,    77,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    80,    81,    81,    82,    83,    83,    84,
      84,    85,    85,    85,    85,    86,    86,    86,    86,    86,
      86,    86,    87,    87,    87,    88,    88,    88,    88,    89,
      89,    89,    89,    89,    89,    89,    89,    90,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    96,    96,    97,    98,    99
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     0,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     2,     3,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     4,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     4,     4,     2,     3,     2,
       3,     1,     1,     2,     2,     1,     1,     3,     3,     3,
       3,     3,     1,     1,     1,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     2,     1,     1,     1,
       2,     2,     1,     2,     2,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     3,     9
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
#line 96 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1380 "simple-bison-code.tab.c"
    break;

  case 3: /* program: %empty  */
#line 97 "simple-bison-code.y"
                                                {}
#line 1386 "simple-bison-code.tab.c"
    break;

  case 4: /* decl_var: type var  */
#line 104 "simple-bison-code.y"
                 { (yyval.sval) = strdup(yytext); }
#line 1392 "simple-bison-code.tab.c"
    break;

  case 5: /* type: SINT  */
#line 108 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1398 "simple-bison-code.tab.c"
    break;

  case 6: /* type: SFLOAT  */
#line 109 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1404 "simple-bison-code.tab.c"
    break;

  case 7: /* type: SDOUBLE  */
#line 110 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1410 "simple-bison-code.tab.c"
    break;

  case 8: /* type: SSHORT  */
#line 111 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1416 "simple-bison-code.tab.c"
    break;

  case 9: /* type: SLONG  */
#line 112 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1422 "simple-bison-code.tab.c"
    break;

  case 10: /* var: IDENTIFIER  */
#line 116 "simple-bison-code.y"
                     { (yyval.sval) = strdup(yytext); }
#line 1428 "simple-bison-code.tab.c"
    break;

  case 11: /* var: var "," var  */
#line 117 "simple-bison-code.y"
                       { (yyval.sval) = strdup(yytext); }
#line 1434 "simple-bison-code.tab.c"
    break;

  case 12: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 122 "simple-bison-code.y"
                                             { (yyval.sval) = strdup(yytext); }
#line 1440 "simple-bison-code.tab.c"
    break;

  case 13: /* pos_elem: IDENTIFIER "[" IDENTIFIER "]"  */
#line 123 "simple-bison-code.y"
                                             { (yyval.sval) = strdup(yytext); }
#line 1446 "simple-bison-code.tab.c"
    break;

  case 14: /* arr_elements: "[" "]"  */
#line 127 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1452 "simple-bison-code.tab.c"
    break;

  case 15: /* arr_elements: "[" integ "]"  */
#line 128 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1458 "simple-bison-code.tab.c"
    break;

  case 16: /* arr_elements: "[" fl "]"  */
#line 129 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1464 "simple-bison-code.tab.c"
    break;

  case 17: /* arr_elements: "[" str "]"  */
#line 130 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1470 "simple-bison-code.tab.c"
    break;

  case 18: /* integ: INTEGER  */
#line 134 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1476 "simple-bison-code.tab.c"
    break;

  case 19: /* integ: integ "," integ  */
#line 135 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1482 "simple-bison-code.tab.c"
    break;

  case 20: /* fl: FLOAT  */
#line 139 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1488 "simple-bison-code.tab.c"
    break;

  case 21: /* fl: fl "," fl  */
#line 140 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1494 "simple-bison-code.tab.c"
    break;

  case 22: /* str: STRING  */
#line 144 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1500 "simple-bison-code.tab.c"
    break;

  case 23: /* str: str "," str  */
#line 145 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1506 "simple-bison-code.tab.c"
    break;

  case 24: /* build_func: func  */
#line 150 "simple-bison-code.y"
              { (yyval.sval) = strdup(yytext); }
#line 1512 "simple-bison-code.tab.c"
    break;

  case 25: /* func: SSCAN "(" scan_params ")"  */
#line 154 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1518 "simple-bison-code.tab.c"
    break;

  case 26: /* func: SLEN "(" len_params ")"  */
#line 155 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1524 "simple-bison-code.tab.c"
    break;

  case 27: /* func: SCMP "(" cmp_params ")"  */
#line 156 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1530 "simple-bison-code.tab.c"
    break;

  case 28: /* func: SPRINT "(" print_params ")"  */
#line 157 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1536 "simple-bison-code.tab.c"
    break;

  case 29: /* scan_params: IDENTIFIER  */
#line 161 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1542 "simple-bison-code.tab.c"
    break;

  case 30: /* len_params: arr_elements  */
#line 165 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1548 "simple-bison-code.tab.c"
    break;

  case 31: /* len_params: STRING  */
#line 166 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1554 "simple-bison-code.tab.c"
    break;

  case 32: /* len_params: IDENTIFIER  */
#line 167 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1560 "simple-bison-code.tab.c"
    break;

  case 33: /* cmp_params: STRING  */
#line 171 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1566 "simple-bison-code.tab.c"
    break;

  case 34: /* cmp_params: IDENTIFIER  */
#line 172 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1572 "simple-bison-code.tab.c"
    break;

  case 35: /* cmp_params: cmp_params "," cmp_params  */
#line 173 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1578 "simple-bison-code.tab.c"
    break;

  case 36: /* print_params: STRING  */
#line 177 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1584 "simple-bison-code.tab.c"
    break;

  case 37: /* print_params: IDENTIFIER  */
#line 178 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1590 "simple-bison-code.tab.c"
    break;

  case 38: /* print_params: INTEGER  */
#line 179 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1596 "simple-bison-code.tab.c"
    break;

  case 39: /* print_params: FLOAT  */
#line 180 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1602 "simple-bison-code.tab.c"
    break;

  case 40: /* print_params: func  */
#line 181 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1608 "simple-bison-code.tab.c"
    break;

  case 41: /* print_params: pos_elem  */
#line 182 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1614 "simple-bison-code.tab.c"
    break;

  case 42: /* print_params: print_params "," print_params  */
#line 183 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1620 "simple-bison-code.tab.c"
    break;

  case 43: /* decl_func: name_func decl_statement  */
#line 188 "simple-bison-code.y"
                                 { (yyval.sval) = strdup(yytext); }
#line 1626 "simple-bison-code.tab.c"
    break;

  case 44: /* name_func: SFUNC  */
#line 192 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1632 "simple-bison-code.tab.c"
    break;

  case 45: /* name_func: name_func IDENTIFIER params NEWLINE  */
#line 193 "simple-bison-code.y"
                                                { (yyval.sval) = strdup(yytext); }
#line 1638 "simple-bison-code.tab.c"
    break;

  case 46: /* call_func: name_func "(" print_params ")"  */
#line 197 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1644 "simple-bison-code.tab.c"
    break;

  case 47: /* params: "(" ")"  */
#line 200 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1650 "simple-bison-code.tab.c"
    break;

  case 48: /* params: "(" type_params ")"  */
#line 201 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1656 "simple-bison-code.tab.c"
    break;

  case 49: /* type_params: type IDENTIFIER  */
#line 205 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1662 "simple-bison-code.tab.c"
    break;

  case 50: /* type_params: type_params "," type_params  */
#line 206 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1668 "simple-bison-code.tab.c"
    break;

  case 51: /* sign: INTEGER  */
#line 212 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1674 "simple-bison-code.tab.c"
    break;

  case 52: /* sign: FLOAT  */
#line 213 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1680 "simple-bison-code.tab.c"
    break;

  case 53: /* sign: "+" sign  */
#line 214 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1686 "simple-bison-code.tab.c"
    break;

  case 54: /* sign: "-" sign  */
#line 215 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1692 "simple-bison-code.tab.c"
    break;

  case 55: /* arithm_expr: sign  */
#line 219 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1698 "simple-bison-code.tab.c"
    break;

  case 56: /* arithm_expr: IDENTIFIER  */
#line 220 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1704 "simple-bison-code.tab.c"
    break;

  case 57: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 221 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1710 "simple-bison-code.tab.c"
    break;

  case 58: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 222 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1716 "simple-bison-code.tab.c"
    break;

  case 59: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 223 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1722 "simple-bison-code.tab.c"
    break;

  case 60: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 224 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1728 "simple-bison-code.tab.c"
    break;

  case 61: /* arithm_expr: arithm_expr "%" arithm_expr  */
#line 225 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1734 "simple-bison-code.tab.c"
    break;

  case 62: /* number: INTEGER  */
#line 229 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1740 "simple-bison-code.tab.c"
    break;

  case 63: /* number: FLOAT  */
#line 230 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1746 "simple-bison-code.tab.c"
    break;

  case 64: /* number: pos_elem  */
#line 231 "simple-bison-code.y"
                    { (yyval.sval) = strdup(yytext); }
#line 1752 "simple-bison-code.tab.c"
    break;

  case 65: /* assign: var "=" val  */
#line 237 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1758 "simple-bison-code.tab.c"
    break;

  case 66: /* assign: var "=" cmp_expr  */
#line 238 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1764 "simple-bison-code.tab.c"
    break;

  case 67: /* assign: var "=" arithm_expr  */
#line 239 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1770 "simple-bison-code.tab.c"
    break;

  case 68: /* assign: var "=" merge_arr  */
#line 240 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1776 "simple-bison-code.tab.c"
    break;

  case 69: /* oper_eq: var "++"  */
#line 244 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1782 "simple-bison-code.tab.c"
    break;

  case 70: /* oper_eq: var "--"  */
#line 245 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1788 "simple-bison-code.tab.c"
    break;

  case 71: /* oper_eq: "++" var  */
#line 246 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1794 "simple-bison-code.tab.c"
    break;

  case 72: /* oper_eq: "--" var  */
#line 247 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1800 "simple-bison-code.tab.c"
    break;

  case 73: /* oper_eq: var "+=" number  */
#line 248 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1806 "simple-bison-code.tab.c"
    break;

  case 74: /* oper_eq: var "-=" number  */
#line 249 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1812 "simple-bison-code.tab.c"
    break;

  case 75: /* oper_eq: var "*=" number  */
#line 250 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1818 "simple-bison-code.tab.c"
    break;

  case 76: /* oper_eq: var "/=" number  */
#line 251 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1824 "simple-bison-code.tab.c"
    break;

  case 77: /* val: number  */
#line 255 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1830 "simple-bison-code.tab.c"
    break;

  case 78: /* val: IDENTIFIER  */
#line 256 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1836 "simple-bison-code.tab.c"
    break;

  case 79: /* val: STRING  */
#line 257 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1842 "simple-bison-code.tab.c"
    break;

  case 80: /* val: arr_elements  */
#line 258 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1848 "simple-bison-code.tab.c"
    break;

  case 81: /* val: val "," val  */
#line 259 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1854 "simple-bison-code.tab.c"
    break;

  case 82: /* cmp_expr: INTEGER  */
#line 264 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1860 "simple-bison-code.tab.c"
    break;

  case 83: /* cmp_expr: FLOAT  */
#line 265 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1866 "simple-bison-code.tab.c"
    break;

  case 84: /* cmp_expr: IDENTIFIER  */
#line 266 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1872 "simple-bison-code.tab.c"
    break;

  case 85: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 267 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1878 "simple-bison-code.tab.c"
    break;

  case 86: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 268 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1884 "simple-bison-code.tab.c"
    break;

  case 87: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 269 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1890 "simple-bison-code.tab.c"
    break;

  case 88: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 270 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1896 "simple-bison-code.tab.c"
    break;

  case 89: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 271 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1902 "simple-bison-code.tab.c"
    break;

  case 90: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 272 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1908 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: cmp_expr "||" cmp_expr  */
#line 273 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1914 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: cmp_expr "&&" cmp_expr  */
#line 274 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1920 "simple-bison-code.tab.c"
    break;

  case 93: /* cmp_expr: "!" cmp_expr  */
#line 275 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1926 "simple-bison-code.tab.c"
    break;

  case 94: /* merge_arr: arr_elements "+" arr_elements  */
#line 280 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1932 "simple-bison-code.tab.c"
    break;

  case 95: /* decl_statements: decl_statement  */
#line 285 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 1938 "simple-bison-code.tab.c"
    break;

  case 96: /* decl_statements: decl_statements decl_statement  */
#line 286 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[-1].sval); }
#line 1944 "simple-bison-code.tab.c"
    break;

  case 97: /* decl_statement: if_statement  */
#line 290 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 1950 "simple-bison-code.tab.c"
    break;

  case 98: /* decl_statement: while_statement  */
#line 291 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση while\""; }
#line 1956 "simple-bison-code.tab.c"
    break;

  case 99: /* decl_statement: for_statement  */
#line 292 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση for\""; }
#line 1962 "simple-bison-code.tab.c"
    break;

  case 100: /* decl_statement: decl_var ";"  */
#line 293 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση μεταβλητής\""; }
#line 1968 "simple-bison-code.tab.c"
    break;

  case 101: /* decl_statement: build_func ";"  */
#line 294 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Ενσωματωμένη απλή συνάρτηση\""; }
#line 1974 "simple-bison-code.tab.c"
    break;

  case 102: /* decl_statement: decl_func  */
#line 295 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση συναρτήσεων χρήστη\""; }
#line 1980 "simple-bison-code.tab.c"
    break;

  case 103: /* decl_statement: call_func ";"  */
#line 296 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Κλήση συναρτήσεων χρήστη\""; }
#line 1986 "simple-bison-code.tab.c"
    break;

  case 104: /* decl_statement: assign ";"  */
#line 297 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Ανάθεση τιμής σε μεταβλητή\""; }
#line 1992 "simple-bison-code.tab.c"
    break;

  case 105: /* decl_statement: arithm_expr  */
#line 298 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Αριθμητική έκφραση\""; }
#line 1998 "simple-bison-code.tab.c"
    break;

  case 106: /* decl_statement: cmp_expr  */
#line 299 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Σύγκριση\""; }
#line 2004 "simple-bison-code.tab.c"
    break;

  case 107: /* decl_statement: merge_arr  */
#line 300 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Συνένωση πινάκων\""; }
#line 2010 "simple-bison-code.tab.c"
    break;

  case 108: /* decl_statement: block_statement  */
#line 301 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 2016 "simple-bison-code.tab.c"
    break;

  case 109: /* decl_statement: NEWLINE  */
#line 302 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 2022 "simple-bison-code.tab.c"
    break;

  case 110: /* if_statement: SIF condition decl_statement  */
#line 307 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 2028 "simple-bison-code.tab.c"
    break;

  case 111: /* condition: cmp_expr  */
#line 311 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2034 "simple-bison-code.tab.c"
    break;

  case 112: /* condition: "(" condition ")"  */
#line 312 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2040 "simple-bison-code.tab.c"
    break;

  case 113: /* block_statement: "{" decl_statements "}"  */
#line 316 "simple-bison-code.y"
                                {  (yyval.sval) = strdup(yytext); }
#line 2046 "simple-bison-code.tab.c"
    break;

  case 114: /* while_statement: SWHILE condition decl_statement  */
#line 321 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 2052 "simple-bison-code.tab.c"
    break;

  case 115: /* for_statement: SFOR "(" assign ";" cmp_expr ";" oper_eq ")" decl_statement  */
#line 326 "simple-bison-code.y"
                                                                    { (yyval.sval) = strdup(yytext); }
#line 2058 "simple-bison-code.tab.c"
    break;


#line 2062 "simple-bison-code.tab.c"

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

#line 329 "simple-bison-code.y"





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

	if (errflag == 0 && parse == 0)
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ     : Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\nΚΩΔΙΚΟΣ ΚΑΤΑΣΤΑΣΗΣ : %d\n", parse);
        else
		fprintf(yyout, "\nΑΡΧΕΙΟ ΕΙΣΟΔΟΥ     : Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\nΚΩΔΙΚΟΣ ΚΑΤΑΣΤΑΣΗΣ : %d\n", parse);
        
        fclose(yyin);
        fclose(yyout);

	return 0;
} 
