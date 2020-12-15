#include <stdio.h>
#include<stdlib.h>
 struct node 
 {
     int data;
     struct node *left;
     struct node *right;
 };struct node *root;
  
  struct node* new_node(int x)
{
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left = NULL;
    p->right = NULL;

    return p;
}


struct node *insert(struct node *root, int x)

{
    if(root==NULL)
    return new_node(x);
    else if(x>root->data) // x is greater. Should be inserted to right
        root->right = insert(root->right, x);
    else // x is smaller should be inserted to left
        root->left = insert(root->left,x);
    return root;
    
}
void display(struct node *t)

{

  if (t!=NULL)

  {

  display(t->left);

  printf("\n %5d",t->data);

  display (t->right);

  }

}
void main()

{
    

int op,n;

root=(struct node *)malloc(sizeof(struct node));

root->data=30;

root->right=root->left=NULL;



do

{

    printf("\n 1.Insertion");
printf("\n 2.Display");

    printf("\n 3.Quit");

    printf("\n Enter your choice:");

    scanf("%d",&op);

 

  switch (op)

   {

    case 1: printf("\n Enter the element to insert:");
scanf("%d",&n);
              insert(root,n);

              break;
              case 2: printf("\n The elements are\n");

              display(root);

              break;
           case 3:printf("\nExit\n");
           break;
           
    default: exit(0);

   }

  }while(op<3);

 
 

  }