#include<stdio.h>
int main()
{
    int x,b,a;
    scanf("%d%d%d",&x,&a,&b);
    if(a+(2*b)>=x)
    {
        printf("Qualify");
    }
    else 
    {
        printf("Not Qualify");
    }
}