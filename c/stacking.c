//queuing using stack..
#include<universe.h>
int a[6],rep[5];
int main()
{

    int s,top=0;
while(1)
{
next;
printf("Enter a Switch\n1 for insert::\n2 for delete::\n3 for display::");
scan(s);
if(s==1){push(&top);}
else if(s==2){pop(&top);}
else if(s==3){display(&top);}
// system("cls");
}
}

int push(int *top)
{
scan(a[*top]);
next;
printf("%d,%d",*top,a[*top]);
*top=*top+1;
system("pause");
}


int pop(int *top)
{

int i;
int j=*top-1;
for(i=0;i<*top;i++)
{
    rep[i]=a[j];
    // printf("%d",rep[i]);
    j--;
    

}
if(*top>0){
*top=*top-1;}
j=*top-1;
for(i=0;i<*top;i++)
{
    a[i]=rep[j];
    // printf("%d",a[i]);
    j--;
    

}


}


int display(int *top)
{
int i;next;next;
printf("stack=[");
loop(i,*top-1)
{
    if(i!=*top-1)
    {
    printf("%d,",a[i]);
    }
    else{printf("%d",a[*top-1]);}
}
printf("]");
}
