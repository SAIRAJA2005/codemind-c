#include<stdio.h>
int weird(int n)
{
 if(n%2!=0)
  {
   return 1;
  }
   else if (n%2==0&&n>2&&n<5) 
   {
    return 2; 
   }
    else if(n%2==0&&n>6&&n<20) 
   { 
   return 3;
   } 
   else 
   {
    return 4; 
	}
}
int main()
{
 int n; 
 scanf("%d",&n);
  int x=weird(n);
   if(x==1||x==3)
     {
	   printf("weird");
	 } 
	 else
  { 
  printf("not weird"); 
  }
}