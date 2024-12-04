#include <stdlib.h>

int *ft_range(int start, int end)
{
	int i = 0;
	int len;
	int *range;
	// primero sacamos la longitud

	if (end >= start)
	{
		len = end - start + 1;
	}
	else
		len = start - end +  1;
	range = malloc(len * sizeof(int));
	if (!range)
		return (NULL);
	if (start <= end)
	{
		while (i < len)
		{
			range[i]  = start + i;
			i++;
		}
	}
	else
	{
		while(i < len)
		{
			range[i] = start - i;
			i++;
		}
	}
	return (range);
}
