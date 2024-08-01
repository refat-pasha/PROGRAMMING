#include <stdio.h>
#include <stdlib.h>

void creatlinkedlist(int n);
void display();


struct node{
    int data;
    struct node *next;
}*head;

int main()
{
        int n;
        printf("enter the number of nodes in linked list\n");
        scanf("%d",&n);
        creatlinkedlist(n);
        display();
}

void creatlinkedlist(int n)
{
    struct node *newnode,*currentnode;
    int value, i;
    head=(struct node*)malloc(sizeof(struct node));
    printf("enter the value you want to save in first node\n");
    scanf("%d",&value);
    head->data=value;
    head->next=NULL;
    currentnode=head;
    for(i=1;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter the value of node-%d\n",i+1);
        scanf("%d",&value);
        newnode->data=value;
        newnode->next=NULL;
        currentnode->next=newnode;
        currentnode=newnode;
    }
}


void display()
{
    int count=0,c=0,x;
    struct node *currentnode;
    currentnode=head;
    scanf("%d",&x);
    printf("output is: \n");

    while(currentnode!=NULL)
    {
        printf("%d\t",currentnode->data);

        count++;

        if(x==currentnode->data)
        {
            c++;
        }
    currentnode=currentnode->next;
    }
    printf("\n total node:%d\n",count);

    if(c!=0)
    {
        printf("\n yes! the value is in the node");
    }
    else
        printf("\n no! the value is not in the node");
}
