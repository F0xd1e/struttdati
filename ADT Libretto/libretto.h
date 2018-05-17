/*               Specifica Sintattica del Tipo
*   
*       Tipo di riferimento: libretto
*       Tipi di dati: esame, int, string
*
*                Specifica Semantica del Tipo
*
*       Libretto è l'insieme delle quadruple lib=(mat, cogn, nom, esami) in cui:
*
*       mat è un intero identificante la matricola dello studente                                                                               
*       cogn è una stringa identificante il cognome dello studente
*       nom è una stringa identificante il nome dello studente
*       esami è l'insieme degli esami sostenuti dallo studente
*
*
*                       Specifica Sintattica degli Operatori
*
*          newLibretto(mat, *cogn, *nom)-> libretto
*          addEsame(libretto, esame)->  libretto
*          cercaEsame(libretto, char)-> esame
*          outputLibretto(libretto) -> libretto
*
*
*                       Specifica Semantica degli Operatori: inline
*
*                                                                                               */




typedef struct libretto *libretto;

//newLibretto(matr, cogn, nom) = lib
//Post: lib=(matr, cognm, nom, insvuoto)
libretto newLibretto(int mat, char *cogn, char *nom);
//Pre: lib=(matr, cogn, nom, esami) AND per ogni ai appartenente esami getCorso(ai) != getCorso(es)
//Post: lib'=(matr, cogn, nom, esami U {es})
int addEsame(libretto l, esame e);
//Pre: lib=(matr, cogn, nom, esami)
//Post: (es app. esami AND getCorso(es) =corso) OR (per ogni ai app. 
// esami getCorso(ai)!=corso AND es=null);
esame cercaEsame (libretto l, char *corso);
//Pre: l!=NULL
//Post: 
int outputLibretto(libretto l);


//                  Specifica Sintattica
//I nomi del tipo di dati di riferimento ed eventuali tipi di dati usati
//I nomi delle operazioni del tipo di dati di riferimento
//I tipi di dati di I/O per ogni operatore
//
//                  Specifica Semantica
//
// L'insieme dei valori associati al tipo di dati di riferimento
// La funzione associata ad ogni nome di operatore specificata da:
// Precondizione: definita di valori di input quando la funzione è possibile
// Postcondizione: definita sui valori dei dati di output e input,
// stabilisce la relazione tra argomenti e risultato