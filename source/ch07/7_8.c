#include <stdio.h>
#define COVERAGE 350

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number: ");
    while(scanf("%d", &sq_feet) == 1){
        cans = sq_feet / COVERAGE;
        cans +=  (sq_feet % COVERAGE)? 1: 0;
        printf("You need %d %s of paint.\n", cans, 
        cans == 1 ? "can": "cans");
        printf("Enter next number: ");
    }

    return 0;
}