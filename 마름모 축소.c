#include <stdio.h>

int main()
    {
        int a;
        int c;
        int cnt = 5;
        int b=1;
        for (a = 1; a <= cnt; a++)
        {
            if (b >= cnt && (a == 2))
            {
                if (cnt == 5)
                {
                    b = b - 3;
                }
                if (cnt == 3)
                {
                    b = b - 1;
                }
            }
            if (b >= cnt && (a == 3))
            {
                if (cnt == 5)
                {
                    b = b - 2;
                }
     
            }
            if (b >= cnt && (a == 4))
            {
                b--;
            }
            for (b; b < cnt; b++)
            {
                printf(" ");              
            }
            for (c = 0; c < a * 2 - 1; c++)
            {
                printf("*");
            }
            printf("\n"); 
        }
    } 

