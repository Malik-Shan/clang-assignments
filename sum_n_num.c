#include <stdio.h>

int main()
{
    int n;
    printf("Sum of natural numbers 1 - n\n");
    printf("Enter the value of n : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        sum = i + sum;
    }
    printf("The sum of natural number 1 - %d = %d.", n, sum);
}