#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m=0;
    for(i=0;i<n;i++){
        if(arr[i]>m){
            m = arr[i];
        }
    }
    int m1 = 0;
    for(i=0;i<n;i++){
        if(arr[i]<m && arr[i]>m1){
            m1 = arr[i];
        }
    }
    int m2=0;
    for(i=0;i<n;i++){
        if(arr[i]<m && arr[i]<m1 && arr[i]>m2){
            m2 = arr[i];
        }
    }
    if(m2>0){
        printf("%d",m2);
    }
    else{
        printf("It is not possible");
    }
}