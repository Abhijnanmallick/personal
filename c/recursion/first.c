#include<universe.h>
int main()
{
    printf("Enter from::");
    int from;
    scanf("%d",&from);
    printf("Enter to::");
    int to;
    scanf("%d",&to);
    int sum=0;
    int end=addition(from,to,sum);
    printf("summation from %d to %d is::%d",from,to,end);
}

int addition(int from,int to,int sum)
{
    
    if(from<=to)
    {
        
        sum=sum+from;
        // printf("%d+%d=%d,",sum,from,sum);
        addition(from+1,to,sum);

    }
    else{return sum;}
    
}