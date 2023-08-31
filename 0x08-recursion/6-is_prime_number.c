#include "main.h"
/**
 * is_prime_number - checks if number is prime or not
 * @n: input
 * Return: the result
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}
/**
 * actual_prime - gets if its prime or not
 * @n: input
 * @i: iterator
 * Return: 1 if its prime
 */
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
else if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}
