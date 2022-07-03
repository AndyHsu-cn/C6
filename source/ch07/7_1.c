#include <stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter temperature: ");
    while (scanf("%f", &temperature) == 1){
        all_days++;
        if(temperature < FREEZING)
            cold_days++;
    }
    if(all_days != 0)
        printf("Total: %d, %.1f were below freezing.\n", all_days, 
        100.0 * (float)cold_days / all_days);
    if(all_days == 0)
        printf("No data entered!\n");
    
    return 0;
}