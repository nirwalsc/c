#include <stdio.h>
#include<stdlib.h>
 
int main()
{
    int choice;
    float side, base, length, width , height, area, radius;
 

    printf(" 1. Area of circle\n");
    printf(" 2. Area of rectangle\n");
    printf(" 3. Area of triangle\n");
    printf(" 4. Exit\n");
 
    printf("Enter your choice : ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("Enter the radius : ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of  circle : %f", area);
        break;
    case 2:
        printf("Enter the length and width : ");
        scanf("%f %f", &width, &length);
        area = width * length;
        printf("Area of reactangle : %f", area);
        break;
    case 3:
        printf("Enter the base and height : ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of triangle : %f", area);
        break;
   case 4:

     exit(1);


    }
    return 0;
}
