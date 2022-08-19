#include<stdio.h>
#include"macro.c"
int main()
{
	printf("To close the loop you have to press '0'\n\n");
	int a[100],i,k,j;
	for(i=0;;i++)
	{
		printf("Enter the first element [A%d]:",i);
		scanf("%d",&a[i]);
	
		if(a[i]==0)
		{
			break;
		}
		
		}
		
	
   
	int changer=0,main=i-1;
	for(j=0;j<=main;j++)
	{
		for(k=0;k<=main;k++)
		{
			if(a[k]>a[k+1])
			{
				changer=a[k];
				a[k]=a[k+1];
				a[k+1]=changer;
			}
		}
	}
	printf("\n");
	printf("The arrey after sorting:[");
	for(i=0;i<=main+1;i++)
	{
		if(a[i]==0)
		{continue;}
		printf(" %d,",a[i]);	
	}
	printf("]");
}
