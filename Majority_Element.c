#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n],b[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c,k=0,l,j;
    for(i=0;i<n;i++){
        c = 0;
        for(j=0;j<n;j++){
            if (arr[i]==arr[j]){
               c++; 
            }
        }
        if (c>k){
            k = c;
            l = arr[i];
        }
    }
    printf("%d",l);
}