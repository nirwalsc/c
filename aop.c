#include <stdio.h>
 
int main()
{
    double base, altitude;
    double area;
 
    printf("Enter base and altitude of the given Parallelogram: \n ");
    scanf("%lf%lf", &base, &altitude);
    area = base * altitude;
    printf("Area of Parallelogram is: %lf\n", area);
    return 0;
}
