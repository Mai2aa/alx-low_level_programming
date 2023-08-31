#include "main.h"
/**
 * _sqrt_recursion - get the natural square root of a number
 * @n: input value
 * Return: the result
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - finds the actual number
 * @n: number to calculate the square root for
 * @i: iretator
 * Return: the result
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
else if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
