#include "main.h"

/**
 * _strpbrk - searches a string for any kind of a set of bytes
 * @s: first string
 * @accept: second string
 * Return: a pionter to the byte in s that suits and null to others
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
