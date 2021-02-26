#include<stdio.h>
#include<math.h>
int main()
{
    printf("Enter the length of the side:");
    int a;
    scanf("%d",&a);
    double area=(3*sqrt(3)*pow(a,2))/2.0;
    int perimeter=(6*a);
    printf("Area of the Hexagon = %lf\n",area);
    printf("Perimeter of the Hexagon = %d",perimeter);
}