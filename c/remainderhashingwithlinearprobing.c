#include<stdio.h>
int main()
{
   int key,max,i,j,k,remainder;
    printf("Enter max:");scanf("%d",&max);
    printf("Enter key::");scanf("%d",&key);printf("\n\n\n");
    int stack[max];
    int num;
    for(i=0;i<max;i++)
    {
        if(i==0)
        {
            for(j=0;j<max;j++)
            {
                stack[j]=-1;
            }
        }
        printf("Enter %d::",i);
        scanf("%d",&num);

        remainder=num%key;
       
        if(stack[remainder]==-1){stack[remainder]=num;}
        else
        {
            for(k=remainder+1;k<max;k++)
            {
                if(stack[k]==-1)
                {
                    stack[k]=num;
                    break;
                }
            }
        }
    }
for(i=0;i<max;i++)
{
    if(stack[i]==-1){stack[i]=0;}
    printf("\n%d = %d",i,stack[i]);
}
printf("\n\n");
//searching stack with key..
search(stack,key,max);
}

int search(int stack[],int key,int max)
{
    short  i,checker;
    short  num;
    short remainder;
    // for(i=0;i<max;i++){printf("%d\n",stack[i]);}
    while(1)
    {
        checker=0;
        printf("Enter an element to search::");scanf("%d",&num);
        if(num==-1){break;}
        remainder=num%key;
        if(stack[remainder]==num)
        {
            printf("Found at index %d\n",remainder);
          
        }
        else
        {
            for(i=remainder+1;i<max;i++)
            {
                if(stack[i]==num)
                {
                    checker=1;
                    printf("Found at index::%d\n",i);
                    continue;
                }
                
            }
            if(checker==0){printf("not found !!\n");}
        }

    }
}