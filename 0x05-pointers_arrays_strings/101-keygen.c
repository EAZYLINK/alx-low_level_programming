#include <stdlib.h>
#include "main.h"
#include <time.h>

/**
 * main - Entry point
 * Return: returns 0
 */

int main(void)
{
int password, sum;
srand(time(NULL));
sum = 0;
while (sum <= 2645)
{
password = rand() % 128;
aum += password;
printf("%c", password);
}
printf("%c", 2772 - sum);
return (0);
}
