#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count;

	count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		count++;

		if (head <= head->next)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			exit(98);
		}

		head = head->next;
	}

	return (count);
}
