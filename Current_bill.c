#include<stdio.h>
int main()
{
    int n;
    float b,s;
    scanf("%d",&n);
    if(n<200)
    {
        b=n*1.20;
    }
    else if(n>=200&&n<400)
    {
        b=n*1.50;
    }
    else if(n>=400&&n<600)
    {
        b=n*1.80;
    }
    else if(n>600)
    {
        b=n*2.00;
    }
    if(b>400)
    {
        s=b*0.15;
    }    
    else
    {
        s=100;
    } 
    float to=b+s;
    printf("%.2f",to);
}