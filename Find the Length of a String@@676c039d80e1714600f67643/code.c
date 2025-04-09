#include<stdio.h>
// #include<string.h>
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    // fgets(str, sizeof(str), stdin);
    // str[strcspn(str,"\n")] = '\0';
    int size = 0;
    for(int i=0;str[i]!='\0';i++){
        size++;
    }
    printf("%d",size);
    return 0;
}