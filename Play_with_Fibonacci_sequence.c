#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a,b,c;
    a = 0;
    b = 1;
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
}