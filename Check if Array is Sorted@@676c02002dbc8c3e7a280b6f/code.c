#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int check = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            check =1;
        }
    }
    if(check){
        printf("Sorted");
    }else{
        printf("Not Sorted");
    }
    return 0;
}