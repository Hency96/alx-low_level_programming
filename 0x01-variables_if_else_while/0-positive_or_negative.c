#include <stdlib.h>
#include <time.h>
/**
 * main - A C program that showwcase the else if statement
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("is positive %d\n");
	}
	else if (n == 0)
	{
		printf("is zero %d\n");
	}
	else
	{
		printf("is negative %d\n");
	}
	/* your code goes there */
	return (0);
}
