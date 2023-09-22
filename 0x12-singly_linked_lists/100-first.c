#include <stdio.h>
void first(void)__attribute__((constructor));
/**
 * first - a function to print sentence before main
 * function done
 */
void first(void)
{
  printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
