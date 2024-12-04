#include <stdio.h>
#include <stdlib.h>

int	ft_num_length(int n)
{
	int	length;

	if (n <= 0)
		length = 1;
	else
		length = 0;
	while (n != 0)
	{
		n = n / 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int nbr)
{
	char *itoa;
	int length = ft_num_length(nbr);
	long n = nbr;

	itoa = malloc(length +1);
	if (n < 0)
	{
		itoa[0] = '-';
		n = n * -1;
	}
	itoa [length] = '\0';
	if (n == 0)
		itoa[0] = '0';
	else
	{
		while (n != '\0')
		{
			itoa[--length] = (n % 10) + '0';
			n = n / 10;
		}
	}
	return (itoa);
}
