#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
   NodePtr tailPtr=NULL;
  struct Queue {
   NodePtr headPtr;
   NodePtr tailPtr;
   int size;
  }q;
   int i,x;
   q.headPtr=NULL;
   q.tailPtr=NULL;
  q.size=0;
 for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
            x=dequeue_struct(&q);
            printf("dequeing %d\n",x);
        }
        else {
       enqueue_struct(&q, atoi(argv[i]), argv[i+1]);
           i++;
        }
 }
  return 0;
}
