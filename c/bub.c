#include<stdio.h>
int bubble_sort(int num,int *a[],int *cp[])
{
    int i,j;
  

    
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
        cp[i]=a[i];    
    }
    
    int swap,flag;
    for(i=num-1;i>=0;i--)
    {
        flag=0;
        for(j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                flag=1;
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
        if(flag==0)
        {break;}
    }
    // printf("sorted arrey=[");
    // for(i=0;i<num;i++)
    // {
    //     if(i!=num-1){printf("%d,",a[i]);}
    //     else{printf("%d",a[i]);}
    // }
    // printf("]");
    
}