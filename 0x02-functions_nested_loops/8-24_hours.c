#include "main.h"
/**
* jack_bauer - prints 24 hour clock
*h = hour, m = min
*breaks before passing 24:00
*Return: 24 hour
*/
void jack_bauer(void)
{
int h, m;
for (h = 0; h < 24; h++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}

}
