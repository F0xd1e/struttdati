#include "item.h"

typedef struct node *list;

list newList(void); // Post: l=nil
int emptyList(list l); // Post: if l=nil -> b=true or b=false
list consList(item val, list l); // -> list Prende un elemento ed una lista e ritorna la lista con l'elemento aggiunto
list tailList(list l);  // -> list ritorna l'ultimo elemento della lista
item getFirst(list l); // -> item primo elemento della lista
int posItem(list l, item val);
int getItem(list l, item val);
list reverseList(list l);
void outputList(list l);
list inputList(int n);
int removeList(list l, int n); // Da implementare assieme alle funzioni con *
int deleteList(list l); // *
list cloneList(list l); // *
void destroyList(list l); // *
