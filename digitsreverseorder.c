#include<stdio.h>
void main()
{
    int a,b=0,z;
    printf("enter number=");
    scanf("%d",&a);
    while(a!=0)
    {
        z=a%10;
        b=b*10+z;
        a=a/10;

    }
    printf("reverse is %d",b);

}