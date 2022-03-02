#include <stdio.h>
#define SIZE 100
void create(int[],int ,int );
void inorder(int [],int);
void preorder(int[],int);
void postorder(int[],int);
main()
{
	int no[SIZE];
	int i,data,a;
	for(i=1;i<SIZE;i++)
	{
		no[i]=-1;
	}
	do
	{
		printf("\nEnter the value: ");
		scanf("%d",&data);
		create(no,data,1);
		printf("\nWish to continue? 1/2");
		scanf("%d",&a);
		
	}while(a==1);
	printf("\nInorder :");inorder(no,1);
	printf("\nPreorder :");preorder(no,1);
	printf("\nPostorder :");postorder(no,1);
}
void create(int no[],int data, int index)
{
	if(index==SIZE)
		printf("\nSpace not available");
	else
		if(no[index]==-1)
			no[index]=data;
		else
			if(data<no[index])
				create(no,data,index*2);
			else
				create(no,data,(index*2)+1);
}
void inorder(int no[],int index)
{
	if(no[index]!=-1)
 	{
		inorder(no,index*2);
		printf("%d",no[index]);
		inorder(no,(index*2)+1);
	}
}
void preorder(int no[],int index)
{
	if(no[index]!=-1)
 	{
		printf("%d",no[index]);
		preorder(no,index*2);
		preorder(no,(index*2)+1);
	}
}
void postorder(int no[],int index)
{
	if(no[index]!=-1)
 	{
		
		postorder(no,index*2);
		postorder(no,(index*2)+1);
		printf("%d",no[index]);
	}
}

	
	
	
