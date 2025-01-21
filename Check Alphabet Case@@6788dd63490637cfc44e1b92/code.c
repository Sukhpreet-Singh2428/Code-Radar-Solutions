#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    if('A'>=c && c<='Z'){
        printf("Uppercase");
    } else if('a>=c && c<=z'){
        printf("Lowercase");
    } else{
        printf("Not an alphabet");
    }
    return 0;
}