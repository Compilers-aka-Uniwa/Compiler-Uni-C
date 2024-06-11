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
  YYSYMBOL_66_1 = 66,                      /* $@1  */
  YYSYMBOL_src_code = 67,                  /* src_code  */
  YYSYMBOL_logical_line = 68,              /* logical_line  */
  YYSYMBOL_decl_var = 69,                  /* decl_var  */
  YYSYMBOL_type = 70,                      /* type  */
  YYSYMBOL_var = 71,                       /* var  */
  YYSYMBOL_pos_elem = 72,                  /* pos_elem  */
  YYSYMBOL_arr_elements = 73,              /* arr_elements  */
  YYSYMBOL_integ = 74,                     /* integ  */
  YYSYMBOL_fl = 75,                        /* fl  */
  YYSYMBOL_str = 76,                       /* str  */
  YYSYMBOL_build_func = 77,                /* build_func  */
  YYSYMBOL_func = 78,                      /* func  */
  YYSYMBOL_scan_params = 79,               /* scan_params  */
  YYSYMBOL_len_params = 80,                /* len_params  */
  YYSYMBOL_cmp_params = 81,                /* cmp_params  */
  YYSYMBOL_print_params = 82,              /* print_params  */
  YYSYMBOL_decl_func = 83,                 /* decl_func  */
  YYSYMBOL_name_func = 84,                 /* name_func  */
  YYSYMBOL_params = 85,                    /* params  */
  YYSYMBOL_type_params = 86,               /* type_params  */
  YYSYMBOL_code = 87,                      /* code  */
  YYSYMBOL_decl_ops = 88,                  /* decl_ops  */
  YYSYMBOL_sign = 89,                      /* sign  */
  YYSYMBOL_arithm_expr = 90,               /* arithm_expr  */
  YYSYMBOL_changing_val = 91,              /* changing_val  */
  YYSYMBOL_assign = 92,                    /* assign  */
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
#define YYLAST   387

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  112
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  201

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
       0,    97,    97,    97,   101,   103,   105,   107,   109,   111,
     116,   119,   120,   124,   128,   129,   130,   131,   132,   136,
     137,   142,   145,   146,   147,   148,   152,   153,   157,   158,
     162,   163,   168,   172,   173,   174,   175,   179,   183,   184,
     185,   189,   190,   191,   195,   196,   197,   198,   199,   200,
     201,   206,   210,   214,   215,   219,   220,   224,   225,   226,
     227,   232,   233,   234,   235,   240,   241,   242,   243,   247,
     248,   249,   250,   251,   252,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   269,   273,   274,   275,   276,   277,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   295,
     300,   301,   305,   306,   307,   308,   309,   314,   318,   319,
     323,   328,   333
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
  "NEWLINE", "UNKNOWN", "$accept", "program", "$@1", "src_code",
  "logical_line", "decl_var", "type", "var", "pos_elem", "arr_elements",
  "integ", "fl", "str", "build_func", "func", "scan_params", "len_params",
  "cmp_params", "print_params", "decl_func", "name_func", "params",
  "type_params", "code", "decl_ops", "sign", "arithm_expr", "changing_val",
  "assign", "val", "cmp_expr", "merge_arr", "decl_statements",
  "decl_statement", "if_statement", "condition", "block_statement",
  "while_statement", "for_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-99)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -99,    53,   -99,   237,   176,   189,    22,   -99,   -99,    52,
     -99,   -99,     8,   -99,    22,    97,    97,    12,   240,    14,
      50,    51,    56,    65,    74,   -99,   -99,   135,   -16,   112,
      79,    85,    81,   240,   -99,    86,   -99,    13,   -99,   332,
     -99,   300,    92,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
      22,   332,   240,   102,   135,   240,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -10,    17,    64,   -99,   -99,   -99,
     120,   -99,   151,    26,    10,    78,   -99,   -99,    19,    16,
     135,   105,   -99,   -99,   -99,   -99,   -99,    91,    91,    91,
      91,    45,    45,    45,    45,    45,    45,   -99,   -99,   100,
     109,   -99,   140,   101,    45,   -99,   -99,   163,   -99,   164,
     -99,   165,   -99,   -99,   122,   124,   -99,   -99,   -99,   -99,
     -99,   -31,   -99,   -99,   -99,   126,   -99,   -99,   -17,   -99,
     -99,   -99,   -99,   -99,   -99,    73,   -99,   -99,   -99,    84,
      84,   -99,   -99,   -99,   -99,   -99,   -99,   123,   123,   240,
     -99,   -99,   181,   -14,   -99,   177,   -99,   -99,   -99,   -99,
     182,   -99,    26,   -99,   -99,    78,   180,    16,   -99,   -99,
      92,   -99,   -99,   238,     6,   136,   -99,   -99,   129,   -99,
     -99,   -99,     6,     6,   287,   -99,   -99,   -99,   -99,     6,
     -99,     6,     6,     6,   -99,   240,   318,   318,   318,   318,
     -99
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       9,     0,     1,    70,    65,    66,     0,    16,    14,     0,
      18,    15,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,    10,    57,     0,     0,     0,
      58,     0,     0,     0,   105,    59,    69,    61,    62,    63,
      64,     0,   100,   102,   106,   103,   104,    92,    90,    91,
       0,   108,     0,     0,     0,     0,    65,    66,    67,    68,
      30,    26,    28,    22,     0,     0,     0,    60,    58,    59,
       0,   100,     0,     0,     0,     0,     2,    19,     0,     0,
       0,     0,     4,    32,     5,    51,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,   101,     0,
       0,   107,     0,     0,     0,   111,    23,     0,    24,     0,
      25,     0,   110,    37,     0,    45,    44,    46,    47,    49,
      48,     0,    40,    39,    38,     0,    42,    41,     0,     9,
      13,    87,    85,    86,    88,     0,    20,    99,    70,    71,
      72,    73,    74,    94,    93,    95,    96,    97,    98,     0,
     109,    53,     0,     0,    52,     0,    27,    29,    31,    33,
       0,    36,     0,    34,    35,     0,     0,     0,    84,    12,
       0,    55,    54,     0,     0,     0,    50,    43,    57,    89,
      56,    75,     0,     0,     0,    21,     3,    79,    78,     0,
      77,     0,     0,     0,    76,     0,    82,    83,    80,    81,
     112
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,    67,   -99,   -99,    49,    28,   -98,   -20,   -99,   -69,
      94,    90,   114,     0,   -67,   -99,   -99,    37,    41,   -99,
     -99,   -99,    40,   -99,     1,   119,    20,   194,   162,    59,
      -3,   -99,   210,   -18,   -99,    -6,   -99,   -99,   -99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,   129,    24,    25,    26,    27,    28,   119,    29,
      64,    65,    66,    68,    31,   114,   125,   128,   121,    32,
      33,   103,   153,    34,    69,    36,    37,   184,    38,   135,
      39,    40,    41,    42,    43,    52,    44,    45,    46
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    30,    35,    51,   152,   124,   120,    78,    55,   181,
     134,    51,   137,   122,   123,    85,    60,    61,    62,   161,
     131,   132,   133,    98,   162,    47,    79,    48,    49,   115,
     116,   117,   118,   164,   101,   182,   172,   105,   165,    80,
      87,   173,   106,    88,   100,   107,    89,    51,    47,    90,
      48,    49,    98,     2,   183,    53,     3,    54,     4,     5,
     136,    17,     6,    72,    63,     7,     8,    17,     9,   108,
      10,    50,   109,    11,    80,   152,   130,    12,    13,    14,
      15,   126,   127,    16,    19,    20,    21,    22,   143,   144,
     145,   146,   147,   148,   138,   120,    56,    57,   134,    73,
      74,   155,    56,    57,    17,    75,    18,   139,   140,   141,
     142,    19,    20,    21,    22,    23,   110,    89,    15,   111,
      90,    16,   -60,     3,    15,     4,     5,    16,   167,     6,
     168,   170,     7,     8,    58,    59,    76,    10,    77,    81,
      11,    82,    83,    84,    12,    13,    14,    15,    86,    99,
      16,   102,     7,     8,   113,    91,    17,    10,    92,   150,
      11,    93,   149,   154,    94,    13,    30,    35,    61,    60,
      62,    17,   159,    18,   112,   160,   163,   200,    19,    20,
      21,    22,    67,     3,   171,     4,     5,   175,   185,     6,
     151,   186,     7,     8,   178,     9,   166,    10,   169,   157,
      11,   156,   177,   176,    12,    13,    14,    15,   -90,    91,
      16,   -90,    92,   180,   -90,    93,   104,   -90,    94,   -90,
      95,   -91,   -90,    96,   -91,   158,   179,   -91,    70,     0,
     -91,    17,   -91,    18,   174,   -91,     0,     0,    19,    20,
      21,    22,    23,     3,     0,     4,     5,     0,     0,     6,
       7,     8,     7,     8,     0,    10,     0,    10,    11,     0,
      11,     0,     0,    13,    12,    13,    14,    15,     0,   -92,
      16,     0,   -92,     0,     0,   -92,     0,     0,   -92,   -19,
     -92,     0,     0,   -92,     0,     0,     0,     0,     0,     0,
       0,    17,   -19,    18,     0,     0,     0,     0,    19,    20,
      21,    22,    67,     3,     0,     4,     5,     0,     0,     6,
       0,     0,     7,     8,     0,   189,   190,    10,   191,     0,
      11,     0,     0,     0,    12,    13,    14,    15,     0,     0,
      16,     0,   192,     0,   193,   194,     0,   195,     0,     0,
       0,     0,     0,     0,     0,     0,   189,   190,     0,   191,
       0,    17,     0,    18,     0,     0,     0,     0,    19,    20,
      21,    22,    97,   192,    91,   193,   194,    92,     0,     0,
      93,     0,     0,    94,     0,    95,   187,   188,    96,     0,
       0,     0,     0,   196,     0,   197,   198,   199
};

static const yytype_int16 yycheck[] =
{
      18,     1,     1,     6,   102,    74,    73,    27,    14,     3,
      79,    14,    81,     3,     4,    33,     4,     5,     6,    50,
       4,     5,     6,    41,    55,     3,    42,     5,     6,     3,
       4,     5,     6,    50,    52,    29,    50,    55,    55,    55,
      27,    55,    52,    30,    50,    55,    33,    50,     3,    36,
       5,     6,    70,     0,    48,     3,     3,    49,     5,     6,
      80,    51,     9,    49,    52,    12,    13,    51,    15,    52,
      17,    49,    55,    20,    55,   173,    57,    24,    25,    26,
      27,     3,     4,    30,    58,    59,    60,    61,    91,    92,
      93,    94,    95,    96,     3,   162,     5,     6,   167,    49,
      49,   104,     5,     6,    51,    49,    53,    87,    88,    89,
      90,    58,    59,    60,    61,    62,    52,    33,    27,    55,
      36,    30,    57,     3,    27,     5,     6,    30,    55,     9,
      57,   149,    12,    13,    15,    16,    62,    17,     3,    27,
      20,    62,    57,    62,    24,    25,    26,    27,    62,    57,
      30,    49,    12,    13,     3,    32,    51,    17,    35,    50,
      20,    38,    62,    62,    41,    25,   166,   166,     5,     4,
       6,    51,    50,    53,    54,    51,    50,   195,    58,    59,
      60,    61,    62,     3,     3,     5,     6,     5,    52,     9,
      50,    62,    12,    13,   166,    15,   129,    17,   149,   109,
      20,   107,   165,   162,    24,    25,    26,    27,    32,    32,
      30,    35,    35,   173,    38,    38,    54,    41,    41,    43,
      43,    32,    46,    46,    35,   111,   167,    38,    18,    -1,
      41,    51,    43,    53,    57,    46,    -1,    -1,    58,    59,
      60,    61,    62,     3,    -1,     5,     6,    -1,    -1,     9,
      12,    13,    12,    13,    -1,    17,    -1,    17,    20,    -1,
      20,    -1,    -1,    25,    24,    25,    26,    27,    -1,    32,
      30,    -1,    35,    -1,    -1,    38,    -1,    -1,    41,    42,
      43,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    55,    53,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,     3,    -1,     5,     6,    -1,    -1,     9,
      -1,    -1,    12,    13,    -1,    28,    29,    17,    31,    -1,
      20,    -1,    -1,    -1,    24,    25,    26,    27,    -1,    -1,
      30,    -1,    45,    -1,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    -1,    31,
      -1,    51,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      60,    61,    62,    45,    32,    47,    48,    35,    -1,    -1,
      38,    -1,    -1,    41,    -1,    43,   182,   183,    46,    -1,
      -1,    -1,    -1,   189,    -1,   191,   192,   193
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    65,     0,     3,     5,     6,     9,    12,    13,    15,
      17,    20,    24,    25,    26,    27,    30,    51,    53,    58,
      59,    60,    61,    62,    67,    68,    69,    70,    71,    73,
      77,    78,    83,    84,    87,    88,    89,    90,    92,    94,
      95,    96,    97,    98,   100,   101,   102,     3,     5,     6,
      49,    94,    99,     3,    49,    99,     5,     6,    89,    89,
       4,     5,     6,    52,    74,    75,    76,    62,    77,    88,
      96,    97,    49,    49,    49,    49,    62,     3,    71,    42,
      55,    27,    62,    57,    62,    97,    62,    27,    30,    33,
      36,    32,    35,    38,    41,    43,    46,    62,    97,    57,
      99,    97,    49,    85,    92,    97,    52,    55,    52,    55,
      52,    55,    54,     3,    79,     3,     4,     5,     6,    72,
      78,    82,     3,     4,    73,    80,     3,     4,    81,    66,
      57,     4,     5,     6,    73,    93,    71,    73,     3,    90,
      90,    90,    90,    94,    94,    94,    94,    94,    94,    62,
      50,    50,    70,    86,    62,    94,    74,    75,    76,    50,
      51,    50,    55,    50,    50,    55,    65,    55,    57,    68,
      97,     3,    50,    55,    57,     5,    82,    81,    69,    93,
      86,     3,    29,    48,    91,    52,    62,    91,    91,    28,
      29,    31,    45,    47,    48,    50,    91,    91,    91,    91,
      97
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    64,    66,    65,    65,    65,    65,    65,    65,    65,
      67,    68,    68,    69,    70,    70,    70,    70,    70,    71,
      71,    72,    73,    73,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    78,    78,    78,    78,    79,    80,    80,
      80,    81,    81,    81,    82,    82,    82,    82,    82,    82,
      82,    83,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    88,    88,    88,    88,    89,    89,    89,    89,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    93,    93,    93,    93,    93,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    95,
      96,    96,    97,    97,    97,    97,    97,    98,    99,    99,
     100,   101,   102
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     7,     3,     3,     3,     3,     2,     0,
       1,     3,     4,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     2,     3,     3,     3,     1,     3,     1,     3,
       1,     3,     2,     4,     4,     4,     4,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     2,     4,     2,     3,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     3,     3,     3,     3,     1,     2,     2,     2,     2,
       3,     3,     3,     3,     4,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     2,     1,     1,     1,     1,     1,     3,     1,     3,
       3,     3,     8
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
  case 2: /* $@1: %empty  */
#line 97 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1366 "simple-bison-code.tab.c"
    break;

  case 3: /* program: program src_code NEWLINE $@1 program decl_var NEWLINE  */
#line 99 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-5].sval)); }
#line 1372 "simple-bison-code.tab.c"
    break;

  case 4: /* program: program build_func NEWLINE  */
#line 101 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1378 "simple-bison-code.tab.c"
    break;

  case 5: /* program: program decl_func NEWLINE  */
#line 103 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1384 "simple-bison-code.tab.c"
    break;

  case 6: /* program: program decl_ops NEWLINE  */
#line 105 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1390 "simple-bison-code.tab.c"
    break;

  case 7: /* program: program decl_statements NEWLINE  */
#line 107 "simple-bison-code.y"
                                                { fprintf(yyout, "[BISON] Line=%d, expression=%s\n\n", line-1, (yyvsp[-1].sval)); }
#line 1396 "simple-bison-code.tab.c"
    break;

  case 8: /* program: program NEWLINE  */
#line 109 "simple-bison-code.y"
                                                { }
#line 1402 "simple-bison-code.tab.c"
    break;

  case 9: /* program: %empty  */
#line 111 "simple-bison-code.y"
                                                { }
#line 1408 "simple-bison-code.tab.c"
    break;

  case 10: /* src_code: logical_line  */
#line 116 "simple-bison-code.y"
                                                        { (yyval.sval) = "\"Λογικές γραμμές\""; }
#line 1414 "simple-bison-code.tab.c"
    break;

  case 11: /* logical_line: decl_statement ";" NEWLINE  */
#line 119 "simple-bison-code.y"
                                                        { (yyval.sval) = strdup(yytext); }
#line 1420 "simple-bison-code.tab.c"
    break;

  case 12: /* logical_line: decl_statement ";" NEWLINE logical_line  */
#line 120 "simple-bison-code.y"
                                                        { (yyval.sval) = strdup(yytext); }
#line 1426 "simple-bison-code.tab.c"
    break;

  case 13: /* decl_var: type var ";"  */
#line 124 "simple-bison-code.y"
                     { (yyval.sval) = "\"Δήλωση Μεταβλητής\""; }
#line 1432 "simple-bison-code.tab.c"
    break;

  case 14: /* type: SINT  */
#line 128 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1438 "simple-bison-code.tab.c"
    break;

  case 15: /* type: SFLOAT  */
#line 129 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1444 "simple-bison-code.tab.c"
    break;

  case 16: /* type: SDOUBLE  */
#line 130 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1450 "simple-bison-code.tab.c"
    break;

  case 17: /* type: SSHORT  */
#line 131 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1456 "simple-bison-code.tab.c"
    break;

  case 18: /* type: SLONG  */
#line 132 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1462 "simple-bison-code.tab.c"
    break;

  case 19: /* var: IDENTIFIER  */
#line 136 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1468 "simple-bison-code.tab.c"
    break;

  case 20: /* var: var "," var  */
#line 137 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1474 "simple-bison-code.tab.c"
    break;

  case 21: /* pos_elem: IDENTIFIER "[" INTEGER "]"  */
#line 142 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1480 "simple-bison-code.tab.c"
    break;

  case 22: /* arr_elements: "[" "]"  */
#line 145 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1486 "simple-bison-code.tab.c"
    break;

  case 23: /* arr_elements: "[" integ "]"  */
#line 146 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1492 "simple-bison-code.tab.c"
    break;

  case 24: /* arr_elements: "[" fl "]"  */
#line 147 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1498 "simple-bison-code.tab.c"
    break;

  case 25: /* arr_elements: "[" str "]"  */
#line 148 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1504 "simple-bison-code.tab.c"
    break;

  case 26: /* integ: INTEGER  */
#line 152 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1510 "simple-bison-code.tab.c"
    break;

  case 27: /* integ: integ "," integ  */
#line 153 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1516 "simple-bison-code.tab.c"
    break;

  case 28: /* fl: FLOAT  */
#line 157 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1522 "simple-bison-code.tab.c"
    break;

  case 29: /* fl: fl "," fl  */
#line 158 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1528 "simple-bison-code.tab.c"
    break;

  case 30: /* str: STRING  */
#line 162 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1534 "simple-bison-code.tab.c"
    break;

  case 31: /* str: str "," str  */
#line 163 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1540 "simple-bison-code.tab.c"
    break;

  case 32: /* build_func: func ";"  */
#line 168 "simple-bison-code.y"
                 { (yyval.sval) = "\"Ενσωματωμένη απλή συνάρτηση\""; }
#line 1546 "simple-bison-code.tab.c"
    break;

  case 33: /* func: SSCAN "(" scan_params ")"  */
#line 172 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1552 "simple-bison-code.tab.c"
    break;

  case 34: /* func: SLEN "(" len_params ")"  */
#line 173 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1558 "simple-bison-code.tab.c"
    break;

  case 35: /* func: SCMP "(" cmp_params ")"  */
#line 174 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1564 "simple-bison-code.tab.c"
    break;

  case 36: /* func: SPRINT "(" print_params ")"  */
#line 175 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1570 "simple-bison-code.tab.c"
    break;

  case 37: /* scan_params: IDENTIFIER  */
#line 179 "simple-bison-code.y"
                         { (yyval.sval) = strdup(yytext); }
#line 1576 "simple-bison-code.tab.c"
    break;

  case 38: /* len_params: arr_elements  */
#line 183 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1582 "simple-bison-code.tab.c"
    break;

  case 39: /* len_params: STRING  */
#line 184 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1588 "simple-bison-code.tab.c"
    break;

  case 40: /* len_params: IDENTIFIER  */
#line 185 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1594 "simple-bison-code.tab.c"
    break;

  case 41: /* cmp_params: STRING  */
#line 189 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1600 "simple-bison-code.tab.c"
    break;

  case 42: /* cmp_params: IDENTIFIER  */
#line 190 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1606 "simple-bison-code.tab.c"
    break;

  case 43: /* cmp_params: cmp_params "," cmp_params  */
#line 191 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1612 "simple-bison-code.tab.c"
    break;

  case 44: /* print_params: STRING  */
#line 195 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1618 "simple-bison-code.tab.c"
    break;

  case 45: /* print_params: IDENTIFIER  */
#line 196 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1624 "simple-bison-code.tab.c"
    break;

  case 46: /* print_params: INTEGER  */
#line 197 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1630 "simple-bison-code.tab.c"
    break;

  case 47: /* print_params: FLOAT  */
#line 198 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1636 "simple-bison-code.tab.c"
    break;

  case 48: /* print_params: func  */
#line 199 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1642 "simple-bison-code.tab.c"
    break;

  case 49: /* print_params: pos_elem  */
#line 200 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1648 "simple-bison-code.tab.c"
    break;

  case 50: /* print_params: print_params "," print_params  */
#line 201 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1654 "simple-bison-code.tab.c"
    break;

  case 51: /* decl_func: name_func decl_statement  */
#line 206 "simple-bison-code.y"
                                 { (yyval.sval) = "\"Δήλωση συναρτήσεων χρήστη\""; }
#line 1660 "simple-bison-code.tab.c"
    break;

  case 52: /* name_func: SFUNC IDENTIFIER params NEWLINE  */
#line 210 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1666 "simple-bison-code.tab.c"
    break;

  case 53: /* params: "(" ")"  */
#line 214 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1672 "simple-bison-code.tab.c"
    break;

  case 54: /* params: "(" type_params ")"  */
#line 215 "simple-bison-code.y"
                                { (yyval.sval) = strdup(yytext); }
#line 1678 "simple-bison-code.tab.c"
    break;

  case 55: /* type_params: type IDENTIFIER  */
#line 219 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1684 "simple-bison-code.tab.c"
    break;

  case 56: /* type_params: type_params "," type_params  */
#line 220 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1690 "simple-bison-code.tab.c"
    break;

  case 57: /* code: decl_var  */
#line 224 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1696 "simple-bison-code.tab.c"
    break;

  case 58: /* code: build_func  */
#line 225 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1702 "simple-bison-code.tab.c"
    break;

  case 59: /* code: decl_ops  */
#line 226 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1708 "simple-bison-code.tab.c"
    break;

  case 60: /* code: NEWLINE  */
#line 227 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1714 "simple-bison-code.tab.c"
    break;

  case 61: /* decl_ops: arithm_expr  */
#line 232 "simple-bison-code.y"
                                { (yyval.sval) = "\"Αριθμητική έκφραση\""; }
#line 1720 "simple-bison-code.tab.c"
    break;

  case 62: /* decl_ops: assign  */
#line 233 "simple-bison-code.y"
                                { (yyval.sval) = "\"Ανάθεση τιμής σε μεταβλητή\""; }
#line 1726 "simple-bison-code.tab.c"
    break;

  case 63: /* decl_ops: cmp_expr  */
#line 234 "simple-bison-code.y"
                                { (yyval.sval) = "\"Σύγκριση\""; }
#line 1732 "simple-bison-code.tab.c"
    break;

  case 64: /* decl_ops: merge_arr  */
#line 235 "simple-bison-code.y"
                                { (yyval.sval) = "\"Συνένωση Πινάκων\""; }
#line 1738 "simple-bison-code.tab.c"
    break;

  case 65: /* sign: INTEGER  */
#line 240 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1744 "simple-bison-code.tab.c"
    break;

  case 66: /* sign: FLOAT  */
#line 241 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1750 "simple-bison-code.tab.c"
    break;

  case 67: /* sign: "+" sign  */
#line 242 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1756 "simple-bison-code.tab.c"
    break;

  case 68: /* sign: "-" sign  */
#line 243 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1762 "simple-bison-code.tab.c"
    break;

  case 69: /* arithm_expr: sign  */
#line 247 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1768 "simple-bison-code.tab.c"
    break;

  case 70: /* arithm_expr: IDENTIFIER  */
#line 248 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1774 "simple-bison-code.tab.c"
    break;

  case 71: /* arithm_expr: arithm_expr "+" arithm_expr  */
#line 249 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1780 "simple-bison-code.tab.c"
    break;

  case 72: /* arithm_expr: arithm_expr "-" arithm_expr  */
#line 250 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1786 "simple-bison-code.tab.c"
    break;

  case 73: /* arithm_expr: arithm_expr "*" arithm_expr  */
#line 251 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1792 "simple-bison-code.tab.c"
    break;

  case 74: /* arithm_expr: arithm_expr "/" arithm_expr  */
#line 252 "simple-bison-code.y"
                                        { (yyval.sval) = strdup(yytext); }
#line 1798 "simple-bison-code.tab.c"
    break;

  case 76: /* changing_val: changing_val "++"  */
#line 257 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1804 "simple-bison-code.tab.c"
    break;

  case 77: /* changing_val: changing_val "--"  */
#line 258 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1810 "simple-bison-code.tab.c"
    break;

  case 78: /* changing_val: "++" changing_val  */
#line 259 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1816 "simple-bison-code.tab.c"
    break;

  case 79: /* changing_val: "--" changing_val  */
#line 260 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1822 "simple-bison-code.tab.c"
    break;

  case 80: /* changing_val: changing_val "+=" changing_val  */
#line 261 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1828 "simple-bison-code.tab.c"
    break;

  case 81: /* changing_val: changing_val "-=" changing_val  */
#line 262 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1834 "simple-bison-code.tab.c"
    break;

  case 82: /* changing_val: changing_val "*=" changing_val  */
#line 263 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1840 "simple-bison-code.tab.c"
    break;

  case 83: /* changing_val: changing_val "/=" changing_val  */
#line 264 "simple-bison-code.y"
                                            { (yyval.sval) = strdup(yytext); }
#line 1846 "simple-bison-code.tab.c"
    break;

  case 84: /* assign: var "=" val ";"  */
#line 269 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1852 "simple-bison-code.tab.c"
    break;

  case 85: /* val: INTEGER  */
#line 273 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1858 "simple-bison-code.tab.c"
    break;

  case 86: /* val: FLOAT  */
#line 274 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1864 "simple-bison-code.tab.c"
    break;

  case 87: /* val: STRING  */
#line 275 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1870 "simple-bison-code.tab.c"
    break;

  case 88: /* val: arr_elements  */
#line 276 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1876 "simple-bison-code.tab.c"
    break;

  case 89: /* val: val "," val  */
#line 277 "simple-bison-code.y"
                        { (yyval.sval) = strdup(yytext); }
#line 1882 "simple-bison-code.tab.c"
    break;

  case 90: /* cmp_expr: INTEGER  */
#line 282 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1888 "simple-bison-code.tab.c"
    break;

  case 91: /* cmp_expr: FLOAT  */
#line 283 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1894 "simple-bison-code.tab.c"
    break;

  case 92: /* cmp_expr: IDENTIFIER  */
#line 284 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1900 "simple-bison-code.tab.c"
    break;

  case 93: /* cmp_expr: cmp_expr ">" cmp_expr  */
#line 285 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1906 "simple-bison-code.tab.c"
    break;

  case 94: /* cmp_expr: cmp_expr "<" cmp_expr  */
#line 286 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1912 "simple-bison-code.tab.c"
    break;

  case 95: /* cmp_expr: cmp_expr "<=" cmp_expr  */
#line 287 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1918 "simple-bison-code.tab.c"
    break;

  case 96: /* cmp_expr: cmp_expr ">=" cmp_expr  */
#line 288 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1924 "simple-bison-code.tab.c"
    break;

  case 97: /* cmp_expr: cmp_expr "==" cmp_expr  */
#line 289 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1930 "simple-bison-code.tab.c"
    break;

  case 98: /* cmp_expr: cmp_expr "!=" cmp_expr  */
#line 290 "simple-bison-code.y"
                                  { (yyval.sval) = strdup(yytext); }
#line 1936 "simple-bison-code.tab.c"
    break;

  case 99: /* merge_arr: arr_elements "+" arr_elements  */
#line 295 "simple-bison-code.y"
                                      { (yyval.sval) = strdup(yytext); }
#line 1942 "simple-bison-code.tab.c"
    break;

  case 100: /* decl_statements: decl_statement  */
#line 300 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[0].sval); }
#line 1948 "simple-bison-code.tab.c"
    break;

  case 101: /* decl_statements: decl_statements decl_statement  */
#line 301 "simple-bison-code.y"
                                         { (yyval.sval) = (yyvsp[-1].sval); }
#line 1954 "simple-bison-code.tab.c"
    break;

  case 102: /* decl_statement: if_statement  */
#line 305 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 1960 "simple-bison-code.tab.c"
    break;

  case 103: /* decl_statement: while_statement  */
#line 306 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση while\""; }
#line 1966 "simple-bison-code.tab.c"
    break;

  case 104: /* decl_statement: for_statement  */
#line 307 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση for\""; }
#line 1972 "simple-bison-code.tab.c"
    break;

  case 105: /* decl_statement: code  */
#line 308 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1978 "simple-bison-code.tab.c"
    break;

  case 106: /* decl_statement: block_statement  */
#line 309 "simple-bison-code.y"
                                         { (yyval.sval) = strdup(yytext); }
#line 1984 "simple-bison-code.tab.c"
    break;

  case 107: /* if_statement: SIF condition decl_statement  */
#line 314 "simple-bison-code.y"
                                         { (yyval.sval) = "\"Δήλωση if\""; }
#line 1990 "simple-bison-code.tab.c"
    break;

  case 108: /* condition: cmp_expr  */
#line 318 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 1996 "simple-bison-code.tab.c"
    break;

  case 109: /* condition: "(" condition ")"  */
#line 319 "simple-bison-code.y"
                            { (yyval.sval) = strdup(yytext); }
#line 2002 "simple-bison-code.tab.c"
    break;

  case 110: /* block_statement: "{" decl_statements "}"  */
#line 323 "simple-bison-code.y"
                                {  (yyval.sval) = strdup(yytext); }
#line 2008 "simple-bison-code.tab.c"
    break;

  case 111: /* while_statement: SWHILE condition decl_statement  */
#line 328 "simple-bison-code.y"
                                        { (yyval.sval) = "\"Δήλωση while\""; }
#line 2014 "simple-bison-code.tab.c"
    break;

  case 112: /* for_statement: SFOR "(" assign cmp_expr ";" changing_val ")" decl_statement  */
#line 333 "simple-bison-code.y"
                                                                    { (yyval.sval) = "\"Δήλωση for\""; }
#line 2020 "simple-bison-code.tab.c"
    break;


#line 2024 "simple-bison-code.tab.c"

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

#line 336 "simple-bison-code.y"





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
		fprintf(yyout, "\n[%d] ΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΕΠΙΤΥΧΘΗΚΕ.\n", parse);
        else
		fprintf(yyout, "\n[%d] ΑΡΧΕΙΟ ΕΙΣΟΔΟΥ: Η ΑΝΑΛΥΣΗ ΑΠΕΤΥΧΕ.\n", parse);
        
        fclose(yyin);
        fclose(yyout);

	return 0;
} 
