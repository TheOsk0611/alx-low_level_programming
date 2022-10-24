#include "lists.h"
/**
*free_listint - free
*@head: head
*Return: void
*/
void free_listint(listint_t *head)
{
listint_t *new;
while (head)
{
new = head;
head = head->next;
free(new);
}
}
