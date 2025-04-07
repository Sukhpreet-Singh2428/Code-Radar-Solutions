#include<stdio.h>
#include<string.h>
void palindrome(char* str1, int len){
    for(int i=0,j=len-1;i<=j;i++,j--){
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
}
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int j = 0;
    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
    int len = j;
    char str1[40];
    strcpy(str1,str);
    palindrome(str1,len);
    if(strcmp(str1,str)==0) puts("Yes");
    else puts("No");
    return 0;
}