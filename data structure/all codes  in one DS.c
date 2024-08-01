/*
//structure implementation using array


#include<stdio.h>

struct student{
int id;
float cgpa;

};

int main()
{
   struct student studentinfo[5];
   int i;
   for(i=0;i<5;i++)
   {
       printf("enter student-%d info\n",i+1);
       scanf("%d",&studentinfo[i].id);
       scanf("%f",&studentinfo[i].cgpa);
   }

   for(i=0;i<5;i++)
   {
       printf("\ndisplay student-%d info :\n",i+1);
       printf("Id : %d\t",studentinfo[i].id);
       printf("CGPA :%.2f\n",studentinfo[i].cgpa);
   }

   return 0;
}
*/

/*

//create and display linkedlist

#include <stdio.h>
#include <stdlib.h>
void createlinkedlist(int n);
void display();

struct node{
    int data;
    struct node *next;
}*head;

int main()
{
    int n;
    printf("Enter the number of nodes in linked list\n");
    scanf("%d", &n);
    createlinkedlist(n);
    display();
}

void createlinkedlist(int n){
    struct node *newnode, *currentnode;
    int value, i;
    head = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value you want to save in first node\n");
    scanf("%d", &value);
    head->data=value;
    head->next=NULL;
    currentnode=head;
    for(i=1;i<n;i++){
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter the value of node-%d\n", i+1);
        scanf("%d", &value);
        newnode->data=value;
        newnode->next=NULL;
        currentnode->next=newnode;
        currentnode=newnode;
    }
}

void display(){
    struct node *currentnode;
    currentnode=head;
    printf("Output is:\n");
    while(currentnode!=NULL)
    {
        printf("%d\t", currentnode->data);
        currentnode=currentnode->next;
    }
}
*/

/*

//linkedlist insertion

#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node* next;

}*head;

void insetrtAtBeginning();
void InsertAtEnd();
void InsertAtMid(int position);

void insertAtBeginning()
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nenter the value you want to inster at the beginning of the linked list\n");
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void InsertAtMid(int position)
{
   struct node* current,*newnode;
   int i;
   current=head;
   for(i=1;i<position;i++)
        current=current->next;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("\n\nenter the cvalue you wabt to insert in the linked list \n");
   scanf("%d",&newnode->data);
   newnode->next=current->next;
   current->next=newnode;
}

void InsertAtEnd()
{
    struct node* current,*newnode;
    current=head;
    while(current->next!=NULL)
        current=current->next;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("\n\nenter the value you want to inster at the end of the linkedlist\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    current->next=newnode;
}
*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head;

void createlist(int n);
void displaylist();
void DeleteFromBeginning();
void DeleteFromEnd();
void DeleteFromMid(int position);

int main()
{
    int n,position;
    printf("Enter the number of input\n");
    scanf("%d",&n);
    createlist(n);
    printf("\n\nData in the list are\n");
    displaylist();
    DeleteFromBeginning();
    printf("\n\nAfter deleting first value the data in the list are\n");
    displaylist();
    printf("\n\nEnter the position of the node you want to delete\n");
    scanf("%d",&position);
    DeleteFromMid(position);
    printf("\n\nAfter deleting the node data in the list are\n");
    displaylist();
    DeleteFromEnd();
    printf("\n\nAfter deleting last value the data in the list are\n");
    displaylist();

    return 0;
}

void createlist(int n)
{
    struct node *newnode,*current;
    int value,i;
    head=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
        printf("Memory full\n");
    else
    {
        printf("Enter first value\n");
        scanf("%d",&value);
        head->data=value;
        head->next=NULL;
        current=head;
        for(i=1; i<n; i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));

            printf("Enter value %d\n",i+1);
            scanf("%d",&value);
            newnode->data=value;
            newnode->next=NULL;
            current->next=newnode;
            current=newnode;
        }
    }
}

void DeleteFromBeginning()
{
    struct node*current;
    current=head;
    head=head->next;
    free(current);
}

void DeleteFromMid(int position)
{
    struct node* current,*previous;
    int i;
    current=head;
    for(i=1;i<position;i++)
    {
        previous=current;
        current=current->next;
    }
    previous->next=current->next;
    free(current);
}

void DeleteFromEnd()
{
    struct node *current,*previous;
    current=head;
    while(current->next!=NULL)
    {
        previous=current;
        current=current->next;
    }
    free(current);
    previous->next=NULL;

}

/*void DeleteFromEnd()
{
    struct node *current;
    current=head;
    while((current->next)->next!=NULL)
    {
        current=current->next;
    }
    free(current->next);
    current->next=NULL;
}*/

void displaylist()
{
    struct node* current;
    current=head;
    while(current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
}

