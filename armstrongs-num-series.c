#include <stdio.h>
#include <math.h>

int digitCount(int num)
{
    int c = 0;
    while (num != 0)
    {
        num = num / 10;
        c++;
    }
    return c;
}

int main()
{
    int s, e;
    printf("Armstrong Number Series");
    printf("Enter Number Range (start,end): ");
    scanf("%d,%d", &s, &e);
    for (int i = s; i <= e; i++)
    {
        int num = i;
        int power = digitCount(i);
        int result = 0;
        while (num != 0)
        {
            int singleDigit = num % 10;
            result += pow(singleDigit, power);
            num = num / 10;
        }
        if (i == result)
        {
            printf("%d is an Armstrong Number\n", i);
        }
    }
    return 0;
}