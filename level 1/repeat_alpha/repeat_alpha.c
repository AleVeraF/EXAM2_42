#include <unistd.h>

int main (int argc, char *argv[])
{
	int i = 0;
	int j;
	int repeat = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				repeat = argv[1][i] - 'a' + 1;
				j = 0;
				while (j < repeat)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				repeat = argv[1][i] - 'A' + 1;
				j = 0;
				while (j < repeat)
				{
					write(1, &argv[1][i], 1);
					j++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
