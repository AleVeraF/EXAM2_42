#include <stdio.h>

int	ft_atoi(const char *str)
{
	int sing = 1;
	int i = 0;

	long num = 0;

	while (str[i] == ' ' || str[i] == '\t')
			i++;
	if (str[i] == '-')
	{
		sing = -1;
		i++;
	}
	if (str[i] == '+')
	{
		sing = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = ((num * 10) + str[i]) - '0';
		i++;
	}
	return (num * sing);
}

int main ()
{
	char *str = "          -12341aba";
	printf("%d", ft_atoi(str));
	return (0);
}

