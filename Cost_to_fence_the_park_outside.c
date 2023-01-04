#include<stdio.h>
int main()
{
    int l,b,w,c,p,ar;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    p=l*b;
    ar=(l+2*w)*(b+2*w)-p;
    int i=ar*c;
    printf("%d",i);
}