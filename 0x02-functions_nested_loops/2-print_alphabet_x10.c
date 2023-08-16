#include "main.h"

/**
 * print_alphabet_x10 - Make alphabet x10 times
 * Description - we cant use standard library to implement our functions
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

		for (i = 0; i < 10; i++)
		{
			char c;

			for (c = 'a'; c <= 'z'; c++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
