#include <stdio.h>
/**
 * _strcpy -  copies the string
 *@dest: destination
 *@src:source
 *Return: returns 0
 */
char *_strcpy(char *dest, const char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;

src++;
}

*original_dest = '\0';


return (dest++);
}
