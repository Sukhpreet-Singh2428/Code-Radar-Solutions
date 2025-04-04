#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    int k = 0;
    int size = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    if(str=='\0') printf("%d",0);
    else printf("%d",size);
    return 0;
}