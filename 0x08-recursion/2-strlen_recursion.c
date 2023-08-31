#include "main.h"
/**
 * _strlen_recursion - returns the length of the string
 * @s: the string to be measured
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
int longi = 0;
if (*s)
{
longi++;
longi += _strlen_recursion(s + 1);
}
return (longi);
}
