#include<stdio.h>
int main()
{
    float basicsalary,hra,da,grosssalary,pf;
    scanf("%f%f%f",&basicsalary,&hra,&da);
    pf=0.12*basicsalary,grosssalary=basicsalary+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f
",grosssalary);
}