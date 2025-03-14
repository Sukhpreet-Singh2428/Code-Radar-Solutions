int findOccurrence(int arr[],int n,int target,char mode){
    if(mode=='F'){
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                return i;
            }else return -1;
        }
    }else{
        int idx = 0;
        for(int i=n-1;i>=0;i--){
            if(arr[i]==target){
                idx = i;
                break;
            }
        }
        return idx;
    }
}