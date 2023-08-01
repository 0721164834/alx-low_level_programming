#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted. index starts at 0.
 *
 * Return: 1 if it succeeded
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *temp = NULL;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	temp = current->next;
	if (temp == NULL)
		return (-1);
	current->next = temp->next;
	free(temp);
	return (1);
}
