#include <stdio.h>
#include <stdlib.h>

int main (int argc, char  *argv[])
{
	int num;

	int i;

	if (argc == 2)
	{
		i = 2;
		int num = atoi(argv[1]);

		if (num == 1)
		{
			printf("1");
		}
		while (num >= i)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				num = num / i;
				if (num > i)
					printf("*");
			}
			else
				i++;
		}

	}
	printf("\n");
	return (0);
}