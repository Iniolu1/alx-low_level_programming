#include <stdio.h>

/**
 * main - prints all alphabets in lowercase,
 * excepts q and e,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar ('\n');
	return (0);
}
