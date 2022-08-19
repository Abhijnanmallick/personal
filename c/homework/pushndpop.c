#include<stdio.h>
int front=0,rare=0,a[50],num;
int main()
{
    system("color 2");
    int s;
    while(1)
    {
    printf("\n1 for push\n2 for pop\n3 for display\n");
    printf("enter the switch:");
    scanf("%d",&s);

    switch(s)
    {
        case 1:push();break;
        case 2:pop();break;
        case 3:display();break;
        default:printf("wrong switch!!");
    }
    
    }
}

int push()
{
    printf("Enter a number to push:");
    scanf("%d",&num);
    a[rare]=num;
    rare++;
}

int pop()
{
 rare--;

}
int display()
{
 int i;
  if(rare==front){printf("\ncontainer is empty..\n");return 0;}
 printf("\nContaining=[");
 for(i=0;i<rare;i++)
 {
    if(i==rare-1){printf("%d",a[i]);}
    else{printf("%d,",a[i]);}
 }  
 printf("]"); 
}