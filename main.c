#include <stdio.h>
#include <stdlib.h>

void print_initial_values(int x, int y, int *px, int *py)
{
    printf("Initial values:\n");
    printf("x = %d, y = %d, *px = %d, *py = %d\n", x, y, *px, *py);
}

void print_current_values(int x, int y, int *px, int *py)
{
    printf("Current values: x = %d, y = %d, *px = %d, *py = %d\n", x, y, *px, *py);
}

void print_memory_info(int *px, int *py, int x, int y)
{
    printf("Addresses:\n");
    printf("Address of x: %16p\n", (void *)&x);
    printf("Address of y: %16p\n", (void *)&y);
    printf("Address of px: %16p\n", (void *)&px);
    printf("Address of py: %16p\n", (void *)&py);
}

void print_size_info(int x, int y, int *px, int *py)
{
    printf("Sizes:\n");
    printf("Size of x: %lu bytes\n", sizeof(x));
    printf("Size of y: %lu bytes\n", sizeof(y));
    printf("Size of px: %lu bytes\n", sizeof(px));
    printf("Size of py: %lu bytes\n", sizeof(py));
}

int main()
{
    int x = 0, y = 1;
    int *px = &x, *py = &y;
    const int *ppx = px; // Pointer to pointer to x. Value of x can not be changed using this pointer
    int const *ppy = py; // Pointer to pointer to y. Address pointed to (py) can not be changed using this pointer

    // *ppx = 10; // Expects compiler error
    int z = 10;
    ppy = &z; // Expects compiler error

    print_initial_values(x, y, px, py);

    printf("Enter a number for x: ");
    scanf("%d", px); // Store user input in x via pointer px

    printf("Enter a number for y: ");
    scanf("%d", py); // Store user input in y via pointer py

    print_current_values(x, y, px, py);
    printf("Sum of x + y = %d\n", x + y);
    printf("Sum of *px + *py = %d\n", *px + *py);

    print_memory_info(px, py, x, y);
    print_size_info(x, y, px, py);

    printf("%i\n", ppy);

    return 0;
}
