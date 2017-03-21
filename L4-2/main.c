#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STAR "*****"

int main(void)
{
    int i=1;
    int j=0;

   while (i <= strlen(STAR))
    {
        printf("%.*s\n",i++,STAR);

        j = 0;

        while (j < 500000000) // delay 500000000 loop
        {
            j = j + 1;
        }
    }

    return 0;
}
