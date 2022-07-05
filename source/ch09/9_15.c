#include <stdio.h>

void interchange(int * u, int * v);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d, y = %d\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d, y = %d\n", x, y);

    int * px = &x;
    printf("x = %d, &x = %p, px = %p, *px = %d, &px = %p\n", x, &x, px, *px, &px);
    return 0;
}

void interchange(int * u, int * v){
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}