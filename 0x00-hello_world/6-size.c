#include <stdio.h>
/**
 * main - A program that print different type sizes
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("size of long logn int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
return (0);
}

