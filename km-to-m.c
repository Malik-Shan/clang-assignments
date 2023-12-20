#include <stdio.h>

int main()
{
    float km, mile;
    printf("Convert Kilometer to Miles\n");
    printf("Enter Your Value :");
    scanf("%f", &km);
    printf("%.4fkm = %.4f miles", km, (km * .6214));
    return 0;
}