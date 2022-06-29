#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c", &ch);
    printf("ch = %c = %d\n", ch, ch);
    
    return 0;
}