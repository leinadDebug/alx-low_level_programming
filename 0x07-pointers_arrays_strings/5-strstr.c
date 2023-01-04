#include "math.h"

/**
 * _strstr - find the occurrence of the substring
 * needle in the string
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located substring
 * NULL if the substring is not found
 */

chat *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
