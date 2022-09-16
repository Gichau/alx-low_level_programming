#include <stdio.h>
/**
 * main - finds and prints prime factors
 *
 * return: always 0
 */
int main()
{

	long int x  = 612852475143;
	int count ;

	for (count = 2 ; x > 1 ; count++)
	{
		while(x % count == 0)
		{
			printf("%d", count);
			x = x / count;
		}
	}
	printf("\n");
	return (0);
}



