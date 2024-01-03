#include<stdio.h>
int main()
{
    char str[20];
    scanf("%[^/n]s",str);
    int i,c=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            c=c+1;
        }
    }
    printf("%d",c);
}