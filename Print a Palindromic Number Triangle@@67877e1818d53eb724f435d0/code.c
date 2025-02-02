#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){  //loop to print the increasing numbers
            printf("%d",j);
        }
        for(int j=i-1;j>=1;j--){  //loop to print the decreasing numbers
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}