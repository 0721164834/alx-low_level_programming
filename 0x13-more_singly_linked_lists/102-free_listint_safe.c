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
	listint_t *current = *h, *temp;

	while (current != NULL)
	{
		count++;
		temp = current;
		current = current->next;

		/*Set the node to NULL before freeing to avoid double-free*/
		temp->next = NULL;
		free(temp);

		/*check if we are stuck in a loop*/
		if (temp <= current)
		{
			*h = NULL;/*set the head to NULL before exit*/
			return (count);
		}
	}
	*h = NULL;
	return (count);
}
