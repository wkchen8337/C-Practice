#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000]; //字元陣列
    int i, j, m, n, k;
    int done;

    scanf("%s", str);
    for (n = strlen(str); n>0 ; n--) //字串長度不斷縮小
    {
        done = 0;

        for(m=0 ; (unsigned int) m+n <= strlen(str); m++)
        {
            i = m;
            j = m+n-1; // i,J 初始位置

            while (i < j)
            {
                if(str[i] == str[j])
                {
                    i++;
                    j--;
                }
                else
                {
                    break;
                }
            }
            if  (i >= j)
            {
                for (k=m ; k<m+n ; k++) printf("%c",str[k]); //印出找到的對稱字串
                printf("\n");
                done = 1; //找到一組答案，跳出迴圈，不再降低字串長度標準
            }
        }
        if(done) break; //若done為1 則代表發現對稱字串，跳出迴圈
    }



    return 0;
}
