#include "lists.h"
/**
*listint_len - return n of elemets
*@h: struct
*Return: sizet_t
*/
size_t listint_len(const listint_t *h)
{
unsigned int index = 0;
while (h != NULL)
{
h = h->next;
index++;
}
return (index);
}
