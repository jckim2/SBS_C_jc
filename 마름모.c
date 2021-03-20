// 문제 : 아래와 같이 실행되는 함수를 만들어주세요.

#include <stdio.h>

#pragma warning (disable: 4996)


void print_rhombus_down(int cnt)
{
    int a;
    int b;
    int f = 2;
    int c = 0;
    int h = cnt;



    for (a = 1; a <= cnt; a++)
    {
        for (b = 1; b < f; b++)
        {
            printf(" ");
        }
        if (cnt == 2)
        {
            c++;
        }
        if (cnt == 3)
        {
            if (a == 1)
            {
                h++;
            }
        }
        if (cnt == 4)
        {
            if (a == 1)
            {
                h = h + 2;
            }
        }
        if (cnt == 5)
        {
            if (a == 1)
            {
                h = h + 3;
            }
        }

        for (c = h; c > a * 2 - 1; c--)
        {
            printf("*");
        }
        f++;
        printf("\n");
    }
    printf("\n\n");
}
void print_rhombus_up(int cnt)
{
    int a, c;
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
            if (cnt == 4)
            {
                b = b - 2;
            }
        }
        if (b >= cnt && (a == 3))
        {
            if (cnt == 5)
            {
                b = b - 2;
            }
            if (cnt == 4)
            {
                b = b - 1;
            }

        }
        if (b >= cnt && (a == 4))
        {
            if (cnt != 4)
            {
                b--;
            }
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
int main(void) {
    print_rhombus_up(1);
    print_rhombus_down(1);
    // 출력
    /*
    *
    */

    print_rhombus_up(2);
    print_rhombus_down(2);
    // 출력
    /*
     *
    ***
     *
    */

    print_rhombus_up(3);
    print_rhombus_down(3);
    // 출력
    /*
      *
     ***
    *****
     ***
      *
    */
    print_rhombus_up(4);
    print_rhombus_down(4);

    print_rhombus_up(5);
    print_rhombus_down(5);
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

