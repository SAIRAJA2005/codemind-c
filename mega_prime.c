#include<stdio.h>
int fun(int n){
    if(n==1) return 0;
    else{
        int i;for(i=2;i<=n/2;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
}
int main(){
    int n; scanf("%d",&n);int count=0,c=0,r; 
    int x = fun(n);
    if (x == 1){
        while(n!=0){
            r = n%10; c++;
            if (fun(r)==1) count++; n =  n / 10;
        }
        if (c==count) printf("Mega Prime");
        else printf("Not Mega Prime");
    }
    else printf("Not Mega Prime");
}