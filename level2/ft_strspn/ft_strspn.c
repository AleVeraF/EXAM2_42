#include <stdlib.h>
#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	int j;

	while(s[i])
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				break;
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (i);
}

int main ()
{
	char *s = "hola";
	char *reject = "vjkvhlkn";

	printf("%lu\n", ft_strspn(s, reject));
	printf("%lu\n", strspn(s, reject));
	return (0);
}

