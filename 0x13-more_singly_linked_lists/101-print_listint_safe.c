#include "lists.h"
/**
 * print_listint_safe - prints a linked list safely, even if it has a loop
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the linked list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t node_count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		printf("[%p] %d\n", (void *)slow, slow->n);
		node_count++;
		if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}
	}
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		node_count++;
		head = head->next;
	}
	return (node_count);
}
