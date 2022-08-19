#include<stdio.h>
int main()
{
   int ar[]={1,2,1,5,99,123,22,1};
   int max=8-1;
   int i,j,swap;
   int flag;
   for(i=0;;i++)
   {
    flag=0;
    for(j=0;j<=max;j++)
    {
        if(ar[j]>ar[j+1])
        {
            flag=1;
            swap=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=swap;
        }
        else{continue;}
    }
    if(flag==0){break;}
   }

   for(j=0;j<=max;j++)
   {
    printf("%d,",ar[j]);
   }
}