#include<stdio.h>
#include<math.h>
int main()
{
    int n=1000;
    int a [n-400];
    int p=0;
for( int i=400;i<=n;i++)
{
    int count=0;
    for (int j=2,lim=sqrt(i);j<=lim;j++)
    { if (i%j==0) count++;}
        if (count<1){a[p]=i;p++;}

     for (int i=0;i<p;i++)
    {
        printf("%d\n",a[i]);}
    }
    return 0;
    }





