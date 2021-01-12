#include<stdio.h>
	void main()
{
	int i,n,e_sum=0,o_sum=0;
                          printf("enter number =");
                         scanf("%d",&n);
                          for(i=1;i<=n;i++)
                       {
                           if(i%2==0)
                           {
                                 e_sum=e_sum+i;
                             }
                            else
                               {
                                  o_sum=o_sum+i;
                          }
                        }
                                 printf("\n the sum of even numbers upto%d=%d",n,e_sum);
                            printf("\n the sum of odd numbers upto%d=%d",n,o_sum);
}

