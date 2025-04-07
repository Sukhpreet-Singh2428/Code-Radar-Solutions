#include<stdio.h>
#include<string.h>
void reverse(char* str1, int len){
    int i = 0;
    int j = len-1;
    while(i<=j){
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
        i++;
        j--;
    }
}
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    char str1[40];
    strcpy(str1,str);
    int len = strlen(str);
    reverse(str1,len);
    int i = 0;
    int j = len-1;
    while(i<len && str[i]==str1[i]) i++;
    while(j>=0 && str[j]==str1[j]) j--;
    for(int k=i;k<=j;k++){
        printf("%c",str[k]);
    }
    return 0;
}