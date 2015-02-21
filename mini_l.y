/* Mini Calculator */
/* calc.y */

%{
#define YY_NO_INPUT
#include <stdio.h>
#include <stdlib.h>
void yyerror(const char *s);
extern int currPos;
extern int currLine;
//extern char * yytext;

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
                        {printf("program -> PROGRAM IDENT SEMICOLON block END_PROGRAM\n");}
                    ;
            
block:              declaration SEMICOLON block_pm
                        {printf("block -> declaration SEMICOLON block_pm\n");}
                    ;

block_pm:           declaration SEMICOLON block_pm
                        {printf("block' -> declaration SEMICOLON block'\n");}
                    | BEGIN_PROGRAM statement SEMICOLON statement_pm
                        {printf("block' -> BEGIN_PROGRAM statement SEMICOLON statement'\n");}
                    ;
                    
statement_pm:       statement SEMICOLON statement_pm
                        {printf("statement' -> statement SEMICOLON statement'\n");}
                    | /* empty */
                        {printf("statement' -> epsilon\n");}
                    ;
                    
declaration:        IDENT declaration_pm
                        {printf("declaration -> IDENT declaration'\n");}
                    ;

declaration_pm:     COMMA IDENT declaration_pm
                        {printf("declaration' -> COMMA IDENT declaration'\n");}
                    | COLON declaration_pm_pm
                        {printf("declaration' -> COLON declaration''\n");}
                    ;
                    
declaration_pm_pm:  INTEGER
                        {printf("declaration'' -> INTEGER\n");}
                    | ARRAY L_BRACKET NUMBER R_BRACKET OF INTEGER
                        {printf("declaration'' -> ARRAY L_BRACKET NUMBER R_BRACKET OF INTEGER\n");}
                    ;
                    
statement:          var ASSIGN var_pm
                        {printf("statement -> var ASSIGN var'\n");}
                    | IF bool_exp THEN if_pm
                        {printf("statement -> IF bool_exp THEN if'\n");}
                    | WHILE bool_exp BEGINLOOP statement SEMICOLON statement_pm ENDLOOP
                        {printf("statement -> WHILE bool_exp BEGINLOOP statement SEMICOLON statement' ENDLOOP\n");}
                    | DO BEGINLOOP statement SEMICOLON statement_pm ENDLOOP WHILE bool_exp
                        {printf("statement -> DO BEGINLOOP statement SEMICOLON statement' ENDLOOP WHILE bool_exp\n");}
                    | READ var var_pm_pm
                        {printf("statement -> READ var var''\n");}
                    | WRITE var var_pm_pm
                        {printf("statement -> WRITE var var''\n");}
                    | BREAK
                        {printf("statement -> BREAK\n");}
                    | CONTINUE
                        {printf("statement -> CONTINUE\n");}
                    | EXIT
                        {printf("statement -> EXIT\n");}
                    ;

var_pm:             expression
                        {printf("var' -> expression\n");}
                    | bool_exp QUESTION expression COLON expression
                        {printf("var' -> bool_exp QUESTION expression COLON expression\n");}
                    ;
                    
var_pm_pm:          COMMA var var_pm_pm
                        {printf("var'' -> COMMA var var''\n");}
                    | /* empty */
                        {printf("var'' -> epsilon\n");}
                    ;
                    
if_pm:              statement SEMICOLON statement_pm if_pm_pm
                        {printf("if' -> statement SEMICOLON statement' if''\n");}
                    ;
                    
if_pm_pm:           ENDIF
                        {printf("if'' -> ENDIF\n");}
                    | ELSEIF bool_exp statement SEMICOLON statement_pm if_pm_pm
                        {printf("if'' -> ELSEIF bool_exp statement SEMICOLON statement' if''\n");}
                    | ELSE statement SEMICOLON statement_pm ENDIF
                        {printf("if'' -> ELSE statement SEMICOLON statement' ENDIF\n");}
                    ;
                    
bool_exp:           relation_and_exp bool_exp_pm
                        {printf("bool_exp -> relation_and_exp bool_exp'\n");}
                    ;
                    
bool_exp_pm:        OR relation_and_exp bool_exp_pm
                        {printf("bool_exp' -> OR relation_and_exp bool_exp'\n");}
                    | /* empty */
                        {printf("bool_exp' -> epsilon\n");}
                    ;
                    
relation_and_exp:   relation_exp relation_and_exp_pm
                        {printf("relation_and_exp -> relation_exp relation_and_exp'\n");}
                    ;
                    
relation_and_exp_pm:    AND relation_exp relation_and_exp_pm
                            {printf("relation_and_exp' -> AND relation_exp relation_and_exp'\n");}
                        | /* empty */
                            {printf("relation_and_exp' -> epsilon\n");}
                        ;
                        
relation_exp:       NOT relation_exp_pm
                        {printf("relation_exp -> NOT relation_exp'\n");}
                    | relation_exp_pm
                        {printf("relation_exp -> relation_exp'\n");}
                    ;
                    
relation_exp_pm:    expression comp expression
                        {printf("relation_exp' -> expression comp expression\n");}
                    | TRUE
                        {printf("relation_exp' -> TRUE\n");}
                    | FALSE
                        {printf("relation_exp' -> FALSE\n");}
                    | L_PAREN bool_exp R_PAREN
                        {printf("relation_exp' -> L_PAREN bool_exp R_PAREN\n");}
                    ;
                    
comp:               EQ
                        {printf("comp -> EQ\n");}
                    | NEQ
                        {printf("comp -> NEQ\n");}
                    | LT
                        {printf("comp -> LT\n");}
                    | GT
                        {printf("comp -> GT\n");}
                    | LTE
                        {printf("comp -> LTE\n");}
                    | GTE
                        {printf("comp -> GTE\n");}
                    ;
                    
expression:         multiplicative_exp expression_pm
                        {printf("expression -> multiplicative_exp expression'\n");}
                    ;
                    
expression_pm:      SUB multiplicative_exp expression_pm
                        {printf("expression' -> SUB multiplicative_exp expression'\n");}
                    | ADD multiplicative_exp expression_pm
                        {printf("expression' -> ADD multiplicative_exp expression'\n");}
                    | /* empty */
                        {printf("expression' -> epsilon\n");}
                    ;
                    
multiplicative_exp: term multiplicative_exp_pm
                        {printf("multiplicative_exp -> term multiplicative_exp'\n");}
                    ;
                    
multiplicative_exp_pm:  MULT term multiplicative_exp_pm
                            {printf("multiplicative_exp' -> MULT term multiplicative_exp'\n");}
                        | DIV term multiplicative_exp_pm
                            {printf("multiplicative_exp' -> DIV term multiplicative_exp'\n");}
                        | MOD term multiplicative_exp_pm
                            {printf("multiplicative_exp' -> MOD term multiplicative_exp'\n");}
                        | /* empty */
                            {printf("multiplicative_exp' -> epsilon\n");}
                        ;

term:               SUB term_pm
                        {printf("term -> SUB term'\n");}
                    | term_pm
                        {printf("term -> term'\n");}
                    ;
                    
term_pm:            var
                        {printf("term' -> var\n");}
                    | NUMBER
                        {printf("term' -> NUMBER\n");}
                    | L_PAREN expression R_PAREN
                        {printf("term' -> L_PAREN expression R_PAREN\n");}
                    ;
                    
var:                IDENT var_pm_pm_pm
                        {printf("var -> IDENT var'''\n");}
                    ;
                    
var_pm_pm_pm:       L_BRACKET expression R_BRACKET
                        {printf("var''' -> L_BRACKET expression R_BRACKET\n");}
                    | /* empty */
                        {printf("var''' -> epsilon\n");}
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