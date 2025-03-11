#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int idx = 0;
    for(int i=0;i<n;i++){
        int count = 0
        int alreadycount = 0;
        int IDX = 0;
        for(int k=0;k<i;k++){
            alreadycount = 1;
        }
        if(alreadycount) continue;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                IDX = i;
            }
        }
        if(max<count){
            max = count;
            idx = IDX;
        }
    }
    printf("%d", arr[idx]);
}