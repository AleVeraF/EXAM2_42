#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	if (argc == 3 && argv[1] > 0 && argv[2] > 0 && argv[1] != argv[2])
	{
		int	div = 2147483647;

		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[2]);
		while (div > 0)
		{
			if (n1 % div == 0 && n2 % div == 0)
			{
				printf("%d", div);
				break;
			}
			div--;
		}
	}
	printf("\n");
	return (0);
}

