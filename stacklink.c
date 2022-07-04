#include<stdio.h>
#include<stdlib.h>
// testing

struct node {
int data;
struct node *link;
} *head=NULL;
void insertf();
void deletef();
void display();
void main()
{
int x;
loop:
printf("\n\nSelect an operation :\n1. insert\n2. delete(front)\n3. display\n");
scanf("%d",&x);
switch (x)
{
case 1: insertf();
goto loop;
case 2: deletef();
goto loop;
case 3: display();
goto loop;
default : printf("Wrong selection, try again\n");
goto loop;
}
}
void insertf()
{
  struct node *newNode;
  newNode = malloc(sizeof(struct node));
  printf("Enter the element to be inserted\n");
  scanf("%d",&newNode->data);
  newNode->link = head;
  head = newNode;
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
