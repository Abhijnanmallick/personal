#include<universe.h>
int main()
{
    int i,max;
    printf("Enter max:::");
    scan(max);
    int arr[max];
    for(i=0;i<max;i++)
    {
        printf("Enter 1==");scan(arr[i]);
    }
    int mid=max/2;
    int max1=mid;
    int max2=max-mid;
    righty(&arr,max1);next;next;
    lefty(&arr,max,max1);
    
}

int righty(int *righty[],int max)
{
int i;
for(i=0;i<max;i++)
{
    printf("%d,",righty[i]);
}
}
int lefty(int *lefty[],int max,int start)
{
    for(int i=start;i<max;i++)
    {
        printf("%d,",lefty[i]);
    }
}