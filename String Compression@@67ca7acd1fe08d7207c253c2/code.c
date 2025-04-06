#include<string.h>
void compressString(char* str, char* compressed){
    int j = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++){
        char ch = str[i];
        int count = 1;
        for(int k=i+1;k<len;k++){
            if(ch==str[k]) count++;
        }
        sprintf(compressed, "%c%d", ch, count);
    }
}