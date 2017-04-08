#include <stdio.h>

void display(char cr, int lines, int width);

int main (void)
{
    int ch;
    int rows, cols;
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d%d", &rows, &cols) !=2) break; //讀不到兩個字元的話就跳出
        display(ch, rows, cols);
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
        while(getchar()!='\n');
    }
    printf("Bye.\n");
    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;
    for(row = 1; row <=lines; row++)
    {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');
    }
}
