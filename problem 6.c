#include<stdio.h>
int main ()
{
int length, centimeters,meters,kilometers;
printf("Enter the length in centimeters:");
scanf("%d", &length) ;
meters=centimeters/100;
kilometers=centimeters/100000;
printf("meters=%d\n", meters);
printf("kilometers=%d\n", kilometers ) ;
return 0;
}