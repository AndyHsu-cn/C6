#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    char fname[50];
    FILE * fp;

    printf("Enter filename: ");
    scanf("%s", fname);
    fp = fopen(fname, "r");
    if(fp == NULL){
        printf("Fail to open file\n");
        exit (1);
    }
    while((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);

    return 0;
}
