#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	int i = 1;

	// a = 4  b = 9

	/*if (a < b)
		i = b;
	else
		i = a;*/

	if (a == 0 || b == 0)
		return (0);


	while (1)
	{
		if (i % a == 0 && i % b == 0)
			return (i);
		i++;
	}
	return (0);
}

int main ()
{
	unsigned int a = 12312;
	unsigned int b = 1231232;

	printf("%d\n", lcm(a, b));
	return (0);
}

