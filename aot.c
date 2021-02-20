#include <stdio.h>
 
int main()
{
    double a, b, h;
    double area;
 
    printf("Enter the value for two bases & height of the trapezium: \n");
    scanf("%lf%lf%lf", &a, &b, &h);
    area = 0.5 * (a + b) * h ;
    printf("Area of the trapezium is: %lf", area);
    return 0;
}
