#include <stdio.h>
#include<math.h>    
     
int main()    
{    
    int i,j,a[2][3]={{3,-9,1},{-6,1,-4}},min=0,k,min_pro,swap=0;
    for(i=0;i<2;i++)
    {
        min=a[i][0];
        for(j=0;j<3;j++)
        {
            if(min>=a[i][j])
            {
                min=a[i][j];
                min_pro=j;
            }
              
            
        }
        printf("\n");
        printf("%d",min);

        for(k=0;k<3;k++)
        {
            swap=a[i][min_pro];
            a[i][min_pro]=a[i][0];
            a[i][0]=swap;
            
        }
printf("\n");
        for(k=0;k<3;k++)
        {
            printf("%d,",a[i][k]);
        }
    }
// printf("\n%d",min_pro);
    
    // for(i=0;i<2;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         printf("%d,",a[i][j]);
    //     }
    //     printf("\n");
    // }
}  