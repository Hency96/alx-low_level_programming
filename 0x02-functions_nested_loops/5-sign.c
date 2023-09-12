include "main.h"
/**
* print_sign - prints the sign of a number
* @n: the int to check
* Return: 1 and prints + if n is greater than zero
* 0 and prints 0 if n is zero
* -1 and prints - if n is less than zero
*/

int print_sign(int n)
{
	int n;
	if (n > 0)
	{
		printf(" + \n ");
		return (1);
	}
	else  if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("0");
		return (-1);
	}
}
