void swap(int* i,int* j){
    int temp = *i;
    *i = *j;
    *j = temp;
    return;
}
void selectionsort(int brr[],int n){
    for(int i=0;i<n;i++){
        int smallestidx = i;
        for(int j=i+1;j<n;j++){
            if(brr[j]<smallestidx){
                smallestidx = j;
            }
        }
        swap(&brr[i],&brr[smallestidx]);
    }
    return;
}
int findUnsortedSubarray(int arr[],int n){
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i] = arr[i];
    }
    selectionsort(brr,n);
    int count = 0;
    for(int i=0;i<n;i++){
        if(brr[i]!=arr[i]){
            count++;
        }
    }
    return count;
}