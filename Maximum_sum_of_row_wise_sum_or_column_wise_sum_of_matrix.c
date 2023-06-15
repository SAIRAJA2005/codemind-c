#include<stdio.h>
int main()
{
    int n,i,j,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int s,max=0,s1,maax=0;
    for (j=0;j<m;j++){
        s = 0;
        for (i=0;i<n;i++){
            s=s+a[i][j];
        }
        if (s>max){
            max = s;
        }
    }
    for (i=0;i<n;i++){
        s1 = 0;
        for (j=0;j<m;j++){
            s1=s1+a[i][j];
        }
        if (s1>maax){
            maax=s1;
        }
    }
    if (max>maax){
        printf("%d",max);
    }
    else{
        printf("%d",maax);
    }
}