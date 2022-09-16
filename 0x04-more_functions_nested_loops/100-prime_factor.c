#include <stdio.h>

/**
 * main - finds and prints prime factors
 *
 * return: return largest prime factor
 */
int main(void)
{

	unsigned long int x  = 612852475143;
	unsigned int a;

	while (a != x)
	{
		if (x % a == 0)
		{
			n = n / a;
		}
		else
		{
			a++;
		}
	}
	printf("%lu\n", n);
	return (0);
}



