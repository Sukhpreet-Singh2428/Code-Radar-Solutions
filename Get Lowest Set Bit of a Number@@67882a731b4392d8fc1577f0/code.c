#include<stdio.h>
int main(){
    int num,n;
    scanf("%d %d", &num,&n);
    printf("%d", num & (-num)); 
    return 0;
}