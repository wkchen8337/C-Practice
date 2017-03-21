#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char word[30];
    scanf("%29s",word);
    int i = 1;
    while (i <= strlen(word))
    {
        printf("%*.*s\n",strlen(word),i,word);

        i = i + 1;
    }

    return 0;
}

/*

       A
      AB
     ABC
    ABCD
   ABCDE
 */
