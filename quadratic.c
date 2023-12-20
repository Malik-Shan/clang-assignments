#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, discriminant, ans1, ans2;
    printf("Solve the Quadratic Equation.\n");
    printf("Enter the value of a,b & c: (ax^2 + bx + c)\n");
    printf("Enter a: ");
    scanf("%f", &a);
    if (a == 0)
    {
        printf("The Equation is not quadric.");
        return 0;
    }
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant == 0)
    {
        // one real
        ans1 = -b / (2 * a);
        ans2 = ans1;
        printf("One real solution & same. Ans = %.2f,%.2f", ans1, ans2);
    }
    else if (discriminant > 0)
    {
        // two real
        ans1 = (-b + sqrt(discriminant)) / (2 * a);
        ans2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real solutions. Ans = %.2f,%.2f", ans1, ans2);
    }
    else if (discriminant < 0)
    {
        float r = -b / (2 * a);
        float i = sqrt(-discriminant) / (2 * a);
        printf("Two Imaginary Solutions. (%.2f - %.2fi) (%.2f + %.2fi)", r, i, r, i);
    }
}
