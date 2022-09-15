#include "main.h"
/**
 * more_numbers - prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{
	int x;
	int y;

	for (y = 0; x < 10; y++)
	{
		for (x = 0; x < 15; x++)
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	_putchar('\n');
}
