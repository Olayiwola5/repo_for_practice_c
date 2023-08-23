#include <stdio.h>
#include <stdlib.h>

/*ain - Write a program that adds positive numbers. */
int main(int argc, char **argv)
{
    int i, sum;

    sum = 0;
    for (i = 0; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("the sum of args is %d\n", sum);

    return 0;
}