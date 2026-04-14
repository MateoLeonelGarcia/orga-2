#ifndef LIST_H
#define LIST_H
#include "type.h"

typedef struct node
{
    void *data;
    struct node *next;
    struct node *prev;
} node_t;
typedef struct list
{
    type_t type;
    uint8_t size;
    node_t *first;
    node_t *last;
} list_t;

list_t *listNew(type_t t);
void listAddFirst(list_t *l, void *data); // copia el dato
void *listGet(list_t *l, uint8_t i);      // se asume: i < l->size
void *listRemove(list_t *l, uint8_t i);   // se asume: i < l->size
void listDelete(list_t *l);
void printList(list_t *l);
void swap(uint8_t x, uint8_t y, list_t *l);
node_t *nesimoNodo(uint8_t n, list_t *l);
void listAddLast(list_t *l, void *data);
#endif