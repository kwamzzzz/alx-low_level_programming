#include <stdio.h>

/**
 * main - the function that prints the sizeof each
 * data type listed below using the sizeof() operator
 * depending on the architecture of the cpu.
 * Return: 0
 */

int main(void)
{

	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
