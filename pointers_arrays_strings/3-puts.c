#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * _putchar:return
 * Description: prints a string
 *
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
	_putchar(*str++);
	return(0);
	_putchar('\n');
}

