void caesarCipher(char* message, int shift, char* encrypted){
    for(int i=0;i<=strlen(message);i++){
        char ch = message[i];
        if(ch>='a' && ch<='z'){
            encrypted[i] = ((ch - 'a' + shift)%26) + 'a';
        } else if(ch>='A' && ch<= 'Z'){
            encrypted[i] = ((ch - 'A' + shift)%26) + 'A';
        }
    }
}