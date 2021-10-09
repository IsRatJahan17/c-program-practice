#include<stdio.h>
int main()
{

   float x,y;
   printf("Enter two numbers:");
   scanf( "%f%f",&x,&y);
   float avg=x/y;
   printf("The average of %f and %f are =%.3f \n",x,y,avg);
   return 0;


}
