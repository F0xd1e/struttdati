#include <stdio.h>
#include <stdlib.h>

int arr_add(int *arr, int size, int rie) {
	
	int somma=0;
	int i;
	
	for (i=0; i<=rie; i++) {
		
		somma=*arr+*(arr+i);
		
	}
	
	return somma;
}

