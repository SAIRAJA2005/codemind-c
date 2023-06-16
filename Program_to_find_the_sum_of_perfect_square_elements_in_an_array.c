#include<stdio.h>
int main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=1;j<=n;j++){
            if (arr[i]==j*j){
                s=s+arr[i];
            }
        }
    }
    printf("%d",s);
}