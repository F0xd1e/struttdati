/*   Specifica Sintattica del Tipo
 *   
 *   Tipo di riferimento: set
 *   Tipi usati: item, integer, boolean
 * 
 *  Specifica Semantica del Tipo 
 *  
 *  I valori di tipo set sono sottoinsiemi di elementi di tipo item
 *  Tra i valori di tipo set c'è l'insieme vuoto
 * 
 *        Specifica Sintattica degli Operatori:
 * 
 *  newSet()->set
 *  emptySet(set)->boolean
 *  cardinality(set)->integer
 *  contains(set, item)->boolean
 *  insertSet(set, item)->set
 *  removeSet(set, item)-> set
 *  unionSet(set, set)-> set
 *  intersectSet(set, set)-> set
 * 
 * 
 * 
 * Specifica Semantica degli Operatori: inline
 * 
 */


typedef struct c_set *set;

set newSet(void);
int emptySet(set s);
int cardinality(set s);
int contains(set s, item e);
int insertSet(set s, item e); //inseriamo e in s
int removeSet(set s, item e); //rimuoviamo e da s
int unionSet(set s1, set s2); //aggiunge elementi di s2 ad s1
int intersectSet(set s1, set s2); //rimuove da 2 gli elementi che non sono in s1
