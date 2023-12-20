#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    printf("Find Square Root Of A Number\n");
    printf("Enter number : ");
    scanf("%f", &n);
    printf("Square Root of %.2f = %.2f", n, sqrt(n));
}