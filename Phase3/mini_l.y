/* Mini Calculator */
/* calc.y */

%{
#define YY_NO_INPUT
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *s);
extern int currPos;
extern int currLine;
extern char * yytext;

%}

/* Bison Declarations */

%error-verbose

%union{
    int int_val;
    char* string_val;
}

%start program

%token <string_val> PROGRAM
%token <string_val> BEGIN_PROGRAM  
%token <string_val> END_PROGRAM    
%token <string_val> INTEGER
%token <string_val> ARRAY        
%token <string_val> OF           
%token <string_val> IF          
%token <string_val> THEN       
%token <string_val> ENDIF        
%token <string_val> ELSE          
%token <string_val> ELSEIF        
%token <string_val> WHILE         
%token <string_val> DO           
%token <string_val> BEGINLOOP     
%token <string_val> ENDLOOP       
%token <string_val> BREAK         
%token <string_val> CONTINUE      
%token <string_val> EXIT          
%token <string_val> READ          
%token <string_val> WRITE          
%token <string_val> AND           
%token <string_val> OR            
%token <string_val> NOT           
%token <string_val> TRUE          
%token <string_val> FALSE    
%token <string_val> SUB
%token <string_val> ADD
%token <string_val> MULT
%token <string_val> DIV
%token <string_val> MOD
%token <string_val> EQ
%token <string_val> NEQ
%token <string_val> LT
%token <string_val> GT
%token <string_val> LTE
%token <string_val> GTE
%token <string_val> SEMICOLON
%token <string_val> COLON
%token <string_val> COMMA
%token <string_val> QUESTION
%token <string_val> L_BRACKET
%token <string_val> R_BRACKET
%token <string_val> L_PAREN
%token <string_val> R_PAREN
%token <string_val> ASSIGN
     
%token <int_val> NUMBER
%token <string_val> IDENT

%left PROGRAM
%left BEGIN_PROGRAM  
%left END_PROGRAM    
%left INTEGER
%left ARRAY        
%left OF           
%left IF            
%left THEN           
%left ENDIF        
%left ELSE          
%left ELSEIF        
%left WHILE         
%left DO           
%left BEGINLOOP     
%left ENDLOOP       
%left BREAK         
%left CONTINUE      
%left EXIT          
%left READ          
%left WRITE          
%left AND           
%left OR            
%left NOT           
%left TRUE          
%left FALSE    
%left SUB
%left ADD
%left MULT
%left DIV
%left MOD
%left EQ
%left NEQ
%left LT
%left GT
%left LTE
%left GTE
%left SEMICOLON
%left COLON
%left COMMA
%left QUESTION
%left L_BRACKET
%left R_BRACKET
%left L_PAREN
%left R_PAREN
%left ASSIGN

%%

program:            PROGRAM IDENT SEMICOLON block END_PROGRAM 
                    ;
            
block:              declaration SEMICOLON block_pm
                    ;

block_pm:           declaration SEMICOLON block_pm
                    | BEGIN_PROGRAM statement SEMICOLON statement_pm
                    ;
                    
statement_pm:       statement SEMICOLON statement_pm
                    | /* empty */
                    ;
                    
declaration:        IDENT declaration_pm
  
                    ;

declaration_pm:     COMMA IDENT declaration_pm
                    | COLON declaration_pm_pm
                    ;
                    
declaration_pm_pm:  INTEGER
                        {printf(". _%s\n",yytext - 4);}
                    | ARRAY L_BRACKET NUMBER R_BRACKET OF INTEGER
                    ;
                    
statement:          var ASSIGN var_pm
                    | IF bool_exp THEN if_pm
                    | WHILE bool_exp BEGINLOOP statement SEMICOLON statement_pm ENDLOOP
                    | DO BEGINLOOP statement SEMICOLON statement_pm ENDLOOP WHILE bool_exp
                    | READ var var_pm_pm
                    | WRITE var var_pm_pm
                    | BREAK
                    | CONTINUE
                    | EXIT
                    ;

var_pm:             expression
                    | bool_exp QUESTION expression COLON expression
                    ;
                    
var_pm_pm:          COMMA var var_pm_pm
                    | /* empty */
                    ;
                    
if_pm:              statement SEMICOLON statement_pm if_pm_pm
                    ;
                    
if_pm_pm:           ENDIF
                    | ELSEIF bool_exp statement SEMICOLON statement_pm if_pm_pm
                    | ELSE statement SEMICOLON statement_pm ENDIF
                    ;
                    
bool_exp:           relation_and_exp bool_exp_pm
                    ;
                    
bool_exp_pm:        OR relation_and_exp bool_exp_pm
                    | /* empty */
                    ;
                    
relation_and_exp:   relation_exp relation_and_exp_pm
                    ;
                    
relation_and_exp_pm:    AND relation_exp relation_and_exp_pm
                        | /* empty */
                        ;
                        
relation_exp:       NOT relation_exp_pm
                    | relation_exp_pm
                    ;
                    
relation_exp_pm:    expression comp expression
                    | TRUE
                    | FALSE
                    | L_PAREN bool_exp R_PAREN
                    ;
                    
comp:               EQ
                    | NEQ
                    | LT
                    | GT
                    | LTE
                    | GTE
                    ;
                    
expression:         multiplicative_exp expression_pm
                    ;
                    
expression_pm:      SUB multiplicative_exp expression_pm
                    | ADD multiplicative_exp expression_pm
                    | /* empty */
                    ;
                    
multiplicative_exp: term multiplicative_exp_pm
                    ;
                    
multiplicative_exp_pm:  MULT term multiplicative_exp_pm
                        | DIV term multiplicative_exp_pm
                        | MOD term multiplicative_exp_pm
                        | /* empty */
                        ;

term:               SUB term_pm
                    | term_pm
                    ;
                    
term_pm:            var
                    | NUMBER
                    | L_PAREN expression R_PAREN
                    ;
                    
var:                IDENT var_pm_pm_pm
                    ;
                    
var_pm_pm_pm:       L_BRACKET expression R_BRACKET
                    | /* empty */
                    ;

%%

void yyerror(const char * s)
{
  //extern int yylineno;	// defined and maintained in lex.c
  //extern char *yytext;	// defined and maintained in lex.c
  
  //cerr << "ERROR: " << s << " at symbol \"" << yytext;
  //cerr << "\" on line " << yylineno << endl;
  //exit(1);
  
  printf("ERROR Line %d: %s\n", currLine, s);
}

int main(int argc, char **argv)
{
    yyparse();
    
    return 0;
}