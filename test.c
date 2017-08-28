#include <stdio.h>
int main(void)
{
	int nInput;
	scanf("%d", &nInput);

	int i = 0;
	while (i < nInput)
	{
		putchar('*');
		++i;
	}

	return 0;
}

