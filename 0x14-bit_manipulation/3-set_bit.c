#include "main.h"
#include <stdio.h>
/**
 * set_bit - sets the value to a bit to 1
 * @index: given index
 * @n: given number
 * Return: 1 if it worked, -1 if it did not
 */
unsigned long int mask;
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n |= mask;
	return (1);
}
