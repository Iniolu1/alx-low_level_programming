#include <limits.h>
#include "main.h"

/**
 * main - check your code
 * Return: Always 0;
 */
int main(void)
{
	int r;

	r = print_sign(0);
	if (r < 0)
		r *= -1;
	putchar(r + '0');
	putchar('\n');
	return (0);
}

