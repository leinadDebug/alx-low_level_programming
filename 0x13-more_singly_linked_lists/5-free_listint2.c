#include "lists.h"

/**
*free_listint2 - frees a linked list
*@head: pointer to the head of the list
*
*Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head) != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	free(*head);
	*head = NULL;
}
