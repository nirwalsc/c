#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int i;
    int sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("\n sum of numbers is %d",sum);
    return 0;
}