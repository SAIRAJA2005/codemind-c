#include<stdio.h>
int main(){
    int n,i; scanf("%d",&n); int arr[n],max = 0 ;
    for (i=0;i<n;i++) scanf("%d",&arr[i]);
    int se; scanf("%d",&se);
    for ( i = 0 ; i < n ; i ++ ){
        if (arr[i]>max) max = arr[i];
    }
    for (i = 0 ; i < n ;i++){
        if (arr[i] + se >= max) printf("True ");
        else printf("False ");
    }
}