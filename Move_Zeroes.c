#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    int arr[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if (arr[i]!=0){
            b[j++]=arr[i];
        }
    }
    for(i=0;i<n;i++){
        if (arr[i]==0){
            b[j++]=arr[i];
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",b[i]);
    }
}