#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current = *h, *temp = NULL;

	while (current != NULL)
	{
		count++;
		if (current >= current->next && current->next != NULL)
		{
			temp = current->next;
			current->next = NULL;
			free(temp);
			break;
		}
		temp = current;
		current = current->next;
		free(temp);
	}
	*h = NULL;
	return (count);
}
