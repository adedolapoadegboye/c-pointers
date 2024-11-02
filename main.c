#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

size_t stringLength(const char *str)
{
    size_t length = 0;
    while (str[length] != '\0')
    {
        printf("\n%c -----> %zu", str[length], length); // Use %zu for size_t
        length++;
    }
    return length;
}

size_t stringLength2(const char *str)
{
    const char *start = str; // Save the starting pointer
    printf("\n%p", (void *)start);
    const char *end = NULL; // Initialize the end pointer
    while (*str != '\0')    // Check the character, not the pointer
    {
        printf("\n%c -----> %p -----> %zu", *str, (void *)end, sizeof(end));
        end = ++str;
    }
    printf("\n%p", (void *)end);
    return end - start; // Returns as size_t
}

int main()
{
    char string[100];
    char *pstring = &string[0];

    printf("Enter a string: ");
    scanf("%99s", pstring); // Limit input to prevent overflow

    printf("\nThe length of %s is %zu\n", pstring, stringLength(pstring));  // Use %zu
    printf("\nThe length of %s is %zu\n", pstring, stringLength2(pstring)); // Use %zu
    return 0;
}
