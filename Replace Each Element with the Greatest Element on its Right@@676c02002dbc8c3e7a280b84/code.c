#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int brr[n];
    for(int i=1;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                brr[i-1] = arr[j];
            }
        }
    }
    brr[n-1] = -1;
    for(int i=0;i<n;i++){
        printf("%d ", brr[i]);
    }
    return 0;
}