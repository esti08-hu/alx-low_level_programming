#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			exit(98);
		}

		current = current->next;
	}

	return (count);
}
