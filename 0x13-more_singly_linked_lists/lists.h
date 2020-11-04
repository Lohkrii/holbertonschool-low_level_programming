#ifndef lists
#define lists
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Prints a char **/
int _putchar(char c);

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

/** Adds a node at the tail of a linked list **/
listint_t *add_nodeint_end(listint_t **head, const int n);

/** Frees a linked list **/
void free_listint(listint_t *head);

/** Frees a linked list **/
void free_listint2(listint_t **head);

/** Frees the head of a linked list **/
int pop_listint(listint_t **head);

/** Returns the nth node **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

/** Returns the sum of all n elements in a linked list **/
int sum_listint(listint_t *head);

/** Inserts a node at a specified place **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

/** Deletes a node at the specified index **/
int delete_nodeint_at_index(listint_t **head, unsigned int index);

/** Reverses a linked list **/
listint_t *reverse_listint(listint_t **head);
#endif /** lists **/
