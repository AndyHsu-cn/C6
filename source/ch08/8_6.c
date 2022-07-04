#include <stdio.h>
void display(char ch, int rows, int cols);

int  main(void)
{
    int ch;
    int rows, cols;

    printf("Enter a char and two int (newline to quit): \n");
    while((ch = getchar()) != '\n'){
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter a char and two int (newline to quit): \n");
        while(getchar() != '\n')
            continue;
    }
    printf("Bye.\n");
    return 0;
}

void display(char ch, int rows, int cols){
    int r, c;

    for(r = 1; r <= rows; ++r){
        for(c = 1; c <= cols; ++c)
            putchar(ch);
        putchar('\n');
    }
}