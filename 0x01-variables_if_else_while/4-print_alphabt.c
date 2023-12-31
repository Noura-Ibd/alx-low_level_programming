#include <stdio.h>
/**
 * main - The main entry point of the program.
 *
 * This function serves as the entry point for the program.
 * It initializes the kernel and performs the main processing tasks.
 *
 * Return: 0 on success, an error code on failure.
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (ch != 113 && ch != 101)
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
