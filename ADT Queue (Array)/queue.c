#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "queue.h"

#define MAXQUEUE 100

struct c_queue {
item *vet;
int size; //dimensione coda
int num_elem; //numero di elementi in coda
int head, tail;


};


queue newQueue(int maxSize) {

struct c_queue *q=malloc(sizeof(struct c_queue));

if (q==NULL) return NULL;

if (maxSize <= 0)
    q->size=MAXQUEUE; //max di default
else q->size=maxSize; //max di input

q->vet=malloc(q->size * sizeof(item));

if (q->vet==NULL) {

free(q);
return NULL;
}

q->num_elem=0; //se la coda è vuota q->head e q->tail sono indefiniti
return q;

}

int emptyQueue(queue q) {

if (q==NULL) return -1;
return q->num_elem=0;


}

int enqueue (item val, queue q) {

if(q==NULL) return -1;

if (q->num_elem == q->size) return 0;

if (q->num_elem==0)
    q->head=q->tail=0;
else q->tail= (q->tail +1) % q->size;

q->vet[q->tail]=val;
q->num_elem++;
return 1;

}


item dequeue (queue q) {

if (q==NULL) return NULLITEM;
if (q->num_elem==0) return NULLITEM;

item result=q->vet[q->head];
q->head=(q->head+1) % q->size; //operatore % per gestione circolare
q->num_elem--;
return result;


}

void outputQueue(queue q) {

if (q==NULL) return;

if(q->num_elem==0) return;

int pos;

for(pos=q->head; pos != q->tail; pos=(pos+1)%q->size)
     output_item(q->vet[pos]);
output_item(q->vet[q->tail]);

}