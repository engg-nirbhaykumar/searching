int countOnes(int arr[],int n){
    int low = 0 , high = n-1;
    while(low <= high){
        int mid =  (low + high) / 2;
        // mid can be 0 Or 1
        // if mid id 0 -> go right half
        if(arr[mid] == 0){
            low = mid+1;
        }
        else{
            // check if first element Or first ocurence of 1
            if(mid == 0 || arr[mid-1] != 1){
                return (n - mid + 1); // total number 1
            }
            // else go left half
            else{
                high = mid-1;
            }
        }
    }
    return 0;
}