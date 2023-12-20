#include <stdio.h>

int main()
{
    int n, factorial;
    printf("Find Factorial Of A Number\n");
    printf("Enter your number : ");
    scanf("%d", &n);
    factorial = n;
    for (int i = n - 1; i > 0; i--)
    {
        factorial = factorial * i;
    }
    printf("Factorial of %d = %d", n, factorial);
    return 0;
}