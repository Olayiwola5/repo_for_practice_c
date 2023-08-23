#include <stdio.h>
#include <stdlib.h>

/* main - Write a program that multiplies two numbers. */
int main(int argc, char *argv[])
{
    int x, y, mul;

    if (argc < 3)
    {
        printf("Error\n");
    }
    x = atoi(argv[1]);
    y = atoi(argv[2]);

    mul = y * x;
    printf("mult of x and y is %d\n", mul);
    return 0;
}