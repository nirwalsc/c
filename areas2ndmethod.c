#include<stdio.h>
int main()
{
    int a, i;
    double rectangle,b,c, d ,r,e,g,radius,triangle;
    for(i=1;i<5;i++)
    {
        printf("1.area of circle\n");
        printf("2.area of rectangle\n");
        printf("3.area of triangle\n");
        printf("4. exit\n");
        printf("enter your choice");
        scanf("%d",&a);
        if(a==4)
        {
            return 0;
        }
        if(a==2)
        {
             printf("enter length and breadth : ");
             scanf("%lf%lf",&b,&c);
             rectangle=b*c;
              printf("area of rectangle :%lf\n",rectangle);
        
        }
         if(a==3)
        {
             printf("enter base and height : ");
             scanf("%lf%lf",&e,&g);
             triangle=(e*g)/2;
              printf("area of triangle :%lf\n",triangle);
        
        }
         if(a==1)
        {
             printf("enter radius : ");
             scanf("%lf",&d);
             radius =3.14*d*d;
              printf("area of circle :%lf\n",radius);
        
        } 
        if(a==4)
        {
             printf("exit\n");
        
        }
        
    }
    return 0;
}