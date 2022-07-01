#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1){
        sum = sum + num;
        printf("Please enter next one (q to quit); ");
        status = scanf("%ld", &num);
    }
    printf("sum = %ld\n", sum);
    
    return 0;
}