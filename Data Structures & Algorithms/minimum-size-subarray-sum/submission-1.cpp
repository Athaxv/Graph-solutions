class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans = INT_MAX;
        int count = 0;
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            count += nums[i];
            if (count >= target){
                while(count >= target && i >= j){
                    ans = min(ans, i - j + 1);
                    count -= nums[j];
                    j++;
                }
            }
        }
        if (ans == INT_MAX){
            return 0;
        }
        return ans;
    }
};