#include<stdio.h>
int main()
{
    int i,n,a,b,r,f=1;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        f=0;
        n=i;
        while(n!=0)
       {
        r=n%10;
        if(r==0 || i%r!=0)
        {
            f=1;
        }
        n=n/10;
       }
    if(f==0)
    {
        printf("%d ",i);
    }
  }
}