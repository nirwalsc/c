#include<stdio.h>
void main()
{
    int i,a;
    printf("enter number=");
    scanf("%d",&a);
    for(i=2;i<=a-1;i++)
    if(a%i==0)
    break;
    if(i==a)
    {
    printf("prime no.",a);
    }
    else
    {
    printf("not prime no.",a);
    }
    

}