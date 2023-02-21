#include "main.h"
#include <unisted.h>
/**
 * _putcher - writes the character c to stdout
 * *@c: The character to print
 *
 * Return: On success 1;
 * On error, -1 is returned, and error is set appropriately.
 */
int _putcher(char c)
{
	Return (write(1, &c, 1));
}
