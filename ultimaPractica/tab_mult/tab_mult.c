#include <stdlib.h>
#include <unistd.h>

int ft_atoi(char *num)
{
	int result = 0;
	int i = 0;
	int sing = 1;

	while (num[i]=='\t' || num[i] == ' ')
		i++;
	if (num[i] == '-')
	{
		sing = sing * -1;
		i++;
	}
	if (num[i] == '+')
	{
		sing = 1;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9')
	{
		result = result * 10 + (num[i] - '0');
		i++;
	}
	return (result * sing);
}

void ft_putnbr(int n)
{
	char *num = "0123456789";

	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &num[n % 10], 1);
}


int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		int i = 1;
		int result = 0;

		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(num);
			write(1, " = ", 3);
			ft_putnbr(num * i);
			if (i < 9)
				write(1, "\n", 1);
			i++;
		}

	}
	write (1, "\n", 1);
	return (0);

}
