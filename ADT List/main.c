#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "list.h"

int main (void) {

int n;
list test=newList();
test=consList(3, test);
test=consList(23, test);
test=consList(99, test);
test=consList(210, test);

n=posItem(test, 99);
printf("%d", n);
return 0;

}