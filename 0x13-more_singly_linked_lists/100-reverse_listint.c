#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *current;
    listint_t *prev;
    	listint_t *next_node;
	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	prev = NULL;
	current = *head;

	while (current != NULL)
	{
		next_node = current->next;

		current->next = prev;

		prev = current;
		current = next_node;
	}

	*head = prev;

	return (prev);
}
