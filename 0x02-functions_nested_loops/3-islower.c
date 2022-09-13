#include "main.h"

/**
 * _islower - checks if character is lower case
 * c: parameter to be checked
 * return: either 1 or 0 based  on output
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
