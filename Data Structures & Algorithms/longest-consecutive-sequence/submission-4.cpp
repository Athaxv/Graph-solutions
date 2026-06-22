class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> mpp;
        if (nums.empty()){
            return 0;
        }
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        int set = mpp.begin()->first;
        int ans = 0;
        int count = 0;
        for(const auto& p : mpp){
            if (p.first == set + 1){
                set = p.first;
                count++;
            }
            else if (p.first != set + 1){
                ans = max(ans, count);
                count = 0;
                set = p.first;
            }
        }
        return max(ans, count) + 1;
    }
};
