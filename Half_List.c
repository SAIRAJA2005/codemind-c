#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int b[n],j=0;
    for (i=n-1;i>=n/2;i--)
    {
        b[j++]=arr[i];
    }
    for(i=0;i<n/2;i++)
    {
        b[j++]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}