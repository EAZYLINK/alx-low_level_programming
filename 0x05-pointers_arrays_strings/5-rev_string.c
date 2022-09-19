#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter
 */

void rev_string(char *s)
{
int i = 0;
int j, k;
char a, b;
while (s[i] != '\0')
{
i++;
}
j = i - 1;
k = j/2;
while (k >= 0)
{
a = s[j - k];
b = s[k];
s[k] = a;
s[j-k] = b;
k--;
}
}
