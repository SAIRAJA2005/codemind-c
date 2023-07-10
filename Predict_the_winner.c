#include<stdio.h> 
#include<stdlib.h>
int main(){
    int n,a=0,b=0; scanf("%d",&n); int arr[n],i;
    for (i=0;i<n;i++) scanf("%d",&arr[i]);
    for (i=0;i<n;i++){
        if (i%2==0) a = a + arr[i];
        else b = b + arr[i];
    }
    int k =  abs(b-a);
    if (k%4==0) printf("X");
    else printf("Y");
}