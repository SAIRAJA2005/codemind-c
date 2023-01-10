#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        int f=1,s,i;
        scanf("%d",&s);
        for(i=1;i<=s;i++)
        {
            f=f*i;
        }
        printf("%d
",f);
    }    
}