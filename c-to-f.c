#include <stdio.h>

int main()
{
    float c, f;
    printf("Convert Centigrade to Fahrenheit\n");
    printf("Enter Temperature °C :");
    scanf("%f", &c);
    f = ((9.0 / 5.0) * c) + 32.0;
    printf("Temperature in °F = %.1f", f);
    return 0;
}