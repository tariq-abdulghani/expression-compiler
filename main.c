#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "expression-lex/lex.h"

int main(char **args)
{
    puts("simple expression compiler v0.0.0\n");

    int token = lex();
    // char *token_str = stringify_token(token);
    // printf("token: %d %s\n", token, token_str);

    // for (size_t i = 0; i < 5; i++)
    // {
    //     char *token_str = stringify_token(token);
    //     printf("token: %d %s\n", token, token_str);
    //     token = lex();
    // }

    while (token != SEMI)
    {
        // token_str = stringify_token(token);
        char *token_str = stringify_token(token);
        printf("token: %d %s\n", token, token_str);
        token = lex();
    }

    return EXIT_SUCCESS;
}

//  read_file();

/**

  // printf(" %d + %d = %d\n", 1,2, add(1,2));
    // const BUFF_SIZE = 5;
    // char buffer[BUFF_SIZE];
    // char first_name[BUFF_SIZE];
    // char last_name[BUFF_SIZE];
    // puts("please enter your first name:");
    // fgets(first_name, BUFF_SIZE, stdin);

    // puts("please enter your first last:");
    // fgets(last_name, BUFF_SIZE, stdin);
    // puts(first_name);
    // puts(last_name);

    // printf("len('boy') = %d", strlen("boy"));
 */