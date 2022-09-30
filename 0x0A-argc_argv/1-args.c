#include <stdlib.h>
#include <stdio.h>

/**
  * main - prints a number
  * @argc: counter of args
  * @argv: args vector
  * Return: zero
  */

int main(int argc, char *argv[])
{
	argv[argc] = argv[argc - 1];
	printf("%d\n", argc - 1);
	return (0);
}
