typedef struct ptr* arrd;

arrd create_vector(int n); // create a vector of n size
arrd read_vector(arrd *array, int n); // read a value from a vector at n position
arrd alter_vector(arrd *array, int n); // modify an element given at N position in arrd array