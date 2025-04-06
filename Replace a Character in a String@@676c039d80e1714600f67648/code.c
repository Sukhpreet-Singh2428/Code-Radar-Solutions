#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    char ch, new_ch;
    scanf("%c %c", &ch, &new_ch);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==ch){
            str[i] = new_ch;
        }
    }
    printf("%s",str);
    return 0;
}