#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int	i = 0;
	char dest;
	int	j = ft_strlen(str) - 1;

	while (i <= j)
	{
		dest = str[i];
		str[i] = str[j];
		str[j] = dest;
		i++;
		j--;
	}
	return (str);
}

int main ()
{
	char str[] = "hora";
	printf("%s\n", ft_strrev(str));
	return (0);
}
