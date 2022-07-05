#include <stdio.h>
#include "hotel.h"

int menu(void){
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter hotel number:\n");
    printf("1) Fairfield Arms     2) Hotel Olympic\n");
    printf("3) Chertworthy Plaza  4) The Stockton\n");
    printf("5) Quit\n");
    printf("\n%s%s\n", STARS, STARS);

    while((status = scanf("%d", &code)) != 1 || 
            (code < 1 || code > 5)){
                if(status != 1)
                    scanf("%*s");
                printf("Enter int between 1 and 5\n");
            }  
    return code;
}

int getnights(void){
    int nights;
    printf("How many nights are needed? ");
    while(scanf("%d", &nights) != 1){
        scanf("%*s");
        printf("How many nights are needed?(int only) ");
    }
    return nights;
}

void showprice(double rate, int nights){
    int n;
    double total  = 0.0;
    double factor  = 1.0;

    for(int n = 1; n <= nights; ++n, factor *= DISCOUNT)
        total += rate * factor;
    printf("Total: $%0.2f.\n", total);
}