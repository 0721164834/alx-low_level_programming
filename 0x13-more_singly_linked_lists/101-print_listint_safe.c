#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Poointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp = NULL, *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current >= current->next && current->next != NULL)
		{
			temp = current->next;
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
		current = current->next;
	}
	return (count);
}
