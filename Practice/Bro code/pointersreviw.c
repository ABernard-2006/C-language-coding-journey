#include <stdio.h>

int main()
{
    int x=10;
    int *p=&x; //pointers should always be = NULL if not initialized

    printf("Address: %p\n", &x);
    printf("Address using the pointer: %p\n", p);
    printf("Address of the pointer: %p\n", &p);
    printf("original value is %d\n", *p);
    
    *p=20;

    printf("Modified value is %d\n", *p);






    return 0;
}