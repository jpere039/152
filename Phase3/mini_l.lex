%{
    #include "y.tab.h"
    int currLine = 1, currPos = 1;
%}

DIGIT            [0-9]
IDENTIFIER       [a-zA-Z](_[a-zA-Z0-9]|[a-zA-Z0-9])*
COMMENT          ##.*

%%

{COMMENT}       {currPos += yyleng;}

"program"       {currPos += yyleng; return PROGRAM;}
"beginprogram"  {currPos += yyleng; return BEGIN_PROGRAM;}
"endprogram"    {currPos += yyleng; return END_PROGRAM;}
"integer"       {currPos += yyleng; return INTEGER;}
"array"         {currPos += yyleng; return ARRAY;}
"of"            {currPos += yyleng; return OF;}
"if"            {currPos += yyleng; return IF;}
"then"          {currPos += yyleng; return THEN;}
"endif"         {currPos += yyleng; return ENDIF;}
"else"          {currPos += yyleng; return ELSE;}
"elseif"        {currPos += yyleng;return ELSEIF;}
"while"         {currPos += yyleng; return WHILE;}
"do"            {currPos += yyleng; return DO;}
"beginloop"     {currPos += yyleng; return BEGINLOOP;}
"endloop"       {currPos += yyleng; return ENDLOOP;}
"break"         {currPos += yyleng; return BREAK;}
"continue"      {currPos += yyleng; return CONTINUE;}
"exit"          {currPos += yyleng; return EXIT;}
"read"          {currPos += yyleng; return READ;}
"write"         {currPos += yyleng; return WRITE;}
"and"           {currPos += yyleng; return AND;}
"or"            {currPos += yyleng; return OR;}
"not"           {currPos += yyleng; return NOT;}
"true"          {currPos += yyleng; return TRUE;}
"false"         {currPos += yyleng; return FALSE;}

"-"             {currPos += yyleng; return SUB;}
"+"             {currPos += yyleng; return ADD;}
"*"             {currPos += yyleng; return MULT;}
"/"             {currPos += yyleng; return DIV;}
"%"             {currPos += yyleng; return MOD;}

"=="            {currPos += yyleng; return EQ;}
"<>"            {currPos += yyleng; return NEQ;}
"<"             {currPos += yyleng; return LT;}
">"             {currPos += yyleng; return GT;}
"<="            {currPos += yyleng; return LTE;}
">="            {currPos += yyleng; return GTE;}

 
{IDENTIFIER}    {currPos += yyleng; yylval.string_val = yytext; return IDENT;}
{DIGIT}+        {currPos += yyleng; yylval.int_val = atoi(yytext); return NUMBER;}


";"             {currPos += yyleng; return SEMICOLON;}
":"             {currPos += yyleng; return COLON;}
","             {currPos += yyleng; return COMMA;}
"?"             {currPos += yyleng; return QUESTION;}
"["             {currPos += yyleng; return L_BRACKET;}
"]"             {currPos += yyleng; return R_BRACKET;}
"("             {currPos += yyleng; return L_PAREN;} 
")"             {currPos += yyleng; return R_PAREN;}
":="            {currPos += yyleng; return ASSIGN;}


[ \t]+          {/* ignore spaces */ currPos += yyleng;}
"\n"            {currLine++; currPos = 1;}


"{DIGIT}{IDENTIFIER}" {printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter\n", currLine, currPos, yytext); exit(0);}
"{IDENTIFIER}_" {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n", currLine, currPos, yytext); exit(0);}

.               {printf("Error at line %d, column %d: unrecognized symbol \"%s\"\n", currLine, currPos, yytext); exit(0);}

%%
