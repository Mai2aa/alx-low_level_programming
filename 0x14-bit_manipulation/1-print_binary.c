#include "main.h"
#include <stdio.h>
/**
 * print_binary - convert a number into binary number
 * @n: the number to be converted
 * Retrun: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n / 2);
	printf("%lu", n % 2);
}
