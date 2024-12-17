#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int num;
	int i;

	if (argc == 2)
	{
		i = 2;
		num = atoi(argv[1]);

		if (num == 1)
		{
			printf("1");
			return (0);
		}
	}
}
