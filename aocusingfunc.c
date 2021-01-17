#include<stdio.h>
double aoc(double);
int main()
{
  double radius,result;
  printf("enter radius=");
  scanf("%lf",&radius);
  result=aoc(radius);
  printf("%lf",result);
  return 0;
}
double aoc(double r)
{
    double pi=3.14;
    double area;
    area=pi*r*r;
    return(area);

}
