#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        int check = 1;
        for(int j=0;j<n;j++){
            if(arr[i]<arr[j]){
                check = 0;
            }
        }
        if(check){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}