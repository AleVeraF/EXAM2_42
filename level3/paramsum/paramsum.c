#include <unistd.h>

void	ft_putnbr(int argc)
{
	char digit;

	if (argc >= 10)
		ft_putnbr(argc / 10);
	digit = (argc % 10) + '0';
	write(1, &digit, 1);
}
int	main(int argc, char **argv)
{
	(void)argv;

	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}
