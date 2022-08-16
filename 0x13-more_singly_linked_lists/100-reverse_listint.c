#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);

	copy = *head;
	temp = NULL;

	while (*head != NULL)
	{
		copy = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = copy;
	}

	*head = temp;
	return (*head);
}
