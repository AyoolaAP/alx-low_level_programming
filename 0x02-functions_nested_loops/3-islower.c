#include "main.h"

/**
 * _islower - check for lower case character
 * @c: the character to check
 * Return: 1 lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
