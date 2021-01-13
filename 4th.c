#include<stdio.h>
void main()
{
    int num,temp, n,sum=0;
    printf("enter three digits=");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        n=num%10;
        sum=sum*n*n*n;
        num=num/10;

    }
    if(sum==temp)
    {
        printf("armstrong number");

    }
    else
    {
        printf("not armstrong number");
    }
    
}