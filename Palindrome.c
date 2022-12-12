#include<stdio.h>
int main()
{
    int n,d,e=0,j;
    scanf("%d",&n);
    j=n;
    while(n!=0)
    {
        d=n%10;
        e=e*10+d;
        n=n/10;
    }
    if(j==e)
    printf("True");
    else
    printf("False");
}