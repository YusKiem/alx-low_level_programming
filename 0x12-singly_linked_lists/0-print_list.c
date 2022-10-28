#include "lists.h"

/**
 *print_list - function to print nodes of a linked list
 *
 * @h: pointer to the first node
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t node_count = 1;

	/*return 0 if h is empty*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (nil)\n", 0);
		else
			printf("[%d] %s\n", h->len, h->str);
		/*go to next node*/
		h = h->next;
		/*count number of nodes*/
		node_count += 1;
	}
	/*print the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (node_count);
}
