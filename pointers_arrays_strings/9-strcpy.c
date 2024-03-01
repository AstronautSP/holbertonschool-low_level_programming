#include <stdio.h>

char *_strcpy(char *dest, const char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (original_dest);
}

int main(void)
{
char source[] = "Hello, World!";
char destination[50];

_strcpy(destination, source);

printf("Copied string: %s\n", destination);

return (0);
}
