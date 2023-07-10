#include<stdio.h>
int main(){
    int n;scanf("%d",&n);int k = n,r, count = 0;
    while(n>0){
        r = n%10;count++;n = n/10;
    }
    n = k;
    int l , e = 0 , o = 0 , m = 0;
    while(n!=0){
        l = n%10;
        if (l%2==0) e++;
        else if (l%2!=0) o++;
        else m++;
        n = n/10;
    }
    if (e == count) printf("Even");
    else if (o == count) printf("Odd");
    else printf("Mixed");
}