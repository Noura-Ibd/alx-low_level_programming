include "main.h"
/**
 * print_most_numbers(void) prints numbers, from 0 to 9
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 58; i++)
	{
		if (i != 50 && i != 52)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
