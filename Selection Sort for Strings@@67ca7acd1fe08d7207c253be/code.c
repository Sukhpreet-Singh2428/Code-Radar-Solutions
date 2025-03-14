void swap(char i[],char j[]){
    char temp[100];
    strncpy(temp,i);
    strncpy(i,j);
    strncpy(j,temp);
}
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[smallestIdx])<0){  // compare string strcmp(s1,s1)<0 means s1 comes before s2
                smallestIdx = j;
            }
        }
        if(smallestIdx != i) swap(arr[i],arr[smallestIdx]);
    }
}
void printArray(char arr[][100], int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}