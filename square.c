#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Find Sqaure Of A Number\n");
    printf("Enter number : ");
    scanf("%d", &n);
    int square = pow(n, 2);
    printf("Square of %d = %d", n, square);
}