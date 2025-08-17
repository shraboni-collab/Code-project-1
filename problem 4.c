#include<stdio.h>
int main()
{
float radius,diameter,circumference, area;
printf ("Enter the radius of the circle:");
scanf("%f", &radius) ;
diameter =2*radius;
circumference =2*3.1416*radius;
area=3.1416*radius*radius;
printf("diameter:%f\n", diameter) ;
printf("circumference:%f\n", circumference) ;
printf("area:%f\n", area);
return 0;
}