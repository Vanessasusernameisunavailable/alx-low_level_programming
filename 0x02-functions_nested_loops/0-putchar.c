#include "main.h"

/**
 * main - Print main.h
 *
 * Return: Always 0.
 */

int main(void)
{
	char message[] = "main.h";
	int count = 0;

	while (message[count] != '\0')
	{
		_putchar(message[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
