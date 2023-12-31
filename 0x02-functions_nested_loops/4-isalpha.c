#include "main.h"

/**
 * _isalpha - checks for Alphabetic characters
 *
 * @c: Alphabet character
 *
 * Return: 1 (True - alphabet chars) OR 0 (False - not alphabet chars)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
