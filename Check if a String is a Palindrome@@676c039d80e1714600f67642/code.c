#include<stdio.h>
#include<string.h>
void reverse(char str1[], int size){
    for(int i=0,j=size-1; i<=j; i++,j--){
        char temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }
}
int main(){
    char str[40];
    scanf("%[^\n]s",str);
    int k = 0;
    int size = 0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    char str1[40];
    for(int i=0;i<size;i++){
        str1[i] = str[i];
    }
    reverse(str1,size);
    int flag = 0;
    for(int i=0;i<size;i++){
        if(str[i]==str1[i]) flag = 1;
        else flag = 0;
    }
    if(flag==1) puts("Yes");
    else puts("No");
    return 0;
}