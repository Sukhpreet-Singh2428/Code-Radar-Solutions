#include<stdio.h>
#include<strings.h>
void reverse(char* str1, int len){
    strrev(str1);
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
    while(i<=j){
        if(str[i]==str1[i]) break;
        if(str[j]==str1[j]) break;
        i++;
        j--;
    }
    for(int k=i;k<=j;k++){
        printf("%c",str[k]);
    }
    return 0;
}