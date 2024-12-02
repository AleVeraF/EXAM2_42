#include <unistd.h>

int main (int argc, char *argv[])
{
	int i = 0;

	int j;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
			i--;
		j = i + 1;
		while (argv[1][j] != '\0')
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
