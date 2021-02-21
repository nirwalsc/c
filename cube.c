#include <stdio.h>
#include <math.h>
 
void main()
{
    double side, surfacearea, volume;
 
    printf("Enter the length of a side \n");
    scanf("%lf", &side);
    surfacearea = 6.0 * side * side;
    volume = pow(side, 3);
    printf("Surface area = %lf and Volume = %lf \n", surfacearea, volume);
}