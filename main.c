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

    return 0;
}
