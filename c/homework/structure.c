//binary search..
#include<stdio.h>
int main()
{
    int num,array[]={1,3,5,7,9};
    printf("Enter your number:");
    scanf("%d",&num);

    int size_arr= sizeof(array) / sizeof(array[0]);
    // printf("\n%d",size_arr);
    int mid=0;
    int result=bin_search(num,array,size_arr,mid);
    printf("found at index %d",result);
    

    
    
}
int bin_search(int num,int array[],int size_arr,int mid)
{

    
    if(array[mid]==num)
    {
        return mid; 
    }
    
    if(array[mid]>num)
    {
        
        return bin_search(num,array,size_arr,mid-1);
    }
    if(array[mid]<num)
    {
       
        return bin_search(num,array,size_arr,mid+1);
    }
    else{return -11;}
    
}