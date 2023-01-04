#include "main.h"

/**
 * _memset -> this memory set function
 *@s: starting address of memory to be filled
 *@b: the desired value
 *@n: number of byte to be changed
 *char: datatype
 *int: datatype
 *for-loop : looping
 * Return: changed array with new values for n byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
