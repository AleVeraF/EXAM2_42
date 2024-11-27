#include <unistd.h>

#include <unistd.h>

void ft_putstr(int a)
{
	char number[10] = "0123456789";

	if (a > 9)
		ft_putstr(a / 10);
	write(1, &number[a % 10], 1);
}

int main ()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_putstr(i);
		i++;
		write(1, "\n", 1);
	}
	return (0);
}
