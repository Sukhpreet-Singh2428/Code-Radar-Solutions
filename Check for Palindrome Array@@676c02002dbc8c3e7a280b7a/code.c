#include<stdio.h>
void reverse(int arr[n],int n){
    int i = 0;
    int j = n-1;
    int check = 1;
    while(i<j){
        arr[i]!=arr[j];
        check = 0;
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
    return 0;
}