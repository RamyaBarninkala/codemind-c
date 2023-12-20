#include<stdio.h>
int main()
{ 
  int u;
  scanf("%d",&u);
 float bill,c;
if(u<200)
{
  c=1.20;
}
else if(u>=200 && u<400)
{
c=1.50;
}
else if (u>400 && u<600)
{
c=1.80;
}
else
{
c=2.00;
}
float b=u*c;
if(b>400)
{
   bill=b+(b*0.15);
}
else
{
bill=b+100;
}
printf("%.2f",bill);
}