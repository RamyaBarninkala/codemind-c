#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int i,lower=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
           lower++; 
        }
    }
    printf("%d
",lower);
}