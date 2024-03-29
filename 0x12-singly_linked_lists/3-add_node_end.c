#include "lists.h"
/**
*_strlen - adds node
*@str: pointer to pointer
*Return: lenght
*/
int _strlen(const char *str)
{
unsigned int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}
/**
*add_node_end - add node to linked list
*@head: double pointer
*@str: struct pointer
*Return: new element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *list, *end_node;
end_node = malloc(sizeof(list_t));
if (end_node == NULL)
{
return (NULL);
}
end_node->str = strup(str);
end_node->len = _strlen(str);
end_node->next = NULL;
if (*head == NULL)
{
*head = end_node;
}
else
{
list = *head;
while (list->next)
{
list = list->next;
}
list->next = end_node;
}
return (end_node);
}
