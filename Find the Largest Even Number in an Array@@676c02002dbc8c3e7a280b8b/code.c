#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    int check = 0;   // To handle the case of no even numbers exist in array !!!
    for(int i=0;i<n;i++){
        if((max<arr[i]) && arr[i]%2==0){
            max = arr[i];
        }
        else if(arr[i]%2!=0){     // To handle the case of no even numbers exist in array !!!
            check++;
        }
    }
    if(n-check==0){
        max = -1;
        printf("%d", max);
    }else{
        printf("%d", max);
    }
    return 0;
}