#include<stdio.h>
int main()
{
    int n,k,m,g;
    scanf("%d%d%d",&n,&k,&m);
    g=k*m;
    if(n==g)
    printf("%d",g/n);
    else if(n%g==0)
    printf("%d",n/g);
    else
    printf("%d",(n/g)+1);
}