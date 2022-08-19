#include<universe.h>
int a[100];
int num;
int main()
{
    printf("Enter the max elements::");
    int max;scan(max);
    for(int i=0;i<max;i++)
    {
        scan(a[i]);
    }
    int size=max;
    while(1)
    {
    printf("Enter the number::");
    scan(num);
    int mid;
    
    int low=0;
    int y=bin(mid,size-1,low);
    if(y!=1010)
    {printf("found at index %d",y);}
    else{printf("not found");}
    next;
    }
}
int bin(int mid,int high,int low)
{

    mid=(low+high)/2;
    if(high<low)
    {
        return 1010;
    }
    if(a[mid]==num)
    {
        return mid;
    }
    if(a[mid]>num)
    {
        return bin(mid,mid-1,low);
        
    }
    if(a[mid]<num)
    {
        return bin(mid,high,mid+1);
    }


}