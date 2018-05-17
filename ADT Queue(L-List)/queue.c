#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "queue.h"

struct node {
    item value;
    struct node *next;
};

struct c_queue {
    struct node *head, *tail;
    int numel;

};

queue newQueue(void) {

    struct c_queue *q;
    q=malloc(sizeof(struct c_queue));
    if (q == NULL)
        return NULL;

    q->numel=0;
    q->head=NULL;
    q->tail=NULL;
    return q;

}

int emptyQueue (queue q) {

if (q==NULL)
    return -1;
return q->numel==0;

}

int enqueue (item val, queue q) {

if (q==NULL)
    return -1;

    struct node *nuovo;
    nuovo=malloc(sizeof(struct node));
    if (nuovo == NULL) return 0;

    nuovo->value=val;

    if (q->head==NULL)
        q->head=nuovo; // caso coda vuota
    else
        q->tail->next=nuovo; //caso coda non vuota

    q->tail=nuovo;
    (q->numel)++;
    return 1;

}


item dequeue (queue q)
{

if (q==NULL) return NULLITEM;
if(q->numel == 0) return NULLITEM; //coda vuota

item result = q->head->value; //item da restituire

struct node *temp= q->head; //nodo da rimuovere

q->head=q->head->next; //q->head avanza
free(temp); //liberiamo memoria nodo da rimuovere

if (q->head==NULL) //se la coda conteneva un solo elemento
    q->tail=NULL;

(q->numel)--;

return result;

}
