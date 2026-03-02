 #include <stdio.h>
 #include <math.h>

 /* Allen Bernard R. Aurellano (CS1A)*/
 
  int main() 
  {
    int a, b, c, area, peri, s;
     printf("Please input values for the 3 sides(in meters): ");
     scanf("%d %d %d", &a, &b, &c);

     peri = a + b + c;
     s = (a+b+c)/2;
     area = sqrt(s*(s-a)*(s-b)*(s-c));


    printf("Perimeter = %d m\nArea = %d sq.m", peri, area);

     return 0;
 }