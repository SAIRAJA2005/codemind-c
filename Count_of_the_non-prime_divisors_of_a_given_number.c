#include<stdio.h>
int fun(int n)
{
    int i;
    for (i=2;i<=n/2;i++){
        if (n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i,k,c=2;
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            k = i;
            if (fun(k)==0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}