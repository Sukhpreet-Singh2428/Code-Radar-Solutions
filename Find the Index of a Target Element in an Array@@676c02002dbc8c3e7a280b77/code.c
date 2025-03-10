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
    int idx = -1;  // idx ko -1 rakha kyuki agar array me nhi mila toh -1 vrna uska idx. idx = i
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            idx = i;
            break;
        }
    }
    printf("%d", idx);
    return 0;
}