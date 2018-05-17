#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "esame.h"
#include "libretto.h"

#define MAXESAMI 25

struct libretto {

    int matricola;
    char cognome[20];
    char nome[20];
    esame esami[MAXESAMI];
    int num_esami;

};

libretto newLibretto (int mat, char *cogn, char *nom) {

struct libretto *nuovo;
nuovo=malloc(sizeof(struct libretto));
if(nuovo != NULL) {

nuovo->matricola=mat;
strcpy(nuovo->cognome, cogn);
strcpy(nuovo->nome, nom);
nuovo->num_esami=0;

}


return nuovo;


}



esame cercaEsame(libretto lib, char *corso) {

if (lib==NULL) return NULLEXAM;

int i=0;
int trovato=0;

while (i <lib->num_esami && !trovato)
if (strcmp(getCorso(lib->esami[i]),corso)==0)
                trovato=1;
                else i++;

                if (trovato) return lib->esami[i];


}





int addEsame(libretto lib, esame e)
{

    if (lib==NULL) return 0;
    if (lib->num_esami==MAXESAMI) return 0; //array pieno

    int ris;

    char *c=getCorso(e); //getCorso alloca memoria per stringa
    if((cercaEsame(lib, c)) != NULLEXAM)
    ris=0; // esame già presente

    else {

        lib->esami[lib->num_esami]=e;
        lib->num_esami++;
        ris=1;

    }

free(c); //deallochiamo la memoria per la stringa

return ris;

}

int outputLibretto(libretto l) {

int i;

printf("%d \n", l->matricola);
printf("%s \n", l->cognome);
printf("%s \n", l->nome);

for (i=0; i<l->num_esami; i++) {

outputEsame(l->esami[i]);

}

printf("%d", l->num_esami);


}