#include "main.h"
/**
 * _islower - checks for lowercase char
 * @c: Parameter to be checked
 * Return: 1 0r 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
