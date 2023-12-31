#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *current, *temp;

	if (!h || !*h)
		return (0);

	current = *h;

	while (current != NULL)
	{
		diff = current - current->next;

		if (diff > 0)
		{
			temp = current->next;
			free(current);
			current = temp;
			len++;
		}
		else
		{
			free(current);
			current = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
