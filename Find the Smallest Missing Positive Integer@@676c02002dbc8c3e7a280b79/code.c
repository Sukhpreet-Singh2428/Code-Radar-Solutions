#include<stdio.h>
#include<limits.h>
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    return;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        for(int j=min;j<=max;j++){
            if(arr[i]!=j){
                printf("%d",j);
                break;
            }
        }
    }
}