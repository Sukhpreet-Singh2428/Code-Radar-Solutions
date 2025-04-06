#include<stdio.h>
#include<string.h>
void reverse(char* str, int start, int end){
    while(start<end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    int start = 0;
    for(int i=0; i<=strlen(str); i++){
        if(str[i]==' ' || str[i]=='\0'){
            reverse(str,start,i-1);
            start = i+1;
        }
    }
    puts(str);
    return 0;
}