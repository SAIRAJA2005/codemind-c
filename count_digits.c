#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s,c,r;
    for(i=0;i<n;i++){
        c = 0;
        s = arr[i];
        if (s==0){
            c++;
        }
        else{
            while(s!=0){
                r = s%10;
                c++;
                s = s/10;
            }
        }
        printf("%d ",c);
    }
}