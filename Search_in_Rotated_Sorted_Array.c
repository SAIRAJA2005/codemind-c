#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sea,c=0;
    scanf("%d",&sea);
    for(i=0;i<n;i++)
    {
        if (arr[i]==sea)
        {
            c = 1;
            printf("%d",i);
            break;
        }
    }
    if (c==0)
        printf("-1");
}