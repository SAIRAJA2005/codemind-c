#include<stdio.h>
#include<string.h>
int main(){
    char s[20]; scanf("%s",&s);
    if (strlen(s)==10 && s[0] != '0') printf("Valid");
    else printf("Invalid");  
}