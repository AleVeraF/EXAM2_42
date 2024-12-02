#include <string.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				break;
			j++;
		}
		if (s[i] == reject[j])
				break;
		i++;
	}
	return (i);
}

int main ()
{
	char *s = "hola";
	char *reject = "vjkvbnf";

	printf("%lu\n", ft_strcspn(s, reject));
	printf("%lu\n", strcspn(s, reject));
	return (0);
}


