#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i] ){
            smax = max;
            max = arr[i];
        }else if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }else if(max==arr[i] && n==1){
            smax = -1;
        }
    }
    printf("%d", smax);
    return 0;
}