class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       map<char, int> mpp;
       int left = 0;
       int ans = 0;
       for(int right = 0; right < s.size(); right++){
            char c = s[right];
            if (mpp.count(c) && mpp[c] >= left){
                left = mpp[c] + 1;
            }
            mpp[c] = right;
            ans = max(ans, right - left + 1);
       } 
       return ans;
    }
};
