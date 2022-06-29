#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("%d %d\n", INT_MAX, INT_MIN);
    printf("%u\n", UINT_MAX);
    printf("%lld %lld\n", LLONG_MAX, LLONG_MIN);
    printf("%d\n", CHAR_BIT);
    printf("%e %e\n", FLT_MIN, FLT_MAX);
    printf("%e %e\n", DBL_MIN, DBL_MAX);
    printf("%d %d\n", FLT_DIG, DBL_DIG);

    return 0;
}