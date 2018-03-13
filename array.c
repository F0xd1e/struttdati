#include <stdio.h>
#include <stdlib.h>
#define MAX 60

void arr_print(int *array);
void arr_ins(int *array, int *n, int el, int pos);
void arr_del(int *array, int *n, int pos);
void find_min(int *array, int *n, int *min);
void linear_search(int *array, int *n, int *el);
void linear_search_ord(int *arrayOrd, int *ordN, int *ordEl);
void binary_search_ord(int *arrayOrd, int *ordN, int *ordEl);

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

system ("pause");

return 0;

}

void arr_print(int *array) {
	
	int i;
	
	for (i=0; i<MAX; i++) {
		
		printf("%d", *(array+i));
		
	}
	
}

void arr_ins  (int *array, int *n, int el, int pos) {
	
	int i;
	
	for (i=*n; i>=pos; i--) {
		
		
		*(array+i)=*(array+i);
		
	}
	
	*(array+pos)=el;
	(*n)++;
	
	
}

void arr_del(int *array, int *n, int pos) {
	
	int i;
	
	for (i=pos; i<=*n; i++) {
		
		*(array+i)=*(array+i+1);
		
	}
	
	(*n)--;
	
	
}

void find_min(int *array, int *n, int *min) {
	
	int i;
*min=*array;

while (i<=*n)

	if (*min>*(array+i))
	*min=*(array+i);
	i++;
	
}

void linear_search(int *array, int *n, int *el) {
	
	int i;
	*el=11;
	for (i=0; i<=*n; i++) {
		
		if (*el==*(array+i))
		printf("Elemento trovato alla posizione %d", i);
		
	}
	
	
}

void linear_search_ord(int *arrayOrd, int *ordN, int *ordEl) {
	
	int i;
	
	for (i=*(arrayOrd); i<=*ordN; i++) {
		
		if (*(arrayOrd+i)> *ordEl) {
		
		printf("Elemento ordinato non presente");
		exit(-1);
	}
		if (*ordEl==*(arrayOrd+i) ) {
		
		printf("Elemento ordinato presente alla posizione %d", i);
		exit(1);
	}
	}
	
	
}

void binary_search_ord(int *arrayOrd, int *ordN, int *ordEl) {
	
	int first=*arrayOrd;
	int last=*(arrayOrd+7);
	int middle=(first+last)/2;
	
	while (first <= last) {
		
		if (*(arrayOrd+middle) < *ordEl)
		first=middle+1;
		else if (*(arrayOrd+middle) == *ordEl) {
		
		printf("Element %d found at location %d", (*ordEl), (*(arrayOrd+middle+1)) );
		break;
	}else {
	last=middle-1;
	middle = (first + last)/2;
	}
	
	if (first > last)
      printf("Not found! %d is not present in the list.\n", *ordEl);
      
      return;
	
}
}


