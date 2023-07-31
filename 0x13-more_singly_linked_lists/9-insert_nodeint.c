#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int count;
	listint_t *new_node;
	new_node = malloc(sizeof(listint_t));
    
	if (new_node == NULL)
	{
	    return (NULL);
	}
	new_node->n = n;
	if (*head == NULL && idx != 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0 || *head == NULL)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	count = 1;
	while (current != NULL && count < idx)
	{
		current = current->next;
		count++;
	}
	if (count < idx || (current == NULL && count == idx))
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
