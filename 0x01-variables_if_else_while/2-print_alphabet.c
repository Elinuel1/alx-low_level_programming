#include <stdio.h>
/**
 * main - program to print lowercase alphabets
 * Return: 0 (successfully executed)
 */
int main(void)
{
	char alphabet = 'b';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
