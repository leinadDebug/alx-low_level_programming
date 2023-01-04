#include "math.h"

/**
 * _strstr - find the occurrence of the substring
 * need in the string
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the beginning of located substring
 * NULL if the substring is not found
 */
chat *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bharstack + 1;
	}
	return (o);
}
