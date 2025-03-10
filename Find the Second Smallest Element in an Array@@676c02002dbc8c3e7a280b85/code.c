#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i] && n!=1){
            smin = min;
            min = arr[i];
        }else if(smin<arr[i] && arr[i]!=min && n!=1){
            smin = arr[i];
        }else if(min==arr[i] || n==1){
            smin = -1;
        }
    }
    printf("%d", smin);
    return 0;
}