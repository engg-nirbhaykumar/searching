int firstOccurence(int arr[],int n,int x){
    // suppose there is no element in the array
    int result = -1;
    // linear search
    for(int i=0;i<n;i++){
        // if present , store into result and immediately break out of loop
        if(arr[i] == x){
            result = i;
            break;
        }
    }
    // return the result
    return result;
}