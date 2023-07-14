#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	    n = len2;

	concatenated = malloc(sizeof(char) * (len1 + n + 1));

	if (concatenated == NULL)
		return (NULL);

	strncpy(concatenated, s1, len1);
	strncat(concatenated, s2, n);
	concatenated[len1 + n] = '\0';

	return (concatenated);
}

