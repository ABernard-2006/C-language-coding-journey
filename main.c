#include <stdio.h>
#include <stdbool.h>

int main ()
{
    float x = 3.1416465657576;
    double age = 3.141646565757687585;
    int y = 3.1416465657576;
    char name = 'A';
    char Cname [] = "Allen Bernard";
    bool Code_working = 1;

    printf("The value of pi is %.15f\n", x);
    printf("The value of pi is %.17lf\n", age);
    printf("The value of pi is %.15d\n", y);
    printf("The value of pi is %c\n", name);
    printf("The value of pi is %s\n", Cname);

    if(Code_working)
        {printf("You are cooking!");}
    else
       {printf("You are cooked!");}
    


    return 0;
}