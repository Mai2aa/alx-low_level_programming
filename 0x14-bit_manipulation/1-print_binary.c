#include "main.h"
#include <stdio.h>
/**
 * print_binary - convert a number into binary number
 * @n: the number to be converted
 * Retrun: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int zeros;

	if (n == 0)
	{
		printf("0");
		return;
	}
	mask = 1UL << (sizeof(n) * 8 - 1);
	zeros = 1;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			zeros = 0;
			printf("1");
		}
		else if (!zeros)
		{
			printf("0");
		}
		mask >>= 1;
	}
}
