#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    if(c=='a' | c=='e' | c=='i' | c=='o' | c=='u') {
        printf("Vowel");
    } else if((c>='a' && c<='z') && !(c=='a' | c=='e' | c=='i' | c=='o' | c=='u')) {
        printf("Consonant");
    } else if(c=='!' | c=='@' | c=='#' | c=='$' | c=='%' | c=='^' | c=='&' | c=='*' | c=='{}') {
        printf("Special Character");
    } else {
        printf("Digit");
    }
    return 0;
}