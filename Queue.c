#include<stdio.h>
int Q[20],f=-1,r=-1,i;
void insert(int b);
void delete();
void display();
void main()
{
	int n,a;
	printf("\nEnter the limit of Queue : ");
	scanf("%d",&a);
	l:
	printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	printf("\nEnter the choice : ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:insert(a);
			goto l;
		case 2:delete();
			goto l;
		case 3:display();
			goto l;
		case 4:break;
		default:printf("\nWrong Selection");
			goto l;
	}
}
void insert(int b)
{
	if(r==b-1)
	{
		printf("\nQueue is Overflow ");	
	}
	else if(f==-1&&r==1)
	{
		f=0;
		r=0;
		printf("\nEnter the Element : ");
		scanf("%d",&Q[r]);	
	}
	
	else
	{
		r++;
		printf("\nEnter the Element : ");
		scanf("%d",&Q[r]);
	}	
}
void delete()
{
	if(f==-1&&r==-1)
	{
		printf("\nQueue is Underflow ");
	}
	else if(f==r)
	{
		printf("\n%d is deleted",Q[f]);
		f=r=-1;		
	}
	else
	{
		printf("\n%d is deleted",Q[++f]);
		
	}	
}
void display()
{
	if(f==r)
	{
		printf("\nQueue is empty ");
	}
	else
	{
		printf("\nQueue : ");
		for(i=f+1;i<=r;i++)
		printf("%d\t",Q[i]);
	}
		
}



