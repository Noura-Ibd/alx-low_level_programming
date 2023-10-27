#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line to stdout
 *
 * @str: the string
 *
 * Return: the length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
