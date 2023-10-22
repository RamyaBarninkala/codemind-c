#include<stdio.h>
int main()
{
    int y,z,x;
    scanf("%d%d%d",&y,&z,&x);
    int k=2*(y+z);
    int cost=(k*x);
    printf("%d",cost);
}