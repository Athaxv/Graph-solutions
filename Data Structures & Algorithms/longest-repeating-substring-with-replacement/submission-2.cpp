class Solution {
public:
int getMaxValue(const unordered_map<char, int>& mpp) {
    int maxValue = INT_MIN;
    for (const auto& p : mpp) {
        maxValue = max(maxValue, p.second);
    }
    return maxValue;
    }
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mpp;
        int maxFreq = 0;
        int i = 0;
        int ans = 0;
        for(int j = 0; j < s.size(); j++){
            mpp[s[j]]++;
            int window = j - i + 1;
            int maxFreq = getMaxValue(mpp);
            if (window - maxFreq > k){
                mpp[s[i]]--;
                i++;
            }
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
    
};
