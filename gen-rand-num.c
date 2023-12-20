#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r;
    // null as a parameter for srand so it doesn't return pointer rather value & discard it than.
    // time returns pointer to time_t object.
    printf("Generate Random Number from 1 - 100\n");
    srand(time(NULL));
    r = (rand() % 100 + 1);
    printf("%d", r);
    return 0;
}