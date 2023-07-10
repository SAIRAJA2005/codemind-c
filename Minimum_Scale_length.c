#include<stdio.h>
int main(){
    int n,i,j=1; scanf("%d",&n); int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    while(j<n){
        if (arr[j]%min==0) j++;
        else min = arr[j]%min;
    }
    printf("%d",min);
}