#include <stdio.h>

 /* Allen Bernard R. Aurellano (CS1A)*/

int main()
{
    float earth, mars, moon, jupiter; 
    printf("Enter weight on Earth(in kg): ");
    scanf("%f", &earth);

    mars = earth * 0.38;
    printf("\nMars weigth: %.2f kg", mars);

    moon = earth * 0.165;
    printf("\nMoon weight: %.2f kg", moon);

    jupiter = earth * 2.34;
    printf("\nJupiter weight: %.2f kg", jupiter);

    return 0;
}