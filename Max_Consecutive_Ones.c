#include<stdio.h>
int main(){
    int n,i,j; scanf("%d",&n); int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int c,max=0;
    for(i=0;i<n;i++){
        if(a[i]==1){
            c=0;
            for(j=i;j<n;j++){
                if(a[i]==a[j]) c++;
                else break;
            }
        }
        if(c>max) max=c;
    }
    printf("%d",max);
}