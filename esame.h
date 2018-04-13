typedef struct esame *esame;
#define NULLEXAM NULL

esame newEsame(char *nome, int voto, char *data);
char *getCorso(esame e);
esame inputEsame();
void outputEsame(esame x);