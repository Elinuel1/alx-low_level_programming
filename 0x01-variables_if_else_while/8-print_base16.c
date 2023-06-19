#include <stdio.h>
/**
 * main - Prints hexadecimals
 * Return: 0 (successfully executed)
 */
int main(void)
{
	int t;
	int l;

	for (t = '0'; l <= '9'; t++)
	{
		putchar(t);
	}
	for (l = 'a'; l <= 'f'; l++)
	{
		putchar(l)
	}
	putchar('\n');
	return (0);
}
