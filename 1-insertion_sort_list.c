#include "sort.h"

/**
 * insertion_sort_list - Function that sorts a doubly list in ascending order
 * @list: list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *temp;

	while (!*list || !(*list)->next)
		return;
	current = *list;
	while (current)
	{
		temp = current->prev;

		while (temp)
		{
			if (temp->n > current->n)
			{
				if (temp->prev)
					temp->prev->next = current;
				if (current->next)
					current->next->prev = temp;

				temp->next = current->next;
				current->next = temp;
				current->prev = temp->prev;
				temp->prev = current;
				if (!current->prev)
					*list = current;
				print_list(*list);
			}
			temp = temp->prev;
		}
		current = current->next;
	}
}
