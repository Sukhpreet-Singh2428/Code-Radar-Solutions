#include<stdio.h>
#include<string.h>
int main(){
    char str[40];
    scanf("%s",str);
    int size=0;
    while(str[size]!='\0'){
        size++;
    }
    for(int i=0,j=size-1; i<=j; i++,j--){   // or built-in fuction strrev(str);
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
    return 0;
}