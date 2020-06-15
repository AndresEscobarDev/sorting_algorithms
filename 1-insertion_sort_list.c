#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: List to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *tmp;

	if (list && list[0] && list[0]->next)
		current = (*list)->next;

	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			tmp->prev->next = tmp->next;
			tmp->next = tmp->prev;
			tmp->prev = tmp->next->prev;
			tmp->next->prev = tmp;
			if (tmp->prev)
				tmp->prev->next = tmp;
			else
				*list = tmp;
			if (tmp->next->next)
				tmp->next->next->prev = tmp->next;
			print_list(*list);
		}
	}
}
