#include <unistd.h>
#include "main.h"

/**
 * 0-putchar-write the character c to stdout
 * @c: The charcter to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int 0-putchar(char c)
{
return (write(1, &c, 1))
}
