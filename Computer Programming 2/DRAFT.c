#include <stdio.h>
#include <string.h>

int main()
{
    int x = 10;
    int y = 1;
    int* Ptrname = NULL;
    Ptrname = &x;

    *Ptrname = *Ptrname + y;

    printf("%p\n", &x);
    printf("%d\n", *Ptrname);
    printf("%p", &Ptrname);
    return 0;
}