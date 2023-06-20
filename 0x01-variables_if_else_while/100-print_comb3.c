#include <stdio.h>

/**
 * main - Entry point of the program
 * Return: 0 (successfully executed)
 */
int main(void)
{
	int t, r;

	for (t = 48; t <= 56; t++)
	{
		for (r = 49; r <= 57; r++)
		{
			if (r > t)
			{
				putchar(n);
				putchar(m);
				if (t != 56 || r != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
