#include <stdio.h>
/*   Design and implement in C the loop to create a 
multiplication table for all combinations of two 
numbers from 1 to 9.  */

 int main () 
{
    int n;
    int m = 1;
    int s;

    do
    {
        n=1;
        while(n<=9)
        {
        s=m*n;
        printf("%d  ", s);
        n++;
        }
        printf("\n");
        m++;
    } while (m<=9);
    
 return 0;
 } 
