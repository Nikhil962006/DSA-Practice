
class Solution {
public:
    int compress(vector<char>& chars) {
        int count = 1;
        string s;

        int n = chars.size();

        for (int i = 1; i < n; i++) {
            if (chars[i-1] == chars[i]) {
                count++;
            }
            else {
                s.push_back(chars[i-1]);

                if (count > 1) {
                    string p = to_string(count);
                    s += p;
                }

                count = 1;
            }
        }

        // Process the last group
        s.push_back(chars[n-1]);

        if (count > 1) {
            string p = to_string(count);
            s += p;
        }

        // Copy compressed string into chars
        for (int i = 0; i < s.length(); i++) {
            chars[i] = s[i];
        }

        // Remove remaining elements
        int r = chars.size() - s.length();

        while (r > 0) {
            chars.pop_back();
            r--;
        }

        return chars.size();
    }
};
