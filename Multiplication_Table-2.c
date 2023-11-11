#include<stdio.h>
int main()
{
    int i,n,r;
    scanf("%d%d",&n,&r);
    i=1;
    while(i<=r)
    {
        printf("%d x %d = %d
",n,i,n*i);
        i++;
    }
}