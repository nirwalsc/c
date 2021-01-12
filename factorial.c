#include<stdio.h>
void main()
{
    int n,f=1,x;
    printf("enter a number");
    scanf("%d",&n);
    x=n;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    printf("factorial of %d is%d",x,f);

}