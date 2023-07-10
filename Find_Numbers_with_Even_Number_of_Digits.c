#include<stdio.h>
#include<stdlib.h>
int fun(int n){
    int r,k=0;
    while(n!=0){
        r = n%10;
        k++;
        n = n/10;
    }
    if (k%2==0) return 1;
    else return 0;
}
int main(){
    int n,c=0,i; scanf("%d",&n) ; int arr[n];
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for (i=0;i<n;i++){
        if (fun(arr[i])==1) c++;
    }
    printf("%d",c);
}