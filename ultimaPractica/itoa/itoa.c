#include <stdlib.h>
#include <stdio.h>

int num_len(int n)
{
	int len = 0;

	if (n <= 0)
		len = 1;
	else
		n = 0;
	while(n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	char *itoa;
	int len = num_len(nbr);
	long n = nbr;

	itoa = malloc(len + 1);

	if (n < 0)
	{
		itoa[0] = '-';
		n = n * -1;
	}

	itoa[len] = '\0';

	if (n == 0)
		itoa[0] = '0';
	else
		while(n != '\0')
		{
			itoa[--len] = (n % 10) + '0';
			n = n / 10;
		}
	return (itoa);
}

int main ()
{
	int nbr = -234312;
	printf("%s\n", ft_itoa(nbr));
	return (0);
}
