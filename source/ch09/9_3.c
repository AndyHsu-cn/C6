#include <stdio.h>

int imin(int a, int b);

int main(void)
{
    int evil1, evil2;

    printf("Enter a pair of integers (q to quit): \n");
    while(scanf("%d %d", &evil1, &evil2) == 2){
        printf("The little one is %d\n", imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit): \n");
    }
    return 0;
}

int imin(int a, int b){
    int  min;
    if(a < b)
        min =  a;
    else
        min = b;
    return min;
}