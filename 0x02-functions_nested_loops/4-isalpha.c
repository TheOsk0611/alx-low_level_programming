#include "main.h"
/**
*_isalpha - Check is character is alphabetic
*@c: type int character
*Return 1 (letter) 0 (other)
*/

int _isalpha(int c)
{

if
(((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))

return (1);

else

return (0);
}
