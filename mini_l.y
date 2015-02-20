/* Mini Calculator */
/* calc.y */

%{
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *msg);
extern int currLine;
extern int currPos;
FILE * yyin;
%}

/* Bison Declarations */
%start PROGRAM       
%token BEGINPROGRAM  
%token ENDPROGRAM    
%token INTEGER
%token ARRAY        
%token OF           
%token IF            
%token THEN           
%token ENDIF        
%token ELSE          
%token ELSEIF        
%token WHILE         
%token DO           
%token BEGINLOOP     
%token ENDLOOP       
%token BREAK         
%token CONTINUE      
%token EXIT          
%token READ          
%token WRITE          
%token AND           
%token OR            
%token NOT           
%token TRUE          
%token FALSE    
%token SUB
%token ADD
%token MULT
%token DIV
%token MOD
%token EQ
%token NEQ
%token LT
%token GT
%token LTE
%token GTE
%token SEMICOLON
%token COLON
%token COMMA
%token QUESTION
%token L_BRACKET
%token R_BRACKET
%token L_PAREN
%token R_PAREN
%token ASSIGN
     
%token  <int_val> NUMBER
%token  <string_val> IDENT


%%

PROGRAM:            PROGRAM IDENT SEMICOLON BLOCK ENDPROGRAM
                    ;
            
BLOCK:              declaration SEMICOLON declaration_pm BEGINPROGRAM statement SEMICOLON statement_pm
                    ;

declaration_pm:     /* empty */
                    | declaration SEMICOLON
                    ;

statement_pm:       /* empty */
                    | statement SEMICOLON
                    ;

declaration:        IDENT IDENT_pm COLON ARRAY_pm INTEGER
                    ;

IDENT_pm:              /* empty */
                    |COMMA IDENT IDENT_pm
                    ;
                    
ARRAY_pm:           /* empty */
                    | ARRAY L_BRACKET NUMBER R_BRACKET OF
                    ;

statement:          var ASSIGN expression
                    | var ASSIGN bool_exp QUESTION expression COLON expression
                    | IF bool_exp THEN statement SEMICOLON ELSEIF_pm ELSE_pm statement_pm ENDIF
                    | WHILE bool_exp BEGINLOOP statement SEMICOLON statement_pm ENDLOOP
                    | DO BEGINLOOP statement SEMICOLON statement_pm ENDLOOP WHILE bool_exp
                    | READ var var_pm
                    | WRITE var var_pm
                    | BREAK 
                    | CONTINUE
                    | EXIT
                    ;

ELSEIF_pm:          /* empty */
                    | ELSEIF bool_exp statement SEMICOLON statement_pm ELSEIF_pm
                    | ELSE_pm
                    ;

ELSE_pm:            ELSE statement SEMICOLON statement_pm
                    ;

var_pm:             /* empty */
                    |COMMA var var_pm
                    ;
                    
bool_exp:           relation_and_exp relation_and_exp_pm
                    ;

relation_and_exp_pm:        /* empty */
                            | OR relation_and_exp relation_and_exp_pm
                            ;
                            
relation_and_exp:       relation_exp relation_exp_pm
                        ;
                        
relation_exp_pm:        /* empty */
                        | AND relation_exp relation_exp_pm
                        ;
                        
relation_exp:       not_pm expression comp expression
                    | not_pm TRUE
                    | not_pm FALSE
                    | L_PAREN bool_exp R_PAREN
                    ;
                    
not_pm:             /* empty */
                    | NOT
            
comp:               EQ
                    | NEQ
                    | LT
                    | GT
                    | LTE
                    | GTE
                    ;
            
expression:         multiplicative_exp plus_pm minus_pm
                    ;
                
plus_pm:            /* empty */
                    | ADD multiplicative_exp plus_pm minus_pm
                    ;
                
minus_pm:           /* empty */
                    | SUB multiplicative_exp plus_pm minus_pm
                    ;
                
multiplicative_exp:     term asterisk_pm slash_pm percent_pm
                        ;
                        
asterisk_pm:        /* empty */
                    | MULT term asterisk_pm slash_pm percent_pm
                    ;
                    
slash_pm:           /* empty */
                    | DIV term asterisk_pm slash_pm percent_pm
                    ;
                
percent_pm:          /* empty */
                    | MOD term asterisk_pm slash_pm percent_pm
                    ;
                
term:               minus_pm_pm var
                    | minus_pm_pm NUMBER
                    | minus_pm_pm L_PAREN expression R_PAREN
                    ;
            
minus_pm_pm:        /* empty */
                    | SUB 
                    ;
             
var:                IDENT 
                    | IDENT L_BRACKET expression R_BRACKET
                    ;

%%
