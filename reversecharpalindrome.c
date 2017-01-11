#include<stdio.h>
#include<string.h>

#define maxsize 10

int stack[maxsize],top=-1;

void push(char);
char pop();
int isempty();
int isfull();

main()
{
	char str[maxsize],rev[maxsize];
	int len,i,j,k,r=0;
	printf("Enter the string : ");
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
		push(str[i]);
	
	for(j=top;j>=0;j--)
		rev[r++]=pop();

	for(k=0;k<len;k++)
	{	if(str[k]!=rev[k])
		{
			printf("%s is not a palindrome\n",str);
			exit(0);
		}
	}
	printf("%s is a palindrome\n",str);	
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
