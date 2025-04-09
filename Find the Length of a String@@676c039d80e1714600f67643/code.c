#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    int size = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
    return 0;
}