#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    char str[40];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0';
    int feq = INT_MIN;
    int idx = 0;
    for(int i=0;i<=strlen(str);i++){
        int count = 0;
        char ch = str[i];
        for(int j=i+1;j<=strlen(str);j++){
            if(ch==str[j]) count++;
        }
        if(count>feq){
            feq = count;
            idx = i;
        }
    }
    printf("%s",str[feq]);
    return 0;
}