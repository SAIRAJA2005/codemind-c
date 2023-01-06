#include<stdio.h>
int main()
{
	int n,key,i,c=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==a[i])
		{
			c++;
	    }
	}
	if(c!=0)
	printf("True");
	else
	printf("False");
}