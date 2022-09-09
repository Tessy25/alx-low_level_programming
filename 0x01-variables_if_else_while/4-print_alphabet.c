#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - print alphabet
*
* Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	retuen (0);
}
