#include <stdio.h>

int main()
{
    int n;
    printf("Check If Number Is +ive or -ive\n");
    printf("Enter Number : ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is a positive number.", n);
    }
    else if (n < 0)
    {
        printf("%d is a negative number.", n);
    }
    else
    {
        printf("Number is zero");
    }
    return 0;
}