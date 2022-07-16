#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers fromm 1 to 100,
 * followed by a new line;
 * But for multiples of 3 prints fizz
 * for multiples of 5 prints buzz
 * for multiples of 3 and 5 print fizzbuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}

	}
		printf("\n");

		return (0);
}
