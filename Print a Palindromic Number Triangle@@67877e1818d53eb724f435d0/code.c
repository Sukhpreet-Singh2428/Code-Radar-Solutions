#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=(2*i-1);j++){
            if(num==1){
                printf("%d",num);
                num++;
            } else if(num==2){
                printf("%d",num);
                num--;
            }
        }
        printf("\n");
    }
    return 0;
}