#include<stdio.h>
int main(){
    int n,i,x=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char s[100];
        scanf("%s",s);
        if(s[0]=='+' && s[1]=='+') x++;
        else if(s[1]=='+' && s[2]=='+') x++;
        else if(s[0]=='-' && s[1]=='-') x--;
        else if(s[1]=='-' && s[2]=='-') x--;
    }
    printf("%d",x);
}