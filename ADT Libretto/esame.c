#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "esame.h"

struct esame {

    char corso[20];
    int voto;
    char data[11];

};

esame newEsame(char *corso, int voto, char *data)

{

    struct esame *e=malloc(sizeof(struct esame));
    if (e != NULL) {

        strcpy(e->corso, corso);
        e->voto=voto;
        strcpy(e->data, data);


    }

return e;

}


char *getCorso(esame e)
{

    if (e==NULL)
    return NULL;

char *corso=malloc(20*sizeof(char));
if (corso != NULL)
strcpy(corso, e->corso);
return corso;

}


esame inputEsame() {

char corso[20];
int voto;
char data[11];
printf("Inserisci il nome del corso:");
scanf("%s", corso);
printf("Inserisci il voto:");
scanf("%d", &voto);
printf("Inserisci la data (GG/MM/AA):");
scanf("%s", data);

if (voto >= 18 && voto <=31)
return newEsame(corso, voto, data);
return NULLEXAM;
}

int outputEsame(esame x) {

if (x==NULLEXAM)
return 1;

printf("%s \n", x->corso);
printf("%d \n", x->voto);
printf("%s \n", x->data);

return 0;
}

esame cloneEsame(esame es) {

esame new=malloc(sizeof(esame));
*new=*es;

return new;



}


