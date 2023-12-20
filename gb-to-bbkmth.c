#include <stdio.h>
#include <math.h>

int main()
{
    double bits, bytes, kb, mb, gb, tb, pb, eb;
    printf("Convert GB Into Bits,Bytes,KB,MB,TB,PB,HB\n");
    printf("Enter your GB value : ");
    scanf("%lf", &gb);

    double gb_bytes = gb * pow(1024, 3);
    bits = 8 * gb_bytes;
    bytes = gb_bytes;
    kb = gb_bytes / 1024;
    mb = kb / 1024;
    gb = mb / 1024;
    tb = gb / 1024;
    pb = tb / 1024;
    eb = pb / 1024;

    // Use %f to print the result without scientific notation and with 6 decimal places
    printf("Bits: %lf\n", bits);
    printf("Bytes: %.4e\n", bytes);
    printf("KB: %.4e\n", kb);
    printf("MB: %.4e\n", mb);
    printf("GB: %.4e\n", gb);
    printf("TB: %.4e\n", tb);
    printf("PB: %.4e\n", pb);
    printf("EB: %.4e\n", eb);

    return 0;
}
