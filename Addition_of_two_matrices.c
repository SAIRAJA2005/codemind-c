#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        }    
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }    
    }
    int s[n][n];
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%d ",s[i][j]);
        }printf("
");
    }
}