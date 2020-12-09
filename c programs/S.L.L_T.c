#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;

};
int main()
{
struct node *head=malloc(sizeof(struct node));
head->data=45;
head->link=NULL;

struct node *current=malloc(sizeof(struct node));
current->data=20;
current->link=NULL;
head->link=current;

current=malloc(sizeof(struct node));
current->data=78;
current->link=NULL;
head->link->link=current;
printf("Linked list\n");
for(current=head;current!=NULL;current=current->link)
printf("%d->",current->data);
printf("NULL");
return 0;
    }    