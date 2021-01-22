#include<stdio.h>
int main()
{
    int arr[2][3];
    int i,j;
    printf("enter elements in 2d array=");
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
     for(i=0;i<2;i++)
    {

        printf("\n");
        for(j=0;j<3;j++)
        
            printf("%d",&arr[i][j]);
        
       
    }
       return 0;
    
}                