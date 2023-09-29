#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the bit to 0
 * @index: index
 * @n: the number
 * Return: 1 if it worked, -1 if it did not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
