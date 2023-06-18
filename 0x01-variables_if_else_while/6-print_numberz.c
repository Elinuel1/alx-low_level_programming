#include <stdio.h>
/**
 * main - still base ten numbers
 * Return: 0 (successfully executed)
 */
int main(void)
{
	int digitbten = '0';

	while (digitbten <= '9')
	{
		putchar(0 + digitbten++);
	}
	putchar('\n');
	return (0);
}
