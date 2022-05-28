#include <stdio.h>
#include "my-files.h"

void read_file()
{
    FILE *file = fopen("/home/tariq/Desktop/c-reciew/hello-world/files/file.txt", "r");
    char line[LINE_SIZE];

    if (file != 0)
    {
        while (fgets(line, LINE_SIZE, file) != 0)
        {
            puts(line);
        }

        fclose(file);
    }
    else
    {
        puts("file cant be found");
    }
}