#include "main.h"
#include <string.h>
/**
 * _strlen -> function to get the lenght of a string
 * @s: string pointer to passed to this function
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
		return (len);
}
