#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    bool isPrime = true;
    printf("Find If Number Is Prime\n");
    printf("Enter Your Number : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("%d is not a prime number.", n);
        isPrime = false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("%d is not a prime number.", n);
                isPrime = false;
                break;
            }
        }
    }
    if (isPrime)
    {
        printf("%d is a prime number.", n);
    }
    return 0;
}