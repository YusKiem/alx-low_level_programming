#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: size
  * Return: newly allocated space in memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, m = 0;
	char *p = (char *)malloc((strlen(s1) + n) * sizeof(char));

	/*checking if s1 is not empty*/
	if (s1 == NULL)
		s1 = "";

	/*testing if s2 is not empty*/
	if (s2 == NULL)
		s2 = "";

	/*concatenating s1 to p*/
	for (i = 0; i < (strlen(s1) - 1); i++)
		*(p + i) = (*s1 + i);

	/*concatenating n bytes of s2 to p*/
	while ((m < n) && (*(s2 + m) != '\0'))
	{
		*(p + i) = (*s2 + m);
		i++;
		m++;
	}
	*(p + i) = '\0';
	return (p);
}
