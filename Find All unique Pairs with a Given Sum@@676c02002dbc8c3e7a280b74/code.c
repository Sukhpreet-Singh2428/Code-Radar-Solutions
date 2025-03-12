#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int T;
    scanf("%d", &T);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==T){
                printf("%d %d\n",arr[i],arr[j]);
            }
        }
    }
    return 0;
}