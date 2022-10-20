#include "lists.h"
/**
*free_list - 2 func description
*@head: head of node
*Return: void
*/
void free_list(list_t *head)
{
while (head)
{
free(head->str);
free(head);
head = head->next;
}
}
