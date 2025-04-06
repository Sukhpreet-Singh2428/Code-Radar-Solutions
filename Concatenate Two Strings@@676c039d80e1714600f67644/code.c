#include<stdio.h>
#include<string.h>
int main(){
    char str1[40], str2[40];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int j = 0;
    for(int i=strlen(str1); i<=strlen(str2); i++){
        str1[i] = str2[j++];
    }
    puts(str1);
    return 0;
}