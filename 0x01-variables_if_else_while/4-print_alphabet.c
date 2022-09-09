#include <stdio.h>
/**
* main - print alphabet
*
* Return: 0
*/
int main(void)
{
	cha ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' &* ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	retuen (0);
}
