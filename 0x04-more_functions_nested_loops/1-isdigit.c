#include "main.h"
/**
 * _isdigit - checks if int c is a digit 0 - 9
 * @c: integer
 * Returns 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
