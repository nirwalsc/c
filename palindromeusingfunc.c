#include<stdio.h>
int checkpalindrome(int);
int main()
{
    int x;
    printf("enter number=");
    scanf("%d",&x);
   checkpalindrome(x);
    return 0;

}
int checkpalindrome(int n)
{
    int original,reverse=0;
    original=n;
    while(n!=0)
    {
        reverse=reverse*10;
        reverse=reverse+n%10;
        n=n/10;
    }
    if(original==reverse)
    {
        printf("number is palindrome");

    }
    else
    {
        printf("number is not palindrome");
    }
    

}
