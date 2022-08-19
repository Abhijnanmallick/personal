#include<stdio.h>
int main()
{
    int max;
    printf("Enter the max:");
    scanf("%d",&max);
    int a[max];
    
  
    
    int i,j;
    for(i=0;i<max;i++)
    {
        printf("Enter %d:",i);
        scanf("%d",&a[i]);
    }

    
    
    
    int swap;
    for(int k=0;k<max;k++)
    {
    for(i=0;i<max;i++)
    {
        for(j=max-1;j>=0;j--)
        {
            if(a[i]>=a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
                break;
            }
        }
        for(j=0;j<max;j++)
        {
            if(a[i]<=a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
                break;
            }
        }
    }
    }
    printf("The sorted array is::");
    for(i=0;i<max;i++)
    {
        if(i==0){printf("[");}
        if(i!=max-1){printf("%d,",a[i]);}
        else{printf("%d",a[i]);}
        
        if(i==max-1){printf("]");}
    }
}