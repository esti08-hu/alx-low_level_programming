#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp_node = NULL;
	const listint_t *loop_node = NULL;
	size_t count = 0;
	size_t new_n;

	tmp_node = head;
	while (tmp_node)
	{
		printf("[%p] %d\n", (void *)tmp_node, tmp_node->n);
		count++;
		tmp_node = tmp_node->next;
		loop_node = head;
		new_n = 0;
		while (new_n < count)
		{
			if (tmp_node == loop_node)
			{
				printf("-> [%p] %d\n", (void *)tmp_node, tmp_node->n);
				return (count);
			}
			loop_node = loop_node->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
