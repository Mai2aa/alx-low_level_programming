#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - goes through the whole array
 * @array: pointer to an array
 * @size: size of an array
 * @value: the value searched for
 * Return: a value on Successs, -1 if failed
 */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;
if (array == NULL)
{
return (-1);
}
while (i < size)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
else
{
i++;
}
}
return (-1);
}
