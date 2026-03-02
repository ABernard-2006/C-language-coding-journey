 #include <stdio.h>

 /* Allen Bernard R. Aurellano (CS1A)*/
 
  int main() 
  {
    int totalsec, sec, mins, hours, rem;
     printf("Enter total seconds: ");
     scanf("%d", &totalsec);

    hours = totalsec / 3600;
    rem = totalsec % 3600;
    mins = rem / 60;
    sec = rem % 60;

    printf("That is %d hours, %d minutes, and %d seconds.", hours, mins, sec);

     return 0;
 }