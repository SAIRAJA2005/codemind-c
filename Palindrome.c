#include<stdio.h>
int main()
{
    int i,d,r=0,n;
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;
    }
    if(i==r)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}