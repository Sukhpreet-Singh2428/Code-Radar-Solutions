void swap(char* i,char* j){
    char temp = *i;
    *i = *j;
    *j = temp;
    return;
}
void bubbleSort(char arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
    return;
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    return;
}