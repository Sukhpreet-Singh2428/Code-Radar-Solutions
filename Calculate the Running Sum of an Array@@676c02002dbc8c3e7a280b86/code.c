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
        int sum = 0;
        for(int j=0;j<=i;j++){
            sum += j;
        }
        brr[i] = sum;
    }
    for(int i=0;i<n;i++){
        printf("%d ", brr[i]);
    }
    return 0;
}