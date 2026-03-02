#include <stdio.h>
#include <string.h>

int main()
{
    char name[10] = "Ab";
    char comp[10] = "Ab";

    printf("%s\n", name);

  char s[] = "World";
printf("%s\n", s+3);

    if(comp>name)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}