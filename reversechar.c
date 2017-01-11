#include<stdio.h>
#include<string.h>

#define maxsize 10

char stack[maxsize];
int top=-1;

void push(char);
char pop();
int isempty();
int isfull();

main()
{
	char str[maxsize];
	int len,i,j;
	printf("Enter the string to be reversed : ");
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
		push(str[i]);	
	printf("The reversed string is ");
	for(j=top;j>=0;j--)
		printf("%c",pop());
	printf("\n");
}


void push(char elem)
{
	if(isfull())
		printf("Stack is Full\n");
	else
		stack[++top]=elem;
}

char pop()
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
