#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int s=a+b,m=a-b,p=a*b,d=a/b,g=a%b;
    printf("Sum:%d
",s);
    printf("Difference:%d
",m);
    printf("Product:%d
",p);
    printf("Quotient:%d
",d);
    printf("Remainder:%d
",g);
}