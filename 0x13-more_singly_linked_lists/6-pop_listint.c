#include "lists.h"

/**
 * pop_listint - Deletes the node of all a listint_t
 * linked list and returns the head node's data (n).
 * @head: Pointer to a pointer to the head of the list
 *
 *
 * Return: The data (n) of the deleted head
 * node, or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
