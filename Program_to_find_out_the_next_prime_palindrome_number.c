#include<stdio.h>
int fun(int n){
    int i;
    for (i=2;i<=n/2;i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int funn(int n){
    int k = n,s=0,r;
    while(n!=0){
        r = n%10;s = s*10+r;n = n/10;
    }
    if (k==s) return 1;
    else return 0;
}
int main(){
    int n,i; scanf("%d",&n); i=n+1;
    while(1){
        if (fun(i)==1 && funn(i)==1) {
            printf("%d",i); break;
        }
        i++;
    }
}