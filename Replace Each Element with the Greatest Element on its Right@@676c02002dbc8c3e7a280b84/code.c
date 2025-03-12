#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int brr[n];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i+1]<arr[j]){
                brr[i] = arr[j];
            }
        }
    }
    brr[n-1] = -1;
    for(int i=0;i<n;i++){
        printf("%d ", brr[i]);
    }
    return 0;
}