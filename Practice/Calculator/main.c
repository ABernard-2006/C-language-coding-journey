#include <stdio.h>
#include <math.h>

void rep();
int main()
{
    int yn;
    
    {
    rep();
    }

    printf("Enter 1 to CONTINUE and any number to STOP:");
    scanf("%d", &yn);
    if (yn==1)
    {
        void rep();
    }
    else
    {
        printf("Thank you for trying this simple calculator :>");
    }
    return 0;
}