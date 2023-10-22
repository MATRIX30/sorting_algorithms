#include "sort.h"
/**
 * insertion_sort_list - algorithm to sort elements
 * @list: list of integers
 *
 * Description: sorts a doubly linked list of integers
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *prev, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current;
		prev = current->prev;

		while (prev != NULL && temp->n < prev->n)
		{
			if (temp->next != NULL)
				temp->next->prev = prev;

			prev->next = temp->next;

			if (prev->prev != NULL)
				prev->prev->next = temp;

			temp->prev = prev->prev;
			prev->prev = temp;
			temp->next = prev;

			if (temp->prev == NULL)
				*list = temp;
			else
				temp->prev->next = temp;

			prev = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
