#ifndef lists
#define lists
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*** Project 0x12 ***/

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/** prints elements in list **/
size_t print_list(const list_t *h);

/** Returns length of linked list **/
size_t list_len(const list_t *h);

/** Adds a new node at the beginning of a linked list **/
list_t *add_node(list_t **head, const char *str);

/** Adds a new node at the tail of the list **/
list_t *add_node_end(list_t **head, const char *str);

/** Frees a list in memory **/
void free_list(list_t *head);

/*** Project 0x13 ***/

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/** Prints all elements in a listint_t list **/
size_t print_listint(const listint_t *h);

/** Returns the number of elements **/
size_t listint_len(const listint_t *h);

/** Adds a node to the start of a linked list **/
listint_t *add_nodeint(listint_t **head, const int n);
#endif /** lists **/