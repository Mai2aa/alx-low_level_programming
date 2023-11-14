#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: destination to be pasted at
 * @src: source to copy from
 * @n: number of bytes to be copied
 * Return: copied memory with n byteed changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int r = n;
while (r > i)
{
dest[i] = src[i];
n--;
i++;
}
return (dest);
}
