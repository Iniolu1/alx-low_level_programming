#include "main.h"

/**
 * isupper - uppercase character
 * @c: character to cheack
 * Return: 0 or 1
 */
int isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
