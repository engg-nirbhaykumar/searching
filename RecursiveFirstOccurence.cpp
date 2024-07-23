int firstOccurence(int arr[],int low,int high,int x){
    if(low > high) return -1;
    int mid = (low + high) / 2;
    // x is less than mid -> go left half 
    if(arr[mid] > x){
        return firstOccurence(arr,low,mid-1,x);
    }
    // x is greater than mid -> go right half
    else if (arr[mid] < x){
        return firstOccurence(arr,mid+1,high,x);
    }
    // x is equal to mid , check for first occurence
    else {
        // special case when mid is 0 , 
        // then checking for mid-1 can give arrayIndexOutOfBound Exception
        if(mid == 0 || arr[mid-1] != arr[mid]){
            return arr[mid];
        }
        else {
            return firstOccurence(arr,low,mid-1,x);
        }
    }
}