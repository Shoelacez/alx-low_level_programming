#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed
 * if the number is greater than 0: is positive, if the number is 0: is zero
 * if the number is less than 0: is negative, followed by a new line
 * Return: 0
 */
int main(void)

{

	int n = 48;

	int com = 44;

	while (n <= 57)

	{

		putchar(n);

		if (n != 57)

		{

			putchar(com);

			putchar(32);

		}

		n += 1;

	}

	putchar('\n');

	return (0);

}
