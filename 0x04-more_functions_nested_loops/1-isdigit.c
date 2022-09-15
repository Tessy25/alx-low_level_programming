#include "main.h"
/**
 * _is digit - checks for a digit (0-9).
 * @c: The number to check.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
