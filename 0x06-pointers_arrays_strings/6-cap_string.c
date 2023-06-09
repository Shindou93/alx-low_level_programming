#include "main.h"
#include <stdio.h>

/**
 * cap_string - check the code
 *@str: input string.
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	for (i = 1; str[i] != '\0'; i++)
	{
		if ((str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n' ||
					str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
					str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
					str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
					str[i - 1] == '}') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
	}
	return (str);
}
