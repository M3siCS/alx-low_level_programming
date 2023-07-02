#include "main.h"

/**
 * _strncpy - A function that copies a string 
 *
 * @dest: pointer to destinatoin input buffer
 * @str: pointer to source input buffer
 * @n: bytes of @src
 *
 * Return: @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/**
	 * iterate through src arry
	 * where if there is no null byte
	 * among the first n bytes of source
	 * the string plased in dest will not be null treminated
	*/
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	/**
	 * if the length of curce is less than n
	 * write additional nullpytes to dest to
	 * ensure that a total  of n bytes is written
	*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
