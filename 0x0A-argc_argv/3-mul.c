#include <stdlib.h>
#include <stdio.h>

/**
  * main - multiplies two numbers
  * @argc: counter
  * @argv: arg vector
  * Return: zero toujours
  */

int main(int argc, char *argv[])
{
	int mul = 1;

	mul = mul * atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
	printf("%d\n", mul);
	return (0);
}
