#include<stdio.h>
int main()
{
    int n,s=0,i;
    printf("enter a natural number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i;
    printf("sum is %d",s);
    return 0;
}