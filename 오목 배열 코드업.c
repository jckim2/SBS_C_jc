#include <stdio.h>

int main()
{
	int a[20][20] = { 0 };
	int i,c,x,y,q,w;

	scanf_s("%d", &i);
	for (c = 1; c <= i; c++)
	{
		scanf_s("%d %d", &x,&y);
		a[x][y] = 1;
	}
	for (q = 1; q <= 19; q++)
	{
		for (w = 1; w <= 19; w++)
		{
			printf("%d ", a[q][w]);
		}
		printf("\n");
	}
}