#include <stdio.h>
#include <stdlib.h>
void createlinkedlist(int n);
void display();
void searching();

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
    searching();
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
    int count =0;
    struct node *currentnode;
    currentnode=head;
    printf("Output is:\n");
    while(currentnode!=NULL)
    {
        printf("%d\t", currentnode->data);
        count++;
        currentnode=currentnode->next;
    }
    printf("\n");
    printf(" total nodes are:%d",count);
}

void searching()
{
    int key,c=0;
    printf("\n");
    printf("enter key:");
    scanf("%d",&key);
    struct node*currentnode;
    currentnode=head;
    while(currentnode!=NULL)
    {
        if(key==currentnode->data)
        {
        c++;
        }
        currentnode=currentnode->next;

}
if(c!=0)
{
    printf("\nkey is present");
}
else
    printf("\nkey is not present");
}
