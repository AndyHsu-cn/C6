#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    long num;
    long sum = 0L;
    bool status;

    printf("Please enter an integer to be summed(q to quit): ");
    status = scanf("%ld", &num);
    while (status){
        sum = sum + num;
        printf("Please enter next one (q to quit); ");
        status = scanf("%ld", &num);
    }
    printf("sum = %ld\n", sum);
    
    return 0;
}