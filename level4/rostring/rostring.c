#include <unistd.h>

int main (int argc, char *argv[])
{
	int i = 0;
	if (argc > 1)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
			i++;
		if (argv[1][i] == '\0')
		{
			i = 0;
			while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
			{
				write(1, &argv[1][i], 1);
				i++;
			}
			write(1, "\n", 1);
            return (0);
		}
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				while (argv[1][i] == ' ' || argv[1][i] == '\t')
					i++;
				if (argv[1][i] != '\0')
					write(1, " ", 1);
			}
			write (1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		write (1, " ", 1);
		while (argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			write(1, &argv[1][i], 1);
			i++;
		}

	}
	write (1, "\n", 1);
	return (0);
}
