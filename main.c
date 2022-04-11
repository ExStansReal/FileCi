#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <locale.h>
 
#define SIZE 1024

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * file;
    char path[100];

    char ch;
    int characters, words, lines;
    printf("Enter source file path: ");
    scanf("%s", path);
    file = fopen(path, "r");
    if (file == NULL)   
    {
        printf("\nSomething is wrong with file, sorry.\n");
        exit(EXIT_FAILURE);
    }
    characters = words = lines = 0;
    while ((ch = fgetc(file)) != EOF)   
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
         if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
             words++;
    }
    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("\n");
    printf("Words count = %d\n", words--);
    printf("Lines count = %d\n", lines--);
    fclose(file);
    scanf("%s",&characters);
    return 0;
}



