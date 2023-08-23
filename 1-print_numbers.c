#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator b/w the numbers
 * Return: Always 0.
 */
 void print_numbers(const char *separator, const unsigned int n, ...)
 {
     va_list mynums;

     va_start(mynums, n);
     for (size_t i = 0; i < n; i++)
     {
         printf("%d", va_arg(mynums, int));
         if (separator != NULL && i < n - 1)
             printf("%s", separator);
     }
     va_end(mynums);
  }
 int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}