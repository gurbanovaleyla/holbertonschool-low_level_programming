#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: pointer to the head of the list
 * @idx: index where the new node should be added (starting from 0)
 * @n: integer value for the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (!h)
        return (NULL);

    /* If index is 0, use add_dnodeint (adds at the beginning) */
    if (idx == 0)
        return (add_dnodeint(h, n));

    current = *h;
    i = 0;

    /* Traverse the list to find the node before the desired index */
    while (current != NULL && i < idx - 1)
    {
        current = current->next;
        i++;
    }

    /* If current is NULL, the index is out of bounds */
    if (current == NULL)
        return (NULL);

    /* If current->next is NULL, we're adding at the end */
    if (current->next == NULL)
        return (add_dnodeint_end(h, n));

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;

    /* Insert the new node between current and current->next */
    new_node->next = current->next;
    new_node->prev = current;
    current->next->prev = new_node;
    current->next = new_node;

    return (new_node);
}
