#include "main.h"
#include <stdio.h>

/**
 * main - a functions that prints alphabets,
 * in lowercase,
 * followed by a new line
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');
}
