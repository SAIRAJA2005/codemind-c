#include<stdio.h>
int main()
{
	int c,a,r=0,b,f;
	scanf("%d",&a);
	c=a;//123456
	b=a%1000;
	int s=b;
	while(b!=0)
	{
		r=r*10+b%10;//21
		b=b/10;
	}
	f=(c-s)+r;
	printf("%d",f);
}