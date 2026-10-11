class Solution {
public:
    int longestContinuousSubstring(string s) {
        int count =1 ;
        int max = 0 ;

        for(int i =0 ; i<s.length() ; i++){
         int ascii = (int) s[i];
         if(s[i+1] == ascii+1 ){
            count++;
        }
            else count = 1;

        if(max < count) max = count ;
        }

        return max ;
    }
};