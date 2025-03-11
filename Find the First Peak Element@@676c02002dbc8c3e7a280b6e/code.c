#include<stdio.h>
int peakelement(int arr[],int n){
    if(n==1) return 0;  // single element array : that element peak
    if(n==2){
        if(arr[0]>arr[1]) return 0;
        else return 1;
    }
    for(int i=1;i<n-1;i++){
        if((arr[i]>arr[i-1]) && (arr[i]>arr[i+1])){
            return i;
        }else if(arr[n-1]>arr[i]){
            return n-1;
        }
    }
    return -1;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int idx = peakelement(arr,n);
    if(idx<0){
        printf("%d",-1);
    }else{
        printf("%d", arr[idx]);
    }
    return 0;
}