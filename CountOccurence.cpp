int countOccurence(int arr[],int x,int n){
    // get the first occurence using binary search
    int first = firstOccurence(arr,x,n); 
    // if element is not there -> first will be -1
    if(first == -1) return 0;
    else {
        // totalOccurence =  lastOccurence - firstOccurence + 1
        return (lastOccurence(arr,x,n) - first + 1);
    }
}