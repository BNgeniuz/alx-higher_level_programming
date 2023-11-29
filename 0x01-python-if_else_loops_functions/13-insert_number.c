#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/**
 * insert_node - assorted singly-linked list insertion
 * @head: pointer input
 * @number: The number to input
 *
 * Return: 0 (Always success)
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	listint_t *node = NULL;

	if (!head)
		return (NULL);

	current = malloc(sizeof(listint_t));
	if (!current)
		return (NULL);

	current->n = number;
	current->next = NULL;

	if (!*head || (*head)->n > number)
	{
	current->next = *head;
	return (*head = current);
	}
	else
	{
		while (temp && temp->n < number)
		{
			node = temp;
			temp = temp->next;
		}

		node->next = current;
		current->next = temp;
	}
	return (current);
}
