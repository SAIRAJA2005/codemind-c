#include<stdio.h>
int main()
{
    int a;
    float b,c;
    scanf("%d",&a);
    b=3.14*a*a;
    c=2*3.14*a;
    printf("%.2f
%0.2f",b,c);
}