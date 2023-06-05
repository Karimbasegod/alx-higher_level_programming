#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer value stored in the node
 * @next: points to the next node in the list
 *
 * Description: A structure representing a node in a singly linked list.
 *              It contains an integer value 'n' and a pointer 'next' that
 *              points to the next node in the list.
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif /* LISTS_H */
