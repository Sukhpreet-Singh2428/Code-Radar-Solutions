#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    int i = 0;
    int vowel = 0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') vowel++;
        i++;
    }
    printf("%d",vowel);
    return 0;
}