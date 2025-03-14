void swap(char i[],char j[]){
    char temp[100];
    strcpy(temp,i);
    strcpy(i,j);
    strcpy(j,temp);
}
void selectionSort(char arr[][100],int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(strcmp(arr[j],arr[smallestIdx])<0){  // compare string strcmp(s1,s1)<0 means s1 comes before s2
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}
void printArray(char arr[][100], int n){
    for(int i=0;i<n;i++){
        printf("%s ",arr[i]);
    }
}