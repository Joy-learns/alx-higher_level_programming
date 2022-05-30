#include "lists.h"

/**
 * check_cycle - checks if a singly list link has a cycle
 * @list: the linked list
 * Return: 0 if no cycle and 1 there is cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);
	while (slow && fast)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}
	return (0);
}
