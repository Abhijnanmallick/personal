#include<stdio.h>
#include"bub.c"
#include"binary_searching.c"
#include"indexer.c"
int main()
{
    int num;
    printf("Enter the max::");
    scanf("%d",&num);
    int a[num];
    int cp[num];
    int num_cp=num;
    bubble_sort(num,&a,&cp);
    printf("\n");
    int low=0,mid,high=num;
    printf("your array [");
     for(int i=0;i<num_cp;i++)
    {
        if(i!=num_cp-1)
        {
        printf("%d,",cp[i]);
        }
        else{
            printf("%d",cp[i]);
        }
    }
    printf("]\n");
    printf("Enter the number to search::");
    scanf("%d",&num);
    
    int result=binary_search(&a,low,mid,high,num);
    // printf("____________found at %d____________\n\n",result);
    // printf("[");
   
    int res=indexer(num_cp,a,cp,result);
    printf("____________found at %d____________\n\n",res);
}

