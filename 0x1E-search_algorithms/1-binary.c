#include <stdio.h>
#include "search_algos.h"
/**
 * binary_search - a function uses binary search algorithm
 * @array: a pointer to the first element
 * @size: the size of the array
 * @value: value to search for
 * Return: a value if Success, -1 if failed
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t i;
	size_t high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}
	while (low <= high)
	{
		size_t m;

		printf("Searching in array: ");
		for (i = low; i < high; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		m = (low + high) / 2;
		if (array[m] == value)
		{
			return (m);
		}
		else if (array[m] > value)
		{
			high = m - 1;
		}
		else
			low = m + 1;
	}
	return (-1);
}
