#include<stdio.h>
int main()
{
    int n,k,x,y,c;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(n==k)
    printf("%d",k*x);
    else if(n>k&&x<y)
    printf("%d",(k*x)+(n-k)*x);
    else
    printf("%d",k*x+(n-k)*y);
}