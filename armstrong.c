#include<stdio.h>

#define maxsize 10

int stack[maxsize],top=-1;

void push(int);
int pop();
int isempty();
int isfull();

main()
{
	int n,number,i,j,d,cube,sum=0;
	printf("Enter the number to be checked : ");
	scanf("%d",&number);
	n=number;
	while(n)
	{
		d=n%10;
		cube=d*d*d;
		push(cube);
		n=n/10;
	}

	for(j=top;j>=0;j--)
		sum+=pop();
	
	if(number==sum)
		printf("%d is an armstrong number\n",number);
	else
		printf("%d is not an armstrong number\n",number);
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
