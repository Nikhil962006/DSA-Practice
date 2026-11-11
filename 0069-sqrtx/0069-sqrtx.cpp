class Solution {
public:
    int mySqrt(int x) {
  
    int lo = 0 ;
    int hi = x ;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2 ;
        long long m = mid ;
        long long y = x ;
        if ((m*m) == y) return mid ;
         if ((m*m) < y) lo = mid+1;
         if ((m*m) > y) hi = mid-1 ;
    }
        return hi ;
    }
};