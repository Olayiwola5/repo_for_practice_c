#include <stdio.h>

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }
int mol(int a, int b) { return a % b; }

int main(void)
{
    int (*fun[])(int a, int b) = {add, mul, mol};
    int x, y, c;
    scanf("%d %d %d", &x, &y, &c);

    printf("%d\n", (*fun[c])(x, y));
    return 0;
}