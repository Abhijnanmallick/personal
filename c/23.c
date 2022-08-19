#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define MAX 6
int queue[MAX];
int front=0;
int rear=0;
void display()
{
	int i;
	// if(front==rear)
	// {
	// 	printf("THE QUEUE IS EMPTY!!");
	// 	return ;
	// }
	system("cls");
		printf("\n\n ELEMENTS IN QUEUE::");
		printf("\n");
		for(i=front;i<rear;i++)
		{
            if(queue[i]==0){continue;}
			printf("|%d|\n",queue[i]);
		}
	
}
void Delete()
{
	printf("%d is deleted",queue[front]);
front++;
}
	int insert()
	{
		scanf("%d",&queue[rear]);
		rear++;
	}
int main()
{
	int ch;
	while(1)
	{
		int ch;
		printf("\n---------------circuler queue--------------");
		printf("---------------******---------------");
		printf("\n1.insert\n2.delete\n3.display\n4.exit");
		printf("\nenter your choice::");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insert();
			         break;
			case 2:    Delete();
			          break;
			case 3:  display();
			          break;
			case 4: exit(0);
			default:printf("wrong_switch..");		  		         
		}
		// getch();
	}
}