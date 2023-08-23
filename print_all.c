#include <stdio.h>
/* a program that prints its arguments*/
int main(int argc, char *argv[])
{
    int count;
    for (count = 1; count < argc; count++)
    {
        printf("%s", argv[count]);

    }
     putchar('\n');
     return 0;
}