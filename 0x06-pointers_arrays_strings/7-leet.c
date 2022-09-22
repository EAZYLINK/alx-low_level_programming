#include "main.h"

/**
 * leet - encode 1337 characters
 * @str: paramter
 * Return: encoded characters
 */

char *leet(char *str)
{
	int stringCount, leetCount;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

/*  scan through string */
	stringCount = 0;
	while (str[stringCount] != '\0')
/* check whether leetLetter is found */
	{
		leetCount = 0;
		while (leetCount < 10)
		{
			if (leetLetters[leetCount] == str[stringCount])
			{
				str[stringCount] = leetNums[leetCount];
			}
			leetCount++;
		}
		stringCount++;
	}
	return (str);
}
