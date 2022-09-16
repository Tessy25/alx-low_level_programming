#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1-100, but for multiples of three,
 * Fizz is printed insted of the number, for multiples of five,
 * Buzz, and for multiples of bothe three and five, FizzBuzz.
 *
 * Return: Always 0
 */
int main(void)
{
	int q;

	for (q = 1; q <= 100; q++)
	{
		if ((q % 3) == 0 && (q % 5) == 0)
			printf("FizzBuzz");
		else if ((q % 3) == 0)
			printf("Fizz");
		else if ((q % 5) == 0)
			printf("Buzz");
		else
			printf("%d", q);
		printf(" ");
	}
	printf("\n");
	return (0);
}
