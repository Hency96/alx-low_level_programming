#include <stdio.h>
/**
 * main - this program prints the lowercase alphabet in reverse format.
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
