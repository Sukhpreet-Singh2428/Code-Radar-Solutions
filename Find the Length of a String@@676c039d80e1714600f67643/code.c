#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    int size = 0;
    for(int i=0;str[i]!='\0';i++){
        size += 1;
    }
    printf("%d",size);
    return 0;
}