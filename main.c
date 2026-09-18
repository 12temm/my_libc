#include <stdio.h>
#include "my_libc.h"

/*int main(void)
{
    printf("%zu\n", my_strlen("hello"));
    return 0;
}*/


char var1[]= "Bomboclatt"; 
char var[] = "Hello World";

int main(void)
{
    printf("%s\n", my_strcpy(var1, var));
    printf("%s\n%s", var1, var);
    return 0;
}