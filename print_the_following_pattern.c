#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        int j;
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("
");
    }
}