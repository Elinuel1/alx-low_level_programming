#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lower case
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char t;
	int r;

	r = 0;

	while (r < 10)
	{
		t = 'a';
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
	}
}
