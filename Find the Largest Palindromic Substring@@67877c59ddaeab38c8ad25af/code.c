#include <stdio.h>
#include <string.h>
int isPalindrome(char* str, int start, int end) {
    while(start < end) {
        if(str[start] != str[end]) return 0;
        start++;
        end--;
    }
    return 1;
}
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  
    int len = strlen(str);
    int i = 0, j = len - 1;
    // Trim matching characters from both ends
    while(i < j && str[i] == str[j]) {
        i++;
        j--;
    }
    // Now check if the middle part is already a palindrome
    if(isPalindrome(str, i, j)) {
        for(int k = i; k <= j; k++) {
            printf("%c", str[k]);
        }
    } 
    return 0;
}