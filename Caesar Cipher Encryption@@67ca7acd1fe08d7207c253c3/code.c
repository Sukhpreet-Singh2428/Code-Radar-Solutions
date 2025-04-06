#include<string.h>
void caesarCipher(char* message, int shift, char* encrypted){
    int len = strlen(message);
    for(int i=0;i<len;i++){
        char ch = message[i];
        if(ch>='a' && ch<='z'){
            encrypted[i] = ((ch - 'a' + shift)%26) + 'a';
        } else if(ch>='A' && ch<= 'Z'){
            encrypted[i] = ((ch - 'A' + shift)%26) + 'A';
        }else{
            encrypted[i] = ch; // Copy spaces or other characters as-is
        }
    }
    encrypted[len] = '\0';
}