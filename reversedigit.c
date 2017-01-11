#include<stdio.h>

#define maxsize 10

int stack[maxsize],top=-1;

void push(int);
int pop();
int isempty();
int isfull();

main()
{
	int n,number[maxsize],i,j;
	printf("Enter the size :");
	scanf("%d",&n);	
	printf("Enter the number to be reversed : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
		push(number[i]);	
	}
	
	printf("The reversed digits are : ");
	for(j=top;j>=0;j--)
		printf("%d",pop());
	printf("\n");
}


void push(int elem)
{
	if(isfull())
		printf("Stack is Full\n");
	else
		stack[++top]=elem;
}

int pop()
{
	if(isempty())
		printf("Stack is Empty\n");
	else
		return stack[top--];
}

int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}

int isfull()
{
	if(top>=(maxsize-1))
		return 1;
	else
		return 0;
}
