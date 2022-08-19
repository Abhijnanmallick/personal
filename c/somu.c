#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 6
int stack1[MAX];
int stack2[MAX];
int top=0;
void pop()
{
	
		if(top==0)
	{
		printf("STACK UNDERFLOW!!");

	}
	else
	{
	int i,j=top-1;
	for(i=0;i<top;i++)
	{
		stack2[i]=stack1[j];
		// printf("%d",stack2[i]);
		j--;
	}
	
	top--;j=top-1;
	for(i=0;i<top;i++)
	{
		stack1[i]=stack2[j];
		// printf("%d",stack1[i]);
		j--;
	}
	}
	
}
void push()
	{
		int data;
		if(top==MAX)
		{
			printf("\n\nSTACK OVERFLOW!!");

		}
		else
		{
			printf("\n\n ENTER THE DATA::");
			scanf("%d",&data);
			stack1[top]=data;
			top=top+1;
			printf("\n\n DATA IS PUSHED!!");
		}
	}
	void display()
{
	int i;
	if(top==0)
	{
		printf("\n\n STACK IS EMPTY!!");
		return;
	}
	else
	{
		printf("ELEMENTS IN STACK::");
		for(i=top-1;i>=0;i--)
		{
			printf("\n\n |%d|",stack1[i]);
		}
		printf("\n");
	}
}
int main()
{
	int ch;
	while(1)
	{
			int ch;
		printf("---------------IMPLEMENTATION OF QUEUE USING STACK------------------");
		printf("---------------************------------------");	
			printf("\n1.PUSH1\n2.POP3.DISPLAY\n4.EXIT\n");
				printf("\n ENTER YOUR CHOICE::");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1: push();
					break;
					case 2: pop();
					break;
					case 3: display();
					break;
					case 4: exit(0);
				}
			
		
	}
}