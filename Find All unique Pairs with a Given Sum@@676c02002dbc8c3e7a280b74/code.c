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
        int flag1=0,flag2=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==T & arr[i]!=flag1 &arr[j]!=flag2){
                printf("%d %d\n",arr[i],arr[j]);
                flag1 = arr[i];
                flag2 = arr[j];
            }
        }
    }
    return 0;
}