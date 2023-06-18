#include <stdio.h>
/**
 * main - print base ten numbers from zero
 * Return: 0 (successfully executed)
 */
int main(void)
{
	int digitbten = '0';

	while (digitbten <= '9')
	{
		putchar(digitbten);
		digitbten++;
	}
	putchar('\n');
	return (0);
}
