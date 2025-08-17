#include<stdio.h>
int main ()
{
float celcius, fahrenheit ;
printf("Enter the temp in celcius:");
scanf("%f", &celcius) ;
fahrenheit =(celcius*9/5)+32;
printf("fahrenheit =%f\n", fahrenheit) ;
return 0;
}