#include<stdio.h>
int main()
{
    int a,b;
    float c,d;
    scanf("%d%d%f%f",&a,&b,&c,&d);
    int f=a+b;
    int g=a-b;
    printf("%d %d
",f,g);
    float r=c+d;
    float t=c-d;
    printf("%0.1f %0.1f",r,t);
}