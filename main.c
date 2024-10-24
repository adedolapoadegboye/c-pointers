#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main()
{
    int x = 0;
    int y = 1;

    int *px = &x;
    int *py = &y;

    printf("%d %d %d %d\n", x, y, *px, *py);

    printf("Please enter a number: ");
    scanf("%d", px);

    printf("%d %d %d %d\n", x, y, *px, *py);

    printf("Please enter a number: ");
    scanf("%d", py);

    printf("%d %d %d %d\n", x, y, *px, *py);

    printf("%d %d", x + y, *px + *py);

    printf("\nAddress of x: %p\n", (void *)&x);
    printf("Address of y: %p\n", (void *)&y);
    printf("Address of px: %p\n", (void *)&px);
    printf("Address of py: %p\n", (void *)&py);

    printf("Size of x: %lu bytes\n", sizeof(x));
    printf("Size of y: %lu bytes\n", sizeof(y));
    printf("Size of px: %lu bytes\n", sizeof(px));
    printf("Size of py: %lu bytes\n", sizeof(py));

    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);
    printf("Value of px: %d\n", *px);
    printf("Value of py: %d\n", *py);

    return 0;
}
