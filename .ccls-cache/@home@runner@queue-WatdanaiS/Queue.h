

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x, int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){
  new_node->order=x;
  new_node->nextPtr=NULL;
if(q->headPtr==NULL)
  q->headPtr=new_node;
else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
  /*Finish enqueue */
 }
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
   if(t){
   int value= t->order;
     q->headPtr=t->nextPtr;
     if(q->headPtr==NULL)
       q->tailPtr=NULL;
     free(t);
     q->size--;
       /*Finish dequeue */
   return value;
   }
   printf("Empty queue\n");
   return 0;
}

