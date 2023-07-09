#include<stdio.h>
int main(){
    int n,i,r1 = 0,r2 = 0;scanf("%d",&n);
    for (i=1;i<=n+1;i++){
        if (i%2==0){
            printf("%d ",r1);
            r1 = r1 + 1;
        }
        else{
            printf("%d ",r2);
            r2 = r2+2;
        }
    }
}