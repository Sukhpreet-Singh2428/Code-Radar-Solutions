#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=2;j<=arr[i]-1;j++){
            if(arr[i]%j==0){   // This means not prime !!
                count++;  
                break;
            } else if(arr[i]==1 || arr[i]==0){
                break;
            }
        }
    }
    printf("%d", n-count);
    return 0;
}