#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%s",str);
    int i = 0;
    int vowel = 0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') vowel++;
        i++;
    }
    printf("%d",vowel);
    return 0;
}