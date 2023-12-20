#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char str[9];
    printf("Generate a 8 alphabet random text.\n");
    srand(time(NULL));
    for (int i = 0; i < 8; i++)
    {
        str[i] = rand() % 26 + 97;
    }
    str[8] = 0;
    printf("The rand text = %s", str);
}