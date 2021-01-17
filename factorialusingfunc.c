#include<stdio.h>
long fact(int);
int main()
{
   int n,f;
   printf("enter no. for factorial=");
   scanf("%d",&n);
   f=fact(n);
   printf("factorial is %d",f);
}
long fact(int num)
{
    if(num==0)
    return 1;
    else
    {
    return(num*fact(num-1));
    }
    
}