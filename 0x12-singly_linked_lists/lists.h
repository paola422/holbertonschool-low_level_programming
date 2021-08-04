#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - list singly linked
 * @str: string - malloc'ed string
 * @len: length string lengh
 * @next: next node point
 * Description: linked singly list structure node
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif /* _LISTS_H_ */
