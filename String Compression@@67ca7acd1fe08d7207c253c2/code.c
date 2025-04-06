#include<string.h>
void compressString(char* str, char* compressed) {
    int len = strlen(str);
    int j = 0;  // index for compressed
    for(int i = 0; i < len;) {
        char ch = str[i];
        int count = 1;
        while(i + 1 < len && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        // Add character
        compressed[j++] = ch;
        // Convert count to string and append
        char countStr[10];
        sprintf(countStr, "%d", count);
        for(int k = 0; countStr[k] != '\0'; k++) {
            compressed[j++] = countStr[k];
        }
        i++; // Move to next new character
    }
    compressed[j] = '\0';  // Null-terminate
}