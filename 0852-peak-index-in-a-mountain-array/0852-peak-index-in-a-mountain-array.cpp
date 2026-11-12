class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        int n = arr.size(); 
        int lo = 0 ;
        int hi = n-1 ;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2 ;
            if((mid != 0) && (mid != n-1)){
            if(( arr[mid-1] < arr[mid] ) && (arr[mid] > arr[mid+1])) return mid ;
            
            if((arr[mid-1] < arr[mid]) && (arr[mid] < arr[mid+1])) lo = mid ;

             if((arr[mid-1] > arr[mid]) &&( arr[mid] > arr[mid+1])) hi = mid ;
            }
        }

        return -1 ;
    }
};