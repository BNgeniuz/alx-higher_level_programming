#include "lists.h"

/**
 * check_cycle - verify if singly list exists in a cycle
 * @list: singly list to input
 *
 * Return: 0 (Always a success)
 */
int check_cycle(listint_t *list)
{
        listint_t *slow = list;
        listint_t *fast = list;

        if (!list)
                return (0);

        while (slow && fast && fast->next)
        {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast)
                        return (1);
        }

        return (0);
}
