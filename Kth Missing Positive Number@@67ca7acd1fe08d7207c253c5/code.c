int findKthMissing(int arr[], int n, int k) {
    int missingCount = 0, curr = 1, i = 0;
    while (missingCount < k) {
        if (i < n && arr[i] == curr) {
            i++;  // Move to next array element
        } else {
            missingCount++;  // Found a missing number
            if (missingCount == k) return curr;
        }
        curr++;  // Check the next number
    }
    return -1;
}
//arr[5] = {2,3,4,7,11} , k=5 : output=9 
// this is little different from smallest Missing Positive integer but now we have to tell the particular
// kth missing number the i.e, the 5 missing number in the example array is 9 so output is 9.