#include "main.h"
/**
 * _isupper - returns int c if uppercase
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
