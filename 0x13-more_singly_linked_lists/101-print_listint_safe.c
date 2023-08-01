#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: Poointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	listint_t *prev = NULL, *current = *head;

	while (current != NULL)
	{
		*head = (*head)->next;
		current->next = prev;
		prev = current;
		current = *head;
	}
	*head = prev;
	return (*head);
}
