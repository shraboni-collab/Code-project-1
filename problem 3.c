#include<stdio.h>
int main ()
{
int years, weeks, days;
printf("Enter the number of days:");
scanf("%d", &days);
years=days/365;
weeks =(days%365)/7;
days=(days%365)%7;
printf ("years:%d\n", years) ;
printf ("weeks:%d\n", weeks);
printf("days:%d\n", days);
return 0;
}