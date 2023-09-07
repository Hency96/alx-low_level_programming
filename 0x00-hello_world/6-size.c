#include <stdio.h>
/**
 * main - A program that print different type sizes
 * Return: 0(success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("size of char: %lu bytes(s)\n", sizeof(a));
printf("size of int: %lu bytes(s)\n", sizeof(b));
printf("size of long int: %lu bytes(s)\n", sizeof(c));
printf("size of long logn int: %lu bytes(s)\n", sizeof(d));
printf("size of float: %lu bytes(s)\n", sizeof(f));
return (0);
}

