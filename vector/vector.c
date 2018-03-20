#include <stdio.h>
#include <stdlib.h>
#define MAX 60
void arr_print(int *array) {
	
	int i;
	
	for (i=0; i<MAX; i++) {
		
		printf("%d", *(array+i));
		
	}
	
}

int arr_add(int *arr, int size, int rie) {
	
	int somma=0;
	int i;
	
	for (i=0; i<=rie; i++) {
		
		somma=*arr+*(arr+i);
		
	}
	
	return somma;
}

//////////////////////////

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



void bubblesort(int *arrayOrd, int ordN) {

int i,j,temp;

for (i=0; i<(ordN-1); i++) {

	for (j=0; j<(ordN-1-i); j++) {

		if (arrayOrd[j]>arrayOrd[j+1]) {

			temp=arrayOrd[j];
			arrayOrd[j]=arrayOrd[j+1];
			arrayOrd[j+1]=temp;

		}

		

	}


}


	
}
