#include <stdio.h>
#include <stdlib.h>
#include "adtarr.h"

struct ptr {

int *vec;
int el;

};

arrd create_vector(int n) {

int i;

arrd newest=malloc(sizeof (struct ptr));
newest->el=n;
newest->vec=malloc(n*sizeof(int));


}
