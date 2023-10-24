#include "sort.h"

void swap_node_ahead(listint_t **lst, listint_t **ail, listint_t **shk);
void swap_node_behind(listint_t **lst, listint_t **ail, listint_t **shk);
void cocktail_sort_list(listint_t **list);

/**
 * swap_node_ahead - Swaps a node with the node
 * ahead of it in a doubly linked list.
 * @lst: Pointer to the list's head.
 * @ail: Pointer to the list's tail.
 * @shk: Pointer to the node to be swapped.
 * Return : Nothing
 */
void swap_node_ahead(listint_t **lst, listint_t **ail, listint_t **shk)
{
	listint_t *tmp = (*shk)->next;

	if ((*shk)->prev != NULL)
		(*shk)->prev->next = tmp;
	else
		*lst = tmp;
	tmp->prev = (*shk)->prev;
	(*shk)->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = *shk;
	else
		*ail = *shk;
	(*shk)->prev = tmp;
	tmp->next = *shk;
	*shk = tmp;
}

/**
 * swap_node_behind - Swaps a node with
 * the node behind it in a doubly linked list.
 * @lst: Pointer to the list's head.
 * @ail: Pointer to the list's tail.
 * @shk: Pointer to the node to be swapped.
 * Return : Nothing
 */
void swap_node_behind(listint_t **lst, listint_t **ail, listint_t **shk)
{
	listint_t *tmp = (*shk)->prev;

	if ((*shk)->next != NULL)
		(*shk)->next->prev = tmp;
	else
		*ail = tmp;
	tmp->next = (*shk)->next;
	(*shk)->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = *shk;
	else
		*lst = *shk;
	(*shk)->next = tmp;
	tmp->prev = *shk;
	*shk = tmp;
}

/**
 * cocktail_sort_list - Sorts a doubly linked list
 * using the Cocktail Shaker Sort algorithm.
 * @list: Pointer to the head of the doubly linked list.
 * Return : Nothing
*/
void cocktail_sort_list(listint_t **list)
{
	listint_t *ail, *shk;
	bool stirred = false;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (ail = *list; ail->next != NULL;)
		ail = ail->next;

	while (stirred == false)
	{
		stirred = true;
		for (shk = *list; shk != ail; shk = shk->next)
		{
			if (shk->n > shk->next->n)
			{
				swap_node_ahead(list, &ail, &shk);
				print_list((const listint_t *)*list);
				stirred = false;
			}
		}
		for (shk = shk->prev; shk != *list;
				shk = shk->prev)
		{
			if (shk->n < shk->prev->n)
			{
				swap_node_behind(list, &ail, &shk);
				print_list((const listint_t *)*list);
				stirred = false;
			}
		}
	}
}
