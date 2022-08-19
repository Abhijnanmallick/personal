#include<stdio.h>
int front=0,rare=0,a[50];
int main()
{
    int s;
    while(1)
    {
    printf("\n1 to insert\n2 to delete\n3 to display\n4 to Exit::");
    printf("\n------***************------");
    printf("\nEnter a switch::");scanf("%d",&s);
    switch(s)
    {
        case 1:insert();break;
        case 2:delete();break;
        case 3:display();break;
        case 4:return 0;break;
        default:printf("\nwrong switch!!\n");
    }
    }

}
int insert()
{
    int num;
    printf("Enter a number to push::");
    scanf("%d",&num);
    a[rare]=num;
    rare++;
}

int delete()
{
    printf("\n%d is deleted..",a[front]);
    front++;
}

int display()
{
    int i;
    system("cls");
    if(front==rare){printf("\nempty stack!!\n");return 0;}
    printf("\nContaining [");
    for(i=front;i<rare;i++)
    {
        if(i!=rare-1){printf("%d,",a[i]);}
        else{printf("%d",a[i]);}
    }
    printf("]\n\n\n");
}