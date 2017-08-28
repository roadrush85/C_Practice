#include <stdio.h>
int main(void)
{
	int nData[5][5];
	int i = 0, j = 0, Sum = 0;

	for (i = 0; i < 5; i++)
	{
		if(i % 2 == 0)
		{
			for (j = 0; j < 5; j++)
				nData[i][j] = ++Sum;
		} else
			for (j = 4; j >= 0; j--)
				nData[i][j] = ++Sum;

	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d\t", nData[i][j]);
		}
		putchar('\n');
	}
	return 0;
}
