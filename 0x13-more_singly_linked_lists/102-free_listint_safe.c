#include "lists.h"

/**
 * free_listint_safe - frees a list and sets head to NULL
 * @h: list of type listint_t
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
listint_t *current;
size_t memory_freed = 0;

if (h == NULL)
return 0;

while (*h != NULL)
{
current = (*h)->next;
memory_freed += sizeof(*h);
free(*h);
*h = current;
}

return memory_freed;
}
