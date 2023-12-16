#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int a[n],i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   float sum=0,avg;
   scanf("%f",&avg);
   for(i=0;i<n;i++)
   {
      sum=sum+a[i];
      avg=sum/n;
   }
   printf("%.2f",avg);
}