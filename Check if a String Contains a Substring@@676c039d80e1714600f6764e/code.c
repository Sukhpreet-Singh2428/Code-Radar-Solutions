#include<stdio.h>
#include<string.h>
int check(char* str1, char* str2, int start, int end){
    int j = 0;
    for(int i=start; i<=end; i++){
        if(str1[i]!=str2[j++]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str1[40], str2[40];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    int start = 0;
    int flag = 0;
    for(int i=0; i<=strlen(str1); i++){
        if(str1[i]==' ' || str1[i]=='\0'){
            flag = check(str1,str2,start,i-1);
        }
        start = i+1;
        if(flag==1){
            printf("Yes");
            return 0;
        }
    }
    printf("No");
    return 0;
}