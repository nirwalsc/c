#include<stdio.h>
int main()
{
    int a=-1,b=1,c,i,n;
    printf("enter numbers:");
    scanf("%d",&n);
    printf("first%d terms of fibonacci series",n);
    for(i=1;i<=n;i++)
    {
        
            c=a+b;
            printf("%d",c);
            a=b;
            b=c;
            
        }
    

}