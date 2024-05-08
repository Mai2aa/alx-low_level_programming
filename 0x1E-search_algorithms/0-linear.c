#include <stdio.h>
#include <search_algos.h>
/**
 * linear_search - goes through the whole array
 * @array: pointer to an array 
 * @size: size of an array
 * @value: the value searched for
 */
int linear_search(int *array, size_t size, int value)
{
int i = 0;
if (array == NULL)
{
return (-1);
}
while (i < int(size))
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
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
