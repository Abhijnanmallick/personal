//radix sort
#include<stdio.h>
int main()
{
        printf("\t\t\t\t\t\tphase 1...\n");  //maximum num..
        int num;
        printf("Enter the max:");  
        scanf("%d",&num);
        num--;
    

        printf("\t\t\t\t\t\tphase 2...\n");  //scanning..
        int main[num];   
        int i;
        for(i=0;i<=num;i++){printf("%d=",i+1);scanf("%d",&main[i]);}



        printf("\t\t\t\t\t\tphase 3..\n"); //aquaring max..
        int max=main[0];  
        for(i=0;i<=num;i++)
        {
            if(main[i]>max)
            {
                max=main[i];
            }
        }
        printf("The max is %d\n",max);



        printf("\t\t\t\t\t\tphase 4...\n"); //aquaring max size
        int max_size=0,divider=0;      
        while(max!=0)
        {
            divider=max%10;
            max=max/10;
            max_size++;
        }
                                            //here the work of variable MAX is done..
        max_size--;
        if(max_size==0){max_size=2;}
        printf("max_size of max_num:%d\n",max_size);



       


 printf("\t\t\t\t\t\tphase 5..\n"); //alocating 2d arrey..

int j;
 int mixer[num+1][max_size+1],final[max_size+1][num+1];
    for(i=0;i<=num;i++)
    {
        for(j=0;j<=max_size;j++)
        {
            if(j==0){divider=main[i];}

            mixer[i][j]=divider%10;
          
            printf("%2d",mixer[i][j]);
            
            divider=divider/10;

        }
        printf("\n");
    }
    printf("\n\n");
    printf("\t\t\t\t\t\tphase 6..");
    for(i=0;i<=max_size;i++)
    {
        for(j=0;j<=num;j++)
        {
            final[i][j]=mixer[j][i];
            printf("%2d",final[i][j]);
        }printf("\n");
    }


printf("\n\n\n\t\t\t\t\t\tphase 7..");
int k,min,l,swap;

for(k=0;k<=max_size;k++)
{
for(i=0;i<=max_size;i++)
{
    for(j=0;j<num;j++)
    {
        if(final[i][j]>final[i][j+1])
        {
            // swap=final[i][j];
            // final[i][j]=final[i][j+1];
            // final[i][j+1]=swap;
            for(l=0;l<=max_size;l++)
            {
                swap=final[l][j];
                final[l][j]=final[l][j+1];
                final[l][j+1]=swap;
            }
        }
        printf("%2d,",final[i][j]);
    }
    printf("\n\n");}
}
printf("\n\n");






    for(i=0;i<=num;i++)
    {
        printf("Index %d : ",i);
        for(j=max_size;j>=0;j--)
        {
            printf("%2d",final[j][i]);
        }
        
        printf("\n");
    }

}