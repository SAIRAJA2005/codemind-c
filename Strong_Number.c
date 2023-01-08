#include<stdio.h>
int main()
{
    int p,f=1,n,s=0,i,r;
    scanf("%d",&p);
    n=p;
    while(n!=0)
    {
        f=1;
        r=n%10;//5
        for(i=1;i<=r;i++)
        {
            f=f*i;//
        }
        s=s+f;
        n=n/10;
    }
    if(s==p)
    printf("The number %d is a strong number",p);
    else
    printf("The number %d is not a strong number",p);
}