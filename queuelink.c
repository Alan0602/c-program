#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node *link;
} *head=NULL;

void insertf();
void insertr();
void deletef();
void deleter();
void insertran();
void deleteran();
void display();
int search();

void main()

{
int x;
loop:
printf("\n\nSelect an operation :\n1. insert\n2. delete\n3. display\n4.Exit");
scanf("%d",&x);
switch (x)
{
case 1: insertr();
goto loop;
case 2: deletef();
goto loop;
case 3: display();
goto loop;
case 4:break;
default : printf("Wrong selection, try again\n");
goto loop;
}
}

void insertr()
{
struct node *newNode,*temp = head;
newNode = malloc(sizeof(struct node));
printf("Enter the element to be inserted\n");
scanf("%d",&newNode->data);
if(head==NULL)
{
newNode->link = head;
head = newNode;
}
else
{
while(temp->link != NULL)
temp = temp->link;
temp->link = newNode;
newNode->link = NULL;
}
}

void deletef()
{
struct node *temp;
if(head == NULL)
{
printf("list is empty\n");
}
else
{
printf("Element %d has been deleted\n",head->data);
head = head->link;
}
}
void display()
{
struct node *temp = head;
if(head == NULL)
{
printf("list is empty\n");
}
else
{
printf("\n\nList elements are : \n");
while(temp != NULL)
{
printf("%d ",temp->data);
temp = temp->link;
}
}
}
