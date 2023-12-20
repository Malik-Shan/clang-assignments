#include <stdio.h>

int main()
{
    int numbers[] = {2, 4, 6, 8, 11, 15, 18, 19, 25, 30};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int largest = numbers[0];
    printf("Find the largest number in [");
    for (int i = 0; i < length; i++)
    {
        printf("%d", numbers[i]);
        if (i < length - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
    // Find largest logic
    for (int i = 0; i < length; i++)
    {
        largest = numbers[i];
    }
    printf("%d is the largest number.", largest);
    return 0;
}