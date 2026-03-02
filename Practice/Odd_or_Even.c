#include <stdio.h>

int main()
{
 int num;
 int x;

 printf("Enter a number: ");
 scanf("%d", &num);
 
 num%=2;

 if (num==0)
 {
    printf("The number \"%d\" is even.\n",num);
 }
 else
 {
    printf("The number \"%d\" is odd.", num);
 }

return 0;
}