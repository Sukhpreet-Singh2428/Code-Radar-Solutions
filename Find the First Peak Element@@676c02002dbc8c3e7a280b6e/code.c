#include<stdio.h>
int peakelement(int arr[],int n){
    if(n==1) return 0;  // single element array : that element peak
    if(arr[o]>=arr[1]) return 0;  // check first element
    if(arr[n-1]>=arr[n-2]) return n-1;  // check last element
    for(int i=1;i<n-1;i++){
        if((arr[i]>=arr[i-1]) && (arr[i]>=arr[i+1])){
            return i;
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
    printf("%d", arr[idx]);
    return 0;
}