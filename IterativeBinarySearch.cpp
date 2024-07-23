int binarySearch(int arr[],int n,int x){
    int low = 0,high = n-1;
    // base case for while loop
    while(low <= high){
        int mid = (low + high)/2;
        // equal
        if(arr[mid] == x) return mid; 
        // smaller
        else if(arr[mid] > x) high = n-1;
        // greater
        else low = mid + 1;
    }
    // Not found
    return -1;
}