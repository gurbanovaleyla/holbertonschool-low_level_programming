#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head->next; /* save next node */
		free(head->str);      /* free string */
		free(head);           /* free node */
		head = current;       /* move to next */
	}
}
