#include <stdio.h>
/**
 * _strcpy -  copies the string
 *@dest: destination
 *@src:source
 *Return: returns 0
 */
char *_strcpy(char *dest, const char *src)
{
char *cpy = dest;
while (*src != '\0')
{
	*dest = *src;

	src++;
	dest++;
}

*dest = '\0';


return (cpy);
}
