#include<stdio.h>
struct my_structure
{
    long int id;
    char name[100];
}abhi;

int main()
{
    
    printf("Enter the name:");
    scanf("%s",abhi.name);
    printf("Enter the ID:");
    scanf("%d",&abhi.id);
    
    display();
    
}
int display()
{
	printf("The ID of %s is %d",abhi.name,abhi.id);
}
