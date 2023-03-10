#include "main.h"

/**
 * _strstr - first occurrence of the substring needle in the string hay
 * @haystack: main str to be examined
 * @needle: searched in haystack
 * Retrun: return 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variable*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2)
		{
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
