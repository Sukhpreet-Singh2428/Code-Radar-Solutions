#include<stdio.h>
void reverse(int arr[],int n){
    int i = 0;
    int j = n-1;
    int check = 1;
    while(i<j){
        if(arr[i]!=arr[j]){
            check = 0;
            break;
        }
        i++;
        j--;
    }
    if(check){
        printf("YES");
    }else{
        printf("NO");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    reverse(arr,n);
    return 0;
}