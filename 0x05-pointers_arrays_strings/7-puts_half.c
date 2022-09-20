#include "main.h"
#include <string.h>
/**
 * puts_half - half of a string.
 * @str: string to be printed.
 */
void puts_half(char *str)
{
	unsigned long int start, len, i;

	len = strlen(str);
	start = len / 2;

	if (len % 2)
		start += 1;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
