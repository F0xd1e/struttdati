/*        Specifica Sintattica del Tipo
 * 
 *        Tipi di riferimento: queue
 *        Tipi usati: queue, boolean
 * 
 *        Specifica Semantica del Tipo
 * 
 * queue è una lista linkata che contiene una serie di puntatori
 * all'elemento successivo
 * 
 * 
 *        Specifica Sintattica degli Operatori
 * 
 *  newQueue()->queue
 *  emptyQueue(queue)->boolean
 *  enqueue(item, queue)->queue
 *  dequeue(queue)->(item, queue)
 * 
 *            Specifica Semantica degli Operatori: inline
 */



typedef struct c_queue *queue;

//Post: q=nil
queue newQueue(int maxSize);
//Post: se q=nil -> b=true altrimenti b=false
int emptyQueue(queue q);
//Pre: q= >a1, a2, .... an-1, an> n>0 (q diverso nil)
//Post:q'= <a1,a2,a3, ... an-1>
item dequeue(queue q);
//Post: se q=nil allora q' = <e> altrimenti se q= <a1,a2, ... an> con n>0
//allora q' = <e, a1, a2, ... an>
int enqueue(item val, queue q);
//Nè pre nè post
void outputQueue(queue q);