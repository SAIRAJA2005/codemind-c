#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int k=n;
    for (i=1;i<k;i++){
        if (k%i==0){
            s=s+i;
        }
    }
    if (s>k){
        printf("True");
    }
    else{
        printf("False");
    }
}