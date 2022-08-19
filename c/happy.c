#include<universe.h>
int main()
{
    printf("Enter the first num:");
    int num;
    scan(num);
    printf("Enter the second num:");
    int num2;
    scan(num2);
    int max;
    if(num>num2)
    {
        max=num2;
    }
    else{max=num;}
    for(int i=max;i>=2;i--)
    {
        if(num%i==0&&num2%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}