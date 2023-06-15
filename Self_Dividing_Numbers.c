#include<stdio.h>
int fun(int n)
{
    int p=n,r;
    while(n!=0)
    {
        r = n%10;
        if (r==0)
        {
            return 0;
        }
        else if(p%r!=0)
        {
            return 0;
        }
        n = n/10;
    }
    return 1;
}
int main()
{
    int n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for (i=n;i<=m;i++)
    {
        if (fun(i)==1)
        {
            printf("%d ",i);
        }
    }
}