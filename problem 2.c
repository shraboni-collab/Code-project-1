#include<stdio.h>
int main ()
{
int x,y;
printf("First integer number:\n");
scanf("%d", &x);
printf("Second integer number:\n");
scanf(" %d", &y);
if(x==y){
printf("The two integer number equal\n");
}
else{
printf("The two integer number are not equal \n");
}
return 0;
}