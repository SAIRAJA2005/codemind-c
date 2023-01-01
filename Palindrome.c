#include<stdio.h>
int main()
{
    int s,n,r=0;
    scanf("%d",&n);
    s=n;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(s==r)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}