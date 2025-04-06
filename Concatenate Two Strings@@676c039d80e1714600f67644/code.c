#include<stdio.h>
#include<string.h>
int main(){
    char str1[40], str2[40];
    fgets(str1, sizeof(str1), stdin);  // --> str1\n\0
    fgets(str2, sizeof(str2), stdin);
    // Remove trailing newline if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    int j = 0;
    for(int i=strlen(str1); str2[j]!='\0'; i++){
        str1[i] = str2[j++];
    }
    str1[strlen(str1)+j] = '\0';
    // puts(str1);
    printf("%s", str1);
    return 0;
}