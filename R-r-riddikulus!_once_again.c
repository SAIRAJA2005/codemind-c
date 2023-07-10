#include<stdio.h>
int main(){
    int n,l; scanf("%d%d",&n,&l); 
    int arr[n],b[n],j=0,i;
    for(i=0;i<n;i++) scanf("%d",&arr[i]);
    for(i=l;i<n;i++)  b[j++] = arr[i];
    for(i=0;i<n;i++)  b[j++] = arr[i];
    for(i=0;i<n;i++) printf("%d ",b[i]);
}