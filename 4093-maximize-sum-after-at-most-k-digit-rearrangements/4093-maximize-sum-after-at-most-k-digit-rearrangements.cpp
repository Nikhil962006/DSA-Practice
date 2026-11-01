class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        
        vector<pair<long long, int>> gains;

        long long sum = 0;

        for(int x : nums) {
            
            sum += x;

            string s = to_string(x);

            sort(s.begin(), s.end(), greater<char>());

            long long maxi = stoll(s);

            long long gain = maxi - x;

            gains.push_back({gain, x});
        }

        sort(gains.rbegin(), gains.rend());

        for(int i = 0; i < k; i++) {
            sum += gains[i].first;
        }

        return sum;
    }
};
