#include <stdio.h>
int main()
{
    int b, h;
    printf("Find Area Of A Triangle\n");
    printf("Enter Height : ");
    scanf("%d", &h);
    printf("Enter Base : ");
    scanf("%d", &b);
    printf("Area = %d", (b * h) / 2);
    return 0;
}