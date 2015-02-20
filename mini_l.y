/* Mini Calculator */
/* calc.y */

%{
C Declarations
%}

/* Bison Declarations */
%token PROGRAM       
       BEGINPROGRAM  
       ENDPROGRAM    
       INTEGER
       IDENT
       NUMBER
       ARRAY        
       OF           
       IF            
       THEN           
       ENDIF        
       ELSE          
       ELSEIF        
       WHILE         
       DO           
       BEGINLOOP     
       ENDLOOP       
       BREAK         
       CONTINUE      
       EXIT          
       READ          
       WRITE          
       AND           
       OR            
       NOT           
       TRUE          
       FALSE  
       /* A change */
     
%type  <int_val> num
%type  <string_val> id


%%

PROGRAM:            PROGRAM id ';' block endprogram
                    ;
            
block:              declaration ';' declaration_pm beginprogram statement ';' statement_pm
                    ;

declaration_pm:     /* empty */
                    | declaration ';'
                    ;

statement_pm:       /* empty */
                    | statement ';'
                    ;

declaration:        id id_pm ':' array_pm int
                    ;

id_pm:              /* empty */
                    |',' id id_pm
                    ;
                    
array_pm:           /* empty */
                    | array '[' num ']' of
                    ;

statement:          var ':' '=' exp
                    | var ':' '=' bool_exp '?' exp ':' exp
                    | if bool_exp then statement ';' elseif_pm else_pm statement_pm endif
                    | while bool_exp beginloop statement ';' statement_pm endloop
                    | do beginloop statement ';' statement_pm endloop while bool_exp
                    | read var var_pm
                    | write var var_pm
                    | break 
                    | continue
                    | exit
                    ;

elseif_pm:          /* empty */
                    | elseif bool_exp statement ';' statement_pm elseif_pm
                    | else_pm
                    ;

else_pm:            else statement ';' statement_pm
                    ;

var_pm:             /* empty */
                    |',' var var_pm
                    ;
                    
bool_exp:           relation_and_exp relation_and_exp_pm
                    ;

relation_and_exp_pm:        /* empty */
                            | or relation_and_exp relation_and_exp_pm
                            ;
                            
relation_and_exp:       relation_exp relation_exp_pm
                        ;
                        
relation_exp_pm:        /* empty */
                        | and relation_exp relation_exp_pm
                        ;
                        
relation_exp:       not_pm expression comp expression
                    | not_pm true
                    | not_pm false
                    | '(' bool_exp ')'
                    ;
                    
not_pm:             /* empty */
                    | not
            
comp:               '=='
                    | '<>'
                    | '<'
                    | '>'
                    | '<='
                    | '>='
                    ;
            
expression:         multiplicative_exp plus_pm minus_pm
                    ;
                
plus_pm:            /* empty */
                    | '+' multiplicative_exp plus_pm minus_pm
                    ;
                
minus_pm:           /* empty */
                    | '-' multiplicative_exp plus_pm minus_pm
                    ;
                
multiplicative_exp:     term asterisk_pm slash_pm percent_pm
                        ;
                        
asterisk_pm:        /* empty */
                    | '*' term asterisk_pm slash_pm percent_pm
                    ;
                    
slash_pm:           /* empty */
                    | '/' term asterisk_pm slash_pm percent_pm
                    ;
                
percent_pm          /* empty */
                    | '%' term asterisk_pm slash_pm percent_pm
                    ;
                
term:               minus_pm_pm var
                    | minus_pm_pm number
                    | minus_pm_pm '(' exp ')'
                    ;
            
minus_pm_pm:        /* empty */
                    | '-' 
                    ;
             
var:                id 
                    | id '[' exp ']'
                    ;

%%
