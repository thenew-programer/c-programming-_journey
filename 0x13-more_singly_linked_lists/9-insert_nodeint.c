#include "lists.h"

/**
* insert_nodeint_at_index - insert a new node at a given position.
* @head: pointer to pointer that points...
* @idx: position.
* @n: data.
* Return: created node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *tmp, *current;
	unsigned int i;


	if (!*head && idx != 0)
		return (NULL);

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	for (i = 0; (i < idx) && (current); i++)
	{
		tmp = current;
		current = current->next;
	}
	if (!current)
	{
		free(newNode);
		return (NULL);
	}


	newNode->next = current;
	tmp->next = newNode;
	return (newNode);
}
