#include "lists.h"

/**
 * free_listint2 - Free a listint_t list and sets the head to NULL.
 * @head: pointer to a pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next_node;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		next_node = current;
		current = next_node->next;
		free(next_node);
	}
	*head = NULL;
}
