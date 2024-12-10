#include <stdio.h>
#include <unistd.h>
size_t ft_strlen(char *str)
{
    size_t  i;
    i = 0;
    while(str[i]!='\0')
        i++;
    return(i);
}
int main(int ac, char *av[])
{
	int end;
	int start;
	if (ac == 2)
	{
		end = ft_strlen(av[1]) - 1;
		while (end >= 0 && av[1][end] == ' ' || av[1][end] == '\t')
			end--;
		start = end;
		while (start >= 0 && av[1][start] != ' ' && av[1][start] != '\t')
			start--;
		start++;
		while (start <= end)
		{
			write(1, &av[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
