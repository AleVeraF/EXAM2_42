#include <string.h>
#include <stdio.h>
#include <stdlib.h>


char	*ft_strpbrk(const char *s1, const char *s2)
{
	int j;

	while (*s1)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (*s1 == s2[j])
				break;
			j++;
		}
		if (*s1 == s2[j])
		{
			return((char *)s1);
		}
		s1++;
	}
	return (NULL);
}
int main ()
{
	char *s1 = "hola";
	char *s2 = "pimx";

	printf("%s\n", ft_strpbrk(s1, s2));
	printf("%s\n", strpbrk(s1, s2));
	return (0);
}
