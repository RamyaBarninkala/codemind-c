#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        len=len+1;
    }
    printf("%d",len);
}