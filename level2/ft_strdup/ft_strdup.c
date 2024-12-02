#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i = 0;
	char *copy;
	while (src[i] != '\0')
		i++;
	copy = malloc(i + 1);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

int main ()
{
	char *str = "hola";
	printf("%s\n", ft_strdup(str));
	printf("%s\n", strdup(str));
	return (0);
}
