#include <stdio.h>
/**
 * main - reverse order alphabets
 * Return: 0 (successfully executed)
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
