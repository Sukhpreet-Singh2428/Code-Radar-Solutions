#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    int idx;
    int notfound = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            idx = i;
            break;
        }else{
            notfound = 1;
        }
    }
    if(notfound){
        printf("-1");
    }else{
        printf("%d", idx);
    }
    return 0;
}