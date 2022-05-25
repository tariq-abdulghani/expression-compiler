// #include <iostream>
#include <stdio.h>
#include <string.h>
#include "my-math/my-math.h"

int main(char **args)
{
    // std::cout << "Hello, world!\n";
    puts("hello world");
    // printf(" %d + %d = %d\n", 1,2, add(1,2));
    const BUFF_SIZE = 5;
    char buffer[BUFF_SIZE];
    char first_name[BUFF_SIZE];
    char last_name[BUFF_SIZE];
    puts("please enter your first name:");
    fgets(first_name, BUFF_SIZE, stdin);

    puts("please enter your first last:");
    fgets(last_name, BUFF_SIZE, stdin);
    puts(first_name);
    puts(last_name);

    printf("len('boy') = %d", strlen("boy"));
}
