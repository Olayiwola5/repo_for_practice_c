#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
    unsigned int i;
    int sum;
    va_list mynums;
    if (n <= 0 )
        return 0;
    sum = 0;
    va_start(mynums, n);
    for (i = 0; i < n; i++)
    {
        sum += va_arg(mynums, int);
    }
        return sum;
}
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
