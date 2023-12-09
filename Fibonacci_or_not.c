#include<stdio.h>
int main()
{
    int a=0,b=1,c,flag=0,n;
    scanf("%d",&n);
    c=a+b;
    while(c<=n)
    {
        if(c==n)
        {
            flag=1;
            break;
        }
    a=b;
    b=c;
    c=a+b;
}
 if(flag==1)
 {
    printf("True");
 }
 else
 {
    printf("False");
 }
}