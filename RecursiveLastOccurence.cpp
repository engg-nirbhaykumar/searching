int lastOccurence(int arr[],int low,int high,int x){
    if(low > high) return -1;
    int mid = (low + high) / 2;
    // less than middle element
    if(arr[mid] > x){
        return lastOccurence(arr,low,mid-1,x);
    }
    // greater than middle element
    else if(arr[mid] < x){
        return lastOccurence(arr,mid+1,high,x);
    }
    // isEqual to middle element , check for last occurence
    else{
        // last element Or check mid != mid+1 element
        if(mid == n-1 || arr[mid] != arr[mid+1]){
            return arr[mid];
        }
        // if equal check for right half
        else {
            return lastOccurence(arr,mid+1,high,x);
        }
    }
}