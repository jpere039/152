/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    PROGRAM = 258,
    BEGIN_PROGRAM = 259,
    END_PROGRAM = 260,
    INTEGER = 261,
    ARRAY = 262,
    OF = 263,
    IF = 264,
    THEN = 265,
    ENDIF = 266,
    ELSE = 267,
    ELSEIF = 268,
    WHILE = 269,
    DO = 270,
    BEGINLOOP = 271,
    ENDLOOP = 272,
    BREAK = 273,
    CONTINUE = 274,
    EXIT = 275,
    READ = 276,
    WRITE = 277,
    AND = 278,
    OR = 279,
    NOT = 280,
    TRUE = 281,
    FALSE = 282,
    SUB = 283,
    ADD = 284,
    MULT = 285,
    DIV = 286,
    MOD = 287,
    EQ = 288,
    NEQ = 289,
    LT = 290,
    GT = 291,
    LTE = 292,
    GTE = 293,
    SEMICOLON = 294,
    COLON = 295,
    COMMA = 296,
    QUESTION = 297,
    L_BRACKET = 298,
    R_BRACKET = 299,
    L_PAREN = 300,
    R_PAREN = 301,
    ASSIGN = 302,
    NUMBER = 303,
    IDENT = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 19 "mini_l.y" /* yacc.c:1909  */

    int int_val;
    char* string_val;

#line 109 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
