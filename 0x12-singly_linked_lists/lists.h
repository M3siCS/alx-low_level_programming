#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @lel: lenght of the string
 * @next: point to the next node
 *
 * Description: singly linked list node structure
*/
typedef struct list_s
{
	char str;
	unsigned int len;
	struct list_snext;
} list_t;
int _putchar(char c);
int _strlen(char *s);
size_t print_list(const list_t h);
size_t list_len(const list_th);
list_t add_node(list_t **head, const charstr);
list_t add_node_end(list_t **head, const charstr);
void free_list(list_t *head);
void _constructor (void) __attribute__ ((constructor));

#endif
