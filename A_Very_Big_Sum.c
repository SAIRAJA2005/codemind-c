#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%lld",sum);
}