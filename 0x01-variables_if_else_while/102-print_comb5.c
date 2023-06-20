#include <stdio.h>
/**
 * main - combinations of two two-digit numbers
 * Return: 0 (successfully executed)
 */
int main(void)
{
	int e, y;

	for (e = 0; e < 100; e++)
	{
		for (y = 0; y < 100; y++)
		{
			if (e < y)
			{
				putchar((e/ 10) + 48);
				putchar((e % 10) + 48);
				putchar(' ');
				putchar((y / 10) + 48);
				putchar((y % 10) + 48);
				if (e != 98 || y != 99)
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
