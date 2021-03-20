// 문제 : 아래와 같이 실행되는 함수를 만들어주세요.

#include <stdio.h>

#pragma warning (disable: 4996)
void print_rhombus1(int m)
{

}
void print_rhombus(int cnt)
{
    {
        int a;
        int c;
        int cnt = 5;
        int b = 1;
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
}
int main(void) {
    print_rhombus(1);
    // 출력
    /*
    *
    */

    print_rhombus(2);
    // 출력
    /*
     *
    ***
     *
    */

    print_rhombus(3);
    // 출력
    /*
      *
     ***
    *****
     ***
      *
    */

    print_rhombus(5);
    // 출력
    /*
        *
       ***
      *****
     *******
    *********
     *******
      *****
       ***
        *
    */

    return 0;
}

