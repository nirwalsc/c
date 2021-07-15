#include<stdio.h>                      
int checkoddeven(int);                      //function declaration
int main()                           // main function
{
    int x;                            //variable declaration in main func
    printf("enter to check no. is even or odd=");               
    scanf("%d",&x);
    checkoddeven(x);                        //function call
    return 0;
}
int checkoddeven(int a)                      //function define
{
   
    if(a%2!=0)                              
    {
    printf("odd no.",a);
    }
    else
    {
    printf("even no.",a);
    }
    return a;
    
    
}