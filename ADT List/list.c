#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

struct node {

    item value;
    struct node *next;


};
 
list newList(void) {

    return NULL;


}

int emptyList(list l) {

    return l == NULL;

}

list consList(item val, list l) {

    struct node *new;
    new=malloc(sizeof(struct node));
    if (new != NULL) {
        new->value=val;
        new->next=l;
        l=new;

    }

    return l;

}

list tailList(list l) {

    list temp;

    if (l != NULL) 
        temp=l->next;
    else
        temp=NULL;

    return temp;


}

item getFirst(list l) {

    item e;

    if(l != NULL)
    e=l->value;
else
    e=NULLITEM;

return e;

}

int sizeList (list l) { // Restituisce la dimensione della lista

    int n=0;

while (!emptyList(l)) 
    {
        n++;
        l=tailList(l);
    }

return n;

}

int posItem (list l, item val) {

int pos=0;
int found=0;

    while(!emptyList(l) && !found) {

        if(eq(getFirst(l),val))
        found=1;
        else {

            pos++;
            l=tailList(l);

        }

    }

if(!found)
pos=-1;

return pos;

}

int getItem(list l, int pos) {

item e;
int i=0;

while (i<pos && !emptyList(l)) {

i++;
l=tailList(l);

}

if (!emptyList(l))
e=getFirst(l);
else
e=NULLITEM;

return e;

}

list reverseList(list l) {

list l1;
item val;

l1=newList();

while (!emptyList(l)) {

val=getFirst(l);
l1=consList(val,l1);
l=tailList(l);
}

    return l1;
}

void outputList(list l) {

int i=0;
item val;

while (!emptyList(l)) {

val=getFirst(l);
printf("Elemento di posizione %d:", i);
output_item(val);
printf("\n");
l=tailList(l);
i++;

                    }

}


list inputList(int n) {

item val;
int i;

list l=newList();

for (i=0; i<n; i++) {

printf("Elemento di posizione %d:", i);
input_item(&val);
l=consList(val, l);

                }

                return reverseList(l);


}
