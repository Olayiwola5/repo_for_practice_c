#include <stdio.h>
#include <stdlib.h>

/*create_array - Write a function that creates an array of chars */
 char *create_array(unsigned int size, char c)
 {
     unsigned int i;
     char *ptr;

    if (size == 0)
        return NULL;
    ptr = malloc(sizeof(char) * size);
    if (!ptr)
        return NULL;
    for (i = 0; i < size; i++)
    {
        ptr[i] = c;
    }
    ptr[i] = '\0';
    return ptr;
 }
 int main(void)
 {
    char name = 'c';
    int size = 1;
    char *ptr;

    ptr = create_array(size, name);

    printf("%s", ptr);
    return 0;
 }