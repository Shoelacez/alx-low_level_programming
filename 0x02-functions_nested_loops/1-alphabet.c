#include"main.h"
/**
 * print_alphabet - utilizes on the _putchar function to print
 * Description: prints _putchar using putchar prototype
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char v;

	for (v = 'a'; v <= 'z'; ++v)
		_putchar(v);
	_putchar('\n');
}
