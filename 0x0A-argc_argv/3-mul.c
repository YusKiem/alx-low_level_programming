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

	if (argc <= 2)
	{
		printf("Error");
		printf("\n");
	}
	else
		printf("%d\n", (mul * atoi(argv[1]) * atoi(argv[2])));
	return (0);
}
