#include<stdio.h>
int main()
{
    int p,m,n,lcm,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m&&i<=n;i++)
    {
        if(m%i==0&&n%i==0)
        {
            p=i;
        }
    }
    lcm=(m*n)/p;
    printf("%d",lcm);
}