#include<stdio.h>
#include<stdlib.h> // for malloc function

typedef struct node // self defined data type
{
    int data;
    struct node *next; // data type -> struct node
}node;


int main()
{
    node *head=NULL;
    node *newNode=NULL;
    node *temp=NULL;
    int choice=1;
    int count=0;
    while(choice)
   {
    newNode=(node *)malloc(sizeof(node));
    printf("Enter the data :");
    scanf("%d",&newNode->data);
    newNode->next=NULL;
    if(head==NULL) head=temp=newNode;
    else
    {
        temp->next=newNode;
        temp=newNode;
    }
    printf("Do you want to continue ? : ");
    scanf("%d",&choice);
   } 

   // Traversal
   temp=head;
   while(temp!=NULL)
   {
    printf("%d->",temp->data);
    temp=temp->next;
    count++;
   }
   printf("\nNumber of nodes : %d",count);
   return 0;
}