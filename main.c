#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Enter a string (max 99 characters): ");
    scanf("%99s", string); // Prevent buffer overflow

    printf("\nYou entered: %s\n", string);

    char *text = NULL;
    unsigned long var = 0;

    printf("Enter a word length (max 99): ");
    scanf("%lu", &var);

    if (var >= 100)
    {
        printf("Word length too large. Limit to 99.\n");
        return 1;
    }

    text = (char *)malloc((var + 1) * sizeof(char)); // +1 for the null terminator

    if (!text)
    {
        printf("Memory not allocated.\n");
        return 1;
    }

    printf("Enter the word: ");
    scanf("%99s", text); // Limit input size

    printf("The word is: %s\n", text);

    free(text); // Free allocated memory
    return 0;
}
