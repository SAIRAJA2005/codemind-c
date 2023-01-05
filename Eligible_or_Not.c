#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,x,y;
        scanf("%d%d%d",&x,&y,&n);
        if(n>=x&&n<y)
        printf("YES
");
        else
        printf("NO
");
    }
   
}