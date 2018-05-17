#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
#define MAX 60


int main (void) {


int el,n, pos, *ptr, *ptr2, min;
int array[MAX]={4,21,34,56,73,21,11,32};
int arrayOrd[MAX]={2,4,7,11,15,65,88,100};
ptr=array;
ptr2=arrayOrd;
n=8;
el=66;
pos=4;
min=0;
/*
arr_ins(ptr, &n, el, pos);
arr_print(ptr);
printf("\n \n");
arr_del(ptr, &n, pos);
arr_print(ptr);
printf("\n \n");
find_min(ptr, &n, &min);
printf("%d", min);
linear_search(ptr,&n,&el);
binary_search_ord(ptr2, &n, &el);
//ORD

int ordN=8;
int ordEl=88;

linear_search_ord(ptr2, &ordN, &ordEl);
printf("\n \n");
*/

bubblesort(ptr, n);
arr_print(ptr);


return 0;

}




