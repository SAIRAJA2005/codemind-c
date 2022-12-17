#include<stdio.h>
int main()
{
    int a,b,c,p;
    scanf("%d%d%d",&a,&b,&c);
    if(c>a&&c>b)
    {
        if(b>a)
        printf("%d",b+c);
        else
        printf("%d",a+c);
    }
    else if(b>a&&b>c)
    {
        if(a>c)
        printf("%d",b+a);
        else
        printf("%d",c+b);
    }
    else
    {
        printf("%d",b+c);
    }
    
}