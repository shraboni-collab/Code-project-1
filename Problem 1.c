#include<stdio.h>
int main()
{
int x,y,temp;
printf("Enter first number:");
scanf("%d", &x);
printf("Enter second number:");
scanf("%d", &y);
temp=x;
x=y;
y=temp;
printf(" First number =%d\n", x);
printf("second number =%d\n", y);
return 0;
}