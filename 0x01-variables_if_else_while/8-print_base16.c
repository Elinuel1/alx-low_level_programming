#include <stdio.h>
/**
 * main - print base sixteen
 * Return: 0 (successfully executed)
 */
int main(void)
{
	putchar('0');
	putchar('9' + 6 + ('a' - 'f'));
	putchar('\n');
	return (0);
}
