#include <stdio.h>

int main()
{
    int n, given, rem, binaryArray[16], arraySize;
    printf("Convert Decimal To Binary\n");
    printf("Enter Your Number : ");
    scanf("%d", &n);

    given = n;
    for (arraySize = 0; n != 0; arraySize++)
    {
        rem = n % 2;
        n /= 2;
        binaryArray[arraySize] = rem;
    }
    printf("%d to binary = ", given);
    for (int i = arraySize - 1; i >= 0; i--)
    {
        printf("%d", binaryArray[i]);
    }
}