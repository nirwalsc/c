#include<stdio.h>                      
int prime(int);                      //function declaration
int main()                           // main function
{
    int x;                            //variable declaration in main func
    printf("enter to check no. is prime or not=");               
    scanf("%d",&x);
    prime(x);                        //function call
    return 0;
}
int prime(int a)                      //function define
{
    int i;                               
    for(i=2;i<=a-1;i++)                   //loop 
    if(a%i==0)                              // if statement
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