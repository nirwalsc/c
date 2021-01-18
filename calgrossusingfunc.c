#include<stdio.h>
double calculategross(double);
int main()
{
   double ta,grosssalary;
   printf("enter basic salary=");
   scanf("%lf",&ta);
   grosssalary=calculategross(ta);
   printf("gross salary=%lf",grosssalary);
   return 0;



}
double calculategross(double bs)
{
    double gs,hra,da;
    da=0.35*bs;
    hra=0.15*bs;
    gs=bs+da+hra;
    return gs;


}