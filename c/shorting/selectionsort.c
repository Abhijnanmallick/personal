#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter the max:");
    scanf("%d",&num);
printf("\n\n\n");
    int a[num];

    for(i=0;i<=num;i++)
    {
        printf("Enter %d:",i);
        scanf("%d",&a[i]);
    }
    
    int swap;
   
   
    for(i=0;i<=num;i++)
    {
        for(j=i;j<=num;j++)
        {
            if(a[i]>a[j])
            {
                swap=a[i];
                a[i]=a[j];
                a[j]=swap;
            }
        }
        
            // printf("%d",a[i]);
        
        printf("\n");
    }

      
    
    printf("\n\t");
    printf("After selection sorting [");
    for(i=0;i<=num;i++)
    {
        printf("%d",a[i]);
        if(i!=num){printf(",");}
    }
    printf("]");
}