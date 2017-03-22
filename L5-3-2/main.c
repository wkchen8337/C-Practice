#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char ch;

    ch = getchar();

    while (ch != '\n')
    {
        if  (isalpha(ch))
        {
            putchar(ch+1);
        }
        else
        {
            putchar(ch);
        }
        ch = getchar();
    }
    return 0;
}
