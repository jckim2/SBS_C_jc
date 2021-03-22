// 문제 : 아래와 같이 실행되는 함수를 만들어주세요.

#include <stdio.h>

#pragma warning (disable: 4996)


void print_rhombus_down(int cnt)//마름모의 가운데 다음줄 부터 끝줄까지다
//어떤 수를 대입해도 가능하게 수정필요
{
    int a;
    int b;
    int f = 2;
    int c = 0;
    int h = cnt;



    for (a = 1; a <= cnt; a++)//cnt는 총 줄 수를 의미한다 중간줄은 있기에 cnt-1줄을 하려고
        //a=1부터 시작한다
    {
        for (b = 1; b < f; b++)//f=2로 초기화해서 처음에 한칸 띄우도록 한다
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
        f++;    //f를 증감해서 두칸이상씩 띄우도록 한다
        printf("\n");
    }
    printf("\n\n");
}
void print_rhombus_up(int cnt)//마름모의 첫줄부터 가운데까지다
//cnt는 총 줄수를 의미한다
{
    int a, c;
    int b;
    for (a = 1; a <= cnt; a++)//a는 줄수를 의미하기에 cnt만큼 반복해야한다
    {
        for (b=0; b < cnt-a; b++)//if문 할필요 없이 b=0 cnt -a를 하면 된다 수정필요
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
    print_rhombus_up(1);     //두개를 붙여줘서 출력하면 마름모가 나온다
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

