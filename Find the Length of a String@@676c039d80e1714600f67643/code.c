#include<stdio.h>
int main(){
    int size = 0;
    char str[40];
    scanf("%[^\n]s",str);
    for(int i=0;str[i]!='\0';i++){
        size += 1;
    }
    printf("%d",size);
    return 0;
}