#include<stdio.h>
#include<string.h>
int main(){
    char s[100]; scanf("%s",s); int i , c , j ,f=0;
    for (i=0;i<strlen(s);i++){
        c = 0;
        for (j=0;j<strlen(s);j++){
            if (s[i]==s[j]) c++;
        }
        if (c!=1) {
            f = 1; printf("Not Unique Number");  break;
        }
    }
    if (f==0) printf("Unique Number");
}