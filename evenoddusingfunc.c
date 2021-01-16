#include<stdio.h>                      
int evenodd(int);                      //function declaration
int main()                           // main function
{
    int x;                            //variable declaration in main func
    printf("enter to check no. is even or odd=");               
    scanf("%d",&x);
    evenodd(x);                        //function call
    return 0;
}
int evenodd(int a)                      //function define
{
   
    if(a%2==0)                              
    {
    printf("even no.",a);
    }
    else
    {
    printf("odd no.",a);
    }
    
    
}