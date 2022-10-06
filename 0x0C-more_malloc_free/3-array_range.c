#include "main.h"

/**
  * array_range - create an int array
  *
  * @min: min no o elements
  * @max: max no of elements
  *
  * Return: array pointer add NULL in case of any failure
  */

int *array_range(int min, int max)
{
	int x, *ar;

	if (min > max)
		return (NULL);

	ar = malloc((max - min + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
	{
		*(ar + x) = min;
		min++;
	}
	return (ar);
}
