#include "main.h"

/**
 * Last digit of the number printed
 *
 * @n: A number
 *
 * Return: Last digit of n
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last digit = (n % 10) * -1;
	else
		last_digit = n % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
