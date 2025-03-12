#include<stdio.h>
int main(){
    int n,T;
    scanf("%d", n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &T);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==T){
                printf("%d %d",i,j);
            }
        }
    }
    return 0;
}