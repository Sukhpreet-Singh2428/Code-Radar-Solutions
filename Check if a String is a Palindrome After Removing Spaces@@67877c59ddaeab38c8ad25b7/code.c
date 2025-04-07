#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
    int len = strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]!=' '){
            str[j++] = tolower(str[i]);  // case sensitive : ek test case hai treating upper and lower letter same.
        }
    }
    str[j] = '\0';
    len = j;  // update kari hai length of string after removing spaces
    char str1[40];
    strcpy(str1,str);
    palindrome(str1,len);
    if(strcmp(str1,str)==0) puts("Yes");
    else puts("No");
    return 0;
}