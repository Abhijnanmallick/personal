#include<universe.h>
#include<math.h>
int main()
{
    printf("Enter max::");
    int max;
    scan(max);
    max--;
    next;
    int a[max];
    int i;
    loop(i,max)
    {
        printf("Enter %d::",i);
        scan(a[i]);
    }
    int x=0;
    int j=0;
    while(j<=max)
    {
    i=0;
    x++;
    sorting(a,max,i,x);j++;
    }
}

int sorting(int a[],int max,int i,int x)
{
    int swap; 
    if(a[i]>a[i+1]){swap=a[i];a[i]=a[i+1];a[i+1]=swap;}
    i++;
    if(i<=max)
    { 
     sorting(a,max,i,x);
    }
    int j;
if(i==max&&x==max){printf("After sorting:[");
    loop(j,max)
    {

        if(j!=max){
        printf("%d,",a[j]);}
        else{printf("%d",a[j]);}
    }printf("]");
}
    next;
}