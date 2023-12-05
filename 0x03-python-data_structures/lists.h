#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_c - singly linked list
 * @m: integer
 * @ptr: points to the next node
 *
 * Description: singly lists
 */
typedef struct listint_c
{
	int m;
	struct listint_c *ptr;
} listint_t;

size_t print_listint(const listint_t *t);
listint_t *add_nodeint_end(listint_t **tail, const int m);
void free_listint(listint_t *tail);

int is_palindrome(listint_t **tail);

#endif /* LISTS_H */
