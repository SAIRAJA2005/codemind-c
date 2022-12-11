#include<stdio.h>
int main()
{
    int n,f,rev=0,p,e=0,d,lal;
    scanf("%d",&n);
    f=n*n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    lal=rev*rev;
    while(lal!=0)
    {
        e=e*10+(lal%10);
        lal=lal/10;
    }
    if(e==f)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}