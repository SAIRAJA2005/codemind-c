#include<stdio.h>
int main()
{
	int a,f,d,r=0,e,s=0;
	scanf("%d",&a);//12
	f=a*a;//144
	while(a!=0)
	{
		d=a%10;
		r=r*10+d;//21
		a=a/10;
	}
	e=r*r;//441
	while(e!=0)
	{
		s=s*10+e%10;//144
		e=e/10;
	}
	if(s==f)
	printf("True");
	else
	printf("False");	
}