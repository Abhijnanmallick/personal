#include<stdio.h>
int main()
{
    //two sum..
    int arr[]={2,1,5,8,11};
    int number;
    scanf("%d",&number);
    int sum;
    int flag;
    for(int i=0;i<5;i++)
    {
        flag=0;
        for(int k=0;k<5;k++)
        {
        for(int j=k;j<=k+1;j++)
        {
            if(number==arr[i]+arr[j])
            {
                flag=1;
                printf("found at index %d & %d",arr[i],arr[j]);
                break;
            }
        }
        if(flag==1)
        {


            break;
        }
        }
        if(flag==1)
        {
            break;
        }
    }
}