#include<stdio.h>
int fun(int n)
{
    int i;
    for(i=2;i<n/2;i++)
    {
        if (n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,k,k1,i,c=0,p;
    scanf("%d",&n);
    for (i=2;i<n/2;i++)
    {
        if (n%i==0)
        {
            p = i;
            if (fun(p)==1)
            {
                k=n/p;
                if (fun(k)==1)
                {
                    c=1;
                    k1 = k;
                    printf("%d %d",p,k1);
                    break;
                }
            }
        }
    }
    if (c==0) printf("-1");
}