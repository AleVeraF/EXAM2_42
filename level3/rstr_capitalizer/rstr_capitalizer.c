#include <unistd.h>

void	rstr_capitalizer(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	/*if ((str[0] >= 'a' && str[0] <= 'z') && (str[1] == ' ' || str[1] == '\t'))
	{
		str[0] = str[0] - 32;
		write (1, &str[0], 1);
		i++;
	}*/

	while(str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i + 1]  == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
		{
			str[i] = str[i] - 32;
		}
		write (1, &str[i], 1);
		i++;
	}
}

int main (int argc, char *argv[])
{
	int i = 1;

	if (argc < 2)
		write(1, "\n", 1);
	else
		while (i < argc)
		{
			rstr_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
		return (0);
}
