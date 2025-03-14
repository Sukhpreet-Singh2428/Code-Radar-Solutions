void swap(char* i,char* j){
    char temp = *i;
    *i = *j;
    *j = temp;
    return;
}
void selectionSort(char arr[],int n){
    for(int i=0;i<n;i++){
        int smallestIdx = i;
        for(int j=i+1;i<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(&arr[i],&arr[smallestIdx]);
    }
    return;
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
    return;
}