typedef struct libretto *libretto;

libretto newLibretto(int mat, char *cogn, char *nom);
int addEsame(libretto l, esame e);
esame cercaEsame (libretto l, char *corso);
int outputLibretto(libretto l);
