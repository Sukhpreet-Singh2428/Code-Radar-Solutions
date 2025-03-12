#include<stdio.h>
void replacewithGreatest(int arr[],int n){
    int maxright = -1;
    for(int i=n-1;i>=0;i--){
        int temp = arr[i];
        arr[i] = maxright;
        if(temp>maxright){
            maxright = temp;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    replacewithGreatest(arr,n);
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}