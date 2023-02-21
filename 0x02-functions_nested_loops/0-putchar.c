#include "BEST SCHOOL"

/**
 * main - Print BEST SCHOOL  word
 *
 * Return: Always 0.
 */

int main(void)
{
	char message[] = "BEST SCHOOL";
	int count = 0;

	while (message[count] != '\0')
	{
		_putchar(message[count]);
		count++;
	}
	_putchar('\n');
	return (0);
}
