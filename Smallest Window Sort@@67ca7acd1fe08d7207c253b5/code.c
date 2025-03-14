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
            if(brr[j]<brr[smallestidx]){
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
    int left = 0, right = n-1;   // find first and last mismatch
    while(left<n && arr[left]==brr[left]){
        left++;
    }
    while(right>left && arr[right]==brr[right]){
        right--;
    }
    if(left>=right) return 0;
    else return right-left+1;
}