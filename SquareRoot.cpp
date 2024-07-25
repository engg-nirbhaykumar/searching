int squareRoot(int x){
   int low = 1 , high = x , ans = -1;
   while(low <= high){
    int mid = (low + high) / 2;
    if(mid * mid == x){
        return mid;
    } 
    else if (mid * mid < x){
        low = mid + 1;
        ans = mid;
    }
    else {
        high = mid - 1;
    }
   }
   return ans;
}