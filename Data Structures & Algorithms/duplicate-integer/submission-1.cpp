class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> temp;
        for(int i = 0; i < n; i++){
            auto res = temp.insert({nums[i], 0});
            if (!res.second){
                return true;
            }
        }
        return false;
    }
};