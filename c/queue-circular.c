#include<stdio.h>
#define loop(x,y) for(x=0;x<y;i++)
#define scan(x) scanf("%d",&x)
#define nextln printf("\n")
short a[5],front=0,rare=0,num;
int main()
{
    int s;
    while(1){
    printf("\n\n\n1 to insert\n2 to delete\n3 to display\n:::\n");
    printf("Enter a switch:");
    scan(s);
    switch(s)
    {
        case 1:insert();break;
        case 2:delete();break;
        case 3:display();break;
        default:nextln;printf("Wrong switch");nextln;
    }
    }

}
void insert()
{
    nextln;
    printf("Enter an element:");
 scan(num);
 a[rare]=num;
 rare++;
 if(rare==5)
 {
    rare=0;
 }
}
void delete()
{
    nextln;
printf("%d will be deleted::",a[front]);
nextln;
front++;
}
void display()
{
    system("cls");
    int i;
    nextln;
    printf("[");
    for(i=front;i<5;i++)
    {
        if(a[i]==0){continue;}
        if(i!=4){printf("%d,",a[i]);}
        else{printf("%d",a[i]);}
    }
    printf("]");
}