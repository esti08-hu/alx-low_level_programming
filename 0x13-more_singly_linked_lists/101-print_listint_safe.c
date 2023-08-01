#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
        if (slow == fast)
		{
			printf("-> [%p] %d\n", (void *)fast, fast->n);
			exit(98);
		}	
		return (count);
	}
}
