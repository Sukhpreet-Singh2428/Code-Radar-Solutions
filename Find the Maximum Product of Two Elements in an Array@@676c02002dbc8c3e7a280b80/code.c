#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        int prod = 1;
        for(int j=i+1;j<n;j++){
            prod = arr[i]*arr[j];
            if(prod > max ){
                max = prod;
            }
        }
    }
    printf("%d",max);
    return 0;
}