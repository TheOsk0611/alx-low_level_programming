#include "lists.h"
/**
*sum_listint - sum of all data
*@head: head of node
*Return: void
*/
int sum_listint(listint_t *head)
{
unsigned in count = 0;
while (head != NULL)
{
count += head->n;
head = head->next;
}
return (count);
}
