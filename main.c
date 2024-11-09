#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *filer = NULL;

    filer = fopen("file.txt", "r");
    if (filer != NULL)
    {
        printf("\nFile successfully opened!\n");

        int reader;
        int counter = 0;
        while ((reader = fgetc(filer)) != EOF)
        {

            printf("Character --> %c\n", reader);
            if (reader == 10)
            {
                counter++;
            }
        }
        rewind(filer);
        printf("\nThe number of lines in the file is %i\n", counter);
        fclose(filer);
        filer = NULL;
        return counter;
    }
    else
    {
        printf("File not found!");
        perror("Error in opening file");
        return -1;
    }
}
