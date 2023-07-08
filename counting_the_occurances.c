#include<stdio.h>
#include <string.h>
int main(){
    char s[1000],c;  
    int i,count=0;
    scanf("%[^
]%*c", s);
    scanf("%c",&c);
    for(i=0;s[i];i++)  {
    	if(s[i]==c) count++;
 	}
    if (count==0) printf("-1");
    else printf("%d",count);
}