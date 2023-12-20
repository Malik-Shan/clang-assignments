#include <stdio.h>

int main()
{
    int a, b, temp;
    printf("Swap Two Numbers\n");
    printf("Enter a value : ");
    scanf("%d", &a);
    printf("Enter b value : ");
    scanf("%d", &b);
    printf("a = %d & b = %d\n", a, b);
    printf("Now Swaping Values\n");
    temp = a;
    a = b;
    b = temp;
    printf("Now a = %d & b = %d\n", a, b);
    return 0;
}