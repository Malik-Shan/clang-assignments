#include <stdio.h>
int main()
{
    int n1, n2, lcm;
    printf("Find LCM Of Two Numbers\n");
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);

    if (n2 > n1)
    {
        int temp = n1;
        n1 = n2;
        n2 = temp;
    }

    // Euclidean algorithm
    // rep Large with remainder (large / small)
    int gcd = n1;
    int gcd_v2 = n2;
    // repeat until remainder is zero.
    while (gcd_v2 != 0)
    {
        // saving n2 val incase the remainder is zero.
        int temp = gcd_v2;
        // taking mod of n2
        gcd_v2 = gcd % gcd_v2;
        // giving gcd itsvalue or replacing with remainder.
        gcd = temp;
    }

    // Find LCM using ------- [a*b / gcd(a,b)]
    lcm = (n1 * n2) / gcd;
    printf("LCM of %d & %d = %d", n1, n2, lcm);

    return 0;
}
