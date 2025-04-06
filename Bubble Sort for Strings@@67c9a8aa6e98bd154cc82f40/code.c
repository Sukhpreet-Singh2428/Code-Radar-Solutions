#include<string.h>
void swap(char i[], char j[]){
    char temp[100];
    strcpy(temp,i);
    strcpy(i,j);
    strcpy(j,temp);
}
void bubbleSort(char arr[][100], int n){
    for(int i=0;i<n;i++){
        for(int j=0; j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void printArray(char arr[][100], int n){
    for(int i=0;i<n;i++){
        puts(arr[i]);
    }
}