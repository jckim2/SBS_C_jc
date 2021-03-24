#include <stdio.h>

int main()
{
	int arr[11][11];
	int y;

	for (int x = 1; x < 11; x++)
	{
		for (int y = 1; y < 11; y++)
		{
			scanf_s("%d", &arr[x][y]);
		}
	}
	for (int x = 2; x < 10; x++)
	{
		for (y = 2; y < 10; y++)
		{
			if (arr[x][y] = 0)
				if (arr[x][y + 1] = 1)
				{
					arr[x][y] = 9;
					break;
				}
		}
		if (arr[x][y] = 9)
		{
			break;
		}
	}
	for (int x = 2; x < 10; x++)
	{
		for (y = 2; y < 10; y++)
		{
			if (arr[x][y] = 9)
			{
				if (arr[x + 1][y] = 1)
				{
					return 0;
				}
				if (arr[x + 1][y] = 0)
				{
					arr[x + 1][y] = 9;
					
				}
			}
		}
	}

	for (int x = 1; x < 11; x++)
	{
		for (int y = 1; y < 11; y++)
		{
			printf("%d", arr[x][y]);
		}
		printf("\n");
	}
}