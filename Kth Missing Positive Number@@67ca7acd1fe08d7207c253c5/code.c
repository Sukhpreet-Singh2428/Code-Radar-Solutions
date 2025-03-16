int findKthMissing(int arr[],int n,int k){
    int smallest = arr[0];  // smallest positive number possible is 1 but in this question we have to tell at particular kth element.
    for(int i=0;i<k-1;i++){
        if(arr[i]==smallest) smallest++;
    }
    return smallest;
}