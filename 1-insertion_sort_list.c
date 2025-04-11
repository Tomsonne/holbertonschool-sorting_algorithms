#include "sort.h"
/**
 * insertion_sort_list - F
 * @list: struct.
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
listint_t *current, *tmp, *prv, *nxt;

if (list == NULL || *list == NULL || (*list)->next == NULL)
{
return;
}

current = (*list)->next;

for (; current != NULL ;)
{
tmp = current;
for (; tmp->prev && tmp->n < tmp->prev->n ;)
{
prv = tmp->prev;
nxt = tmp->next;

if (prv->prev != NULL)
{
prv->prev->next = tmp;
}
tmp->prev = prv->prev;
tmp->next = prv;
prv->prev = tmp;
prv->next = nxt;
if (nxt != NULL)
{
nxt->prev = prv;
}
if (tmp->prev == NULL)
{
*list = tmp;
}
print_list(*list);
}
current = current->next;
}
}
