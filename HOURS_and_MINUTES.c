#include<stdio.h>
int main()
{
    int n,mi,hr;
    scanf("%d",&n);
    hr=n/60;
    mi=n%60;
    printf("%d Hour(s) %d Minute(s)",hr,mi);
}