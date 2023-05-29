#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int s=0;
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            if(i==j || i+j==n-1){
                s+=arr[i][j];
            }
        }
    }
    printf("%d ",s);
}