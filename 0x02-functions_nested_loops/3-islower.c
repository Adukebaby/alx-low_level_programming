#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: The character to be checked
 * Return: 1 (True - lowercase) OR 0 (False - not lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0)
}
