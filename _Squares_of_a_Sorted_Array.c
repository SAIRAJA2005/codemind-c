#include<stdio.h>
int main(){
    int n,s,i,k=0,temp,j; scanf("%d",&n); int a[n],b[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) b[k++]=a[i]*a[i];
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(b[j]>b[j+1]){
                temp=b[j]; b[j]=b[j+1]; b[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++) printf("%d ",b[i]);
}