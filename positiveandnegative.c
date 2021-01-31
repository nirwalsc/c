#include<stdio.h>                      

int main()                           // main function
{
    int x;                            //variable declaration in main func
    printf("enter to check no. is positive or negative=");               
    scanf("%d",&x);
    if(x<0)
    printf("negative",x);
    else
    {
        printf("postive",x);
    }
}