#include "lists.h"

/**
 * pop_listint -A function that deletes the head node of a linked list
 * @head: The first element pointed to in the linked list
 * Return: The data present:x
 * the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
