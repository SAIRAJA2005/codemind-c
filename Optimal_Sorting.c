#include<stdio.h>
int fun(int *arr,int n){
    int i;
    for(i=0;i<n-1;i++)
    {
        if (arr[i]>arr[i+1])  return 0;
    }
    return 1;
}
int main()
{
    int p,j;
    scanf("%d",&p);
    for(j=0;j<p;j++){
        int n,i;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        if (fun(arr,n)==1) printf("0");
        else{
            int min=100,max=0;
            for(i=0;i<n;i++){
                if (arr[i]>max) max = arr[i];
                if (arr[i]<min) min = arr[i];
            }
            printf("%d
",max-min);
        }
    }
}