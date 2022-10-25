#include "lists.h"
/**
*find_listint_loop - finds loop
*@head: pointer to head
*Return: listint_t
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
slow = head;
fast = head;
if (!head)
{
return (NULL);
}
while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
