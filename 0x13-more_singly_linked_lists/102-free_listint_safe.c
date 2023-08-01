#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	const listint_t *slow = *h;
	const listint_t *fast = *h;
	const listint_t *tmp;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		tmp = slow;
		slow = slow->next;
		free((void *)tmp);
		count++;
		if (slow == fast)
		{
			tmp = slow;
			slow = slow->next;
			free((void *)tmp);
			break;
		}
	}

	while (*h != NULL)
	{
		tmp = *h;
		*h = (*h)->next;
		free((void *)tmp);
		count++;
	}

	return (count);
}
