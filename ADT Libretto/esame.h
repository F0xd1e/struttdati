/*                       Specifica sintattica del tipo
 *
 *  Tipo di riferimento: esame
 *  Tipi usati: int, string, date
 * 
 *                  Specifica Semantica del tipo
 * 
 *      esame è l'insieme delle triple(corso, voto, data) dove:
 * 
 *      corso è una stringa che identifica l'insegnamento
 *      voto è un intero che rappresenta il voto ottenuto all'insegnamento di riferimento
 *      data è una stringa che identifica la data dell'evento, insieme delle triple (GG/MM/AA)
 *      
 *                       Specifica sintattica degli operatori
 * 
 * 
 *          newEsame(string, int, date) -> esame
 *          getCorso(esame)             -> string
 *          inputEsame()                -> esame
 *          outputEsame(esame)          -> int (fake boolean) 
 *          cloneEsame(esame)           -> esame
 * 
 *                                                          
 *                                  Specifica Semantica degli operatori: inline
 * 
 *                                                                                                  */




typedef struct esame *esame;
#define NULLEXAM NULL

//newEsame(nome, voto, data)=e
//Post: e=nome, voto, data
esame newEsame(char *nome, int voto, char *data);
//getCorso(e)=corso;
//Post: e=(corso, voto, data)
char *getCorso(esame e);
//inputEsame()=newEsame(corso, voto, data) OR NULLEXAM
//Post: newEsame=(corso, voto, data) OR NULLEXAM
esame inputEsame();
//outputEsame()= return
//Post: return= 1 OR 0
int outputEsame(esame x);
//cloneEsame(esame)=es, esClone declared
//Post: esClone=es;
esame cloneEsame(esame es);