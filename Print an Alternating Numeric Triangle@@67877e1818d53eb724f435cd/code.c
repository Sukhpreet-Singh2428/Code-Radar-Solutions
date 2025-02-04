#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int num=1;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=i;j++) {
            printf("%d ",num);
            if(j%2==0){
                if(num==1) {
                    num=0;
                } else if(num==0) {
                    num=1;
                }
            else{
                if(num==1){
                    num=1;
                }else if(num==0){
                    num=0;
                }
            }
        }
        printf("\n");
    }
    return 0;
    }
}