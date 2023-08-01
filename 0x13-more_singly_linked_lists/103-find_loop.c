#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *dog, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);
	dog = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		dog = dog->next;
		hare = hare->next->next;

		if (dog == hare)
		{
			dog = head;
			while (dog = hare)
			{
				dog = dog->next;
				hare = hare->next;
			}
			return (hare);
		}
	}
	return (NULL);
}
