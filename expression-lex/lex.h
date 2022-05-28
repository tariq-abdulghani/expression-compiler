typedef enum token_enum
{
    EOI,
    SEMI,
    PLUS,
    TIMES,
    LP,
    RP,
    NUM_OR_ID,
} Token;

// extern char *yytext;
// extern int yyleng;
// extern int yylineno;

int lex();
char *stringify_token(int val);
