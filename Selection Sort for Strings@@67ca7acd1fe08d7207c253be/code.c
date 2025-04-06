void swap(char* i, char* j){
    char temp = *i;
    *i = *j;
    *j = temp;
}
void selectionSort(char* arr, int n){
    for(int i=0;i<n;i++){
        int smallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(&arr[i],&arr[smallestIdx]);
    }
}
void printArray(char* arr, int n){
    for(int i=0;i<n;i++){
        puts(i);
    }
}