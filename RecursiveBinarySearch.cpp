int binarySearch(int arr[],int low,int high,int x){
    //base case
    if(low > high) return -1;
    // mid 
    int mid = (low + high) / 2;
    // equal
    if(arr[mid] == x)
     return mid;
    // less than
    else if(arr[mid] > x)
     return binarySearch(arr,low,mid-1,x);
    // greater than
    else
     return binarySearch(arr,mid+1,high,x);
}