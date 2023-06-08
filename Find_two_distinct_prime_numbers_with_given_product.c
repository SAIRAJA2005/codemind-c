#include<stdio.h>
int fun(int n)
{
    int i;
    for (i=2;i<=n/2;i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int main()
{
    int n,i,c=0,r,k;
    scanf("%d",&n);
    for (i=2;i<n;i++){
        if (n%i==0){ 
                 r = i;
            if (fun(r)==1){
                    k = n/r;
                if (fun(k)==1){
                    c = 1;
                    printf("%d %d",r,k);
                    break;
                }
            }
        }
    }
    if (c==0) printf("-1");
}