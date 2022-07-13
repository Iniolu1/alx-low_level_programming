#include <limits.h>
#include "main.h"

/**
 * main - check your code
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = print_sign(98);
	if (r < 0)
		r *= -1;
	putchar(r + '0');
	_putchar('\n');
	return (0);
}
