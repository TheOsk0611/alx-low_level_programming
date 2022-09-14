#include "main.h"
/**
 *main -Print "_putchar" from character array
 *Return: 0
 */
int main(void)
{
char putchar[] = "_putchar";
int i = 0;


while (putchar[i] != '\0')
{
_putchar(putchar[i]);
i++;
}

_putchar('\n');

return (0);
}
