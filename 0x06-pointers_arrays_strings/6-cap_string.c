#include "main.h"
#include <stddef.h>

/**
 * cap_string - check the code
 * @strs: char pointer as an input
 * Description: Pointers manipulation
 * Return: uppercase string point
 */
char *cap_string(char *strs)
{
	int i = 0;

	while (*strs != '\0')
	{
		if (*strs == ',' ||
		*strs == ';' ||
		*strs == '.' ||
		*strs == '!' ||
		*strs == '?' ||
		*strs == '"' ||
		*strs == '(' ||
		*strs == ')' ||
		*strs == '{' ||
		*strs == '}' ||
		*strs == ' ' ||
		*strs == '\n' ||
		*strs == '\t')
		{
			strs++;
			i++;
			if (*strs >= 'a' && *strs <= 'z')
			{
				*strs = *strs - 32;
			} else
			{
				strs--;
				i--;
			}
		}
		strs++;
		i++;
	}
	strs = strs - i;

	return (strs);
}
