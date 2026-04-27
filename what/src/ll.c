#include <stdlib.h>
#include <time.h>
#include "ll.h"
struct BaseNode {
   char data[512];
   struct Node *next;
};
void DataFill(unsigned short dataLen, char *data, char *str);

struct BaseNode *CreateNode(char *str){
   struct BaseNode *newNode = malloc(sizeof(struct BaseNode));
   
   newNode -> data[511] = '\0';
   newNode -> next = NULL;
   DataFill( &(newNode->data[0]), str);
   return newNode;
}

void DataFill( char *data, char *str){
   for (unsigned short i = 0; str[i] != '\0'; i++) {
      data[i] = str[i];
      nanosleep(&(struct time){0, 80*1000*1000}, NULL);
   }
}
