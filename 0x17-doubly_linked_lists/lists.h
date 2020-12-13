#ifndef LISTS_L
#define LISTS_L

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * for Holberton project
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/** Prints a dlistint_t list **/
size_t print_dlistint(const dlistint_t *h);

/** Returns the number of linked elements **/
size_t dlistint_len(const dlistint_t *h);

/** Adds a new node at the beginning of a list **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

/** Adds a new node at the end of a list **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

/** Frees a dlistint_t list **/
void free_dlistint(dlistint_t *head);

/** Returns the nth node of a list **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

/** Returns the sum of all the data in a list **/
int sum_dlistint(dlistint_t *head);

/** Inserts a new node at a given position **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/** Deletes a node at a given index of the list **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif
