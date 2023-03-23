#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * C: the characer to print
 *
 * Return: On success 1
 *On error, -1 is returne, and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

