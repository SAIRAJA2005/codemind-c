#include<stdio.h>
int funn(int n){
    int s=0;
    while(n!=0){
        int r=n%10; s=s*10+r; n=n/10;
    }
    return s;
}
int fun(int n){
    int k = n + funn(n) ; int m = funn(k);
    if (k==m) return m;
    else fun(m);
}
int main()
{
    int n;scanf("%d",&n);int x=fun(n); 
    printf("%d",x);
}