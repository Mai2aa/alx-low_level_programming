#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns a value of a bit
 * @index: is the number starting from 1
 * @n: the number
 * Return: the value of a bit
 */
unsigned long int mask;
int bit;
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit = (n & mask) != 0;
	return (bit);
}
