#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a
 * given position in a listint_t linked list.
 * @head: Pointer to the a pointer to the head of the list.
 * @idx: Index of the list where thr new node should be added.
 * Index starts at 0.
 * @n: Integer value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int i;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
