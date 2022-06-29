#include <stdio.h>

int main(void)
{
    int x = 100;

    printf("dec = %d, octal = %O, hex = %X\n", x, x, x);
    printf("dec = %d, octal = %#O, hex = %#X\n", x, x, x);
    return 0;
}