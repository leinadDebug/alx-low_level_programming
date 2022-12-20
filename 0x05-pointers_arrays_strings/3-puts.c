#include "main.h"

/**
 * _puts -> this is a function that puts
 * @str: a parameter to _put function
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
