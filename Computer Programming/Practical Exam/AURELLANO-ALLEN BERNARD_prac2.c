// Allen Bernard R. Aurellano CS1A

#include <stdio.h>

int main()
{
    float Celsius, Fahrenheit, Kelvin;

    printf("Enter temperature in celsius: ");
    scanf("%f", &Celsius);

    Fahrenheit = (Celsius*9/5)+32;
    Kelvin = Celsius + 273.15;

    printf("\nFahrenheit | Kelvin\n");
    printf("--------------------\n");
    printf("%-10.2f | %07.2f", Fahrenheit, Kelvin);

    return 0;
}