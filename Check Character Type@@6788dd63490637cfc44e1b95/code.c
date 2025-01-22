#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    if(c=='a' | c=='e' | c=='i' | c=='o' | c=='u') {
        printf("Vowel");
    } else if(c>=0 && c<=10) {
        printf("Digit");
    } else if(c=='!' | c=='@' | c=='#' | c=='$' | c=='%' | c=='^' | c=='&' | c=='*') {
        printf("Special Character");
    } else {
        printf("Consonant");
    }
    return 0;
}