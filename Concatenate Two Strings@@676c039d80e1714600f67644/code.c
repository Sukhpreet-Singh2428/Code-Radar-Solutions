#include<stdio.h>
#include<string.h>
int main(){
    char str1[40], str2[40];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int j = 0;
    for(int i=strlen(str1); str2[j]!='\0'; i++){
        str1[i] = str2[j++];
    }
    str1[strlen(str1)+j] = '\0';
    puts(str1);
    return 0;
}