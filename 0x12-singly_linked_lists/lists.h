#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*struct list_s - singly linked list
*@str: string 
*@len: lenght of the string
*@next: points to the next node
*/
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;
int _putchar(char c);
int _strlen(const char *str);
size_t print_list(const list_t *h);
