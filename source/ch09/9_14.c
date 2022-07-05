#include <stdio.h>

void interchange(int u, int v);

int main(void)
{
    int x = 5, y = 10;
    printf("Originally x = %d, y = %d\n", x, y);
    interchange(x, y);
    printf("Now x = %d, y = %d\n", x, y);
    return 0;
}

void interchange(int u, int v){
    int temp;
    printf("in interchange, Originally u = %d, v = %d\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("in interchange, Now u = %d, v = %d\n", u, v);
}