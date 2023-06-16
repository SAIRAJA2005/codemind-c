#include<stdio.h>
int main()
{
    int n=3,i,j;
    int a[3];
    int b[3];
    for (i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for (i=0;i<3;i++){
        scanf("%d",&b[i]);
    }
    int c=0,d=0;
    for (i=0;i<3;i++){
        if (a[i]>b[i]){
            c++;
        }
        else if (a[i]<b[i]){
            d++;
        }
        else{
           continue; 
        }
    }
    printf("%d %d",c,d);
}