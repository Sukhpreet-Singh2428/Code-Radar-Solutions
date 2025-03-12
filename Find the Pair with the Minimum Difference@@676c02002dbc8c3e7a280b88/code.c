#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int diff = INT_MAX;
    int num1=0,num2=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int x = arr[i] - arr[j];
            if(x<diff){
                diff = x;
                num1 = i;
                num2 = j;
            }
        }
    }
    if(arr[num1]>arr[num2]) printf("%d %d",arr[num1],arr[num2]);
    else printf("%d %d",arr[num2],arr[num1]);
    return 0;
}