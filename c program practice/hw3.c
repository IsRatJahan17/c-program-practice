#include<stdio.h>
int main()
{

    int x,y,mod;
    printf("Enter two number:");
    scanf("%d%d",&x,&y);
    float avg=x/y;
    mod = x%y;
    printf("the avg number of %d & %d = %f",x,y,avg);
    printf("The mod of %d & %d = %d",x,y,mod);
    return 0;







}
