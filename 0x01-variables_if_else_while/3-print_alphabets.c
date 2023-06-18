#include <stdio.h>
/**
 * main - prints alphABETS
 * Return: 0 (successfully executed)
 */
int main(void)
{
	char lowalpha = 'a';
	char upalpha = 'A';

	/* start of lowalpha */
	while (lowalpha <= 'z')
	{
		putchar (lowalpha);
		lowalpha++;
	}

	/* start of upalpha */
	while (upalpha <= 'Z')
	{
		putchar (upalpha);
		upalpha++;
	}
	putchar ('\n');
	return (0);
}
