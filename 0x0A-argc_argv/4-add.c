#include <stdio.h>
#include <stdlib.h> 
  
/** 
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

/**
*main - adds positive numbers
*@argc: number of arguments
*@argv: array of arguments
*Return: 0 on success, 1 on failure
*/

int main(int argc, char *argv[])
{
int i, j, sum = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (1);
}
}
<<<<<<< HEAD
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
=======
sum  +=  atoi(argv[i]);
}
printf("%d\n",  sum);
return (0);
}
>>>>>>> cc355f67f783c76d59cd68d6d0b200aa073d70b9
