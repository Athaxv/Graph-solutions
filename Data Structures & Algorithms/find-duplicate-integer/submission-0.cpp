class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(const auto &p : mpp){
            if (p.second > 1) {
                return p.first;
            }
        }
        return -1;
    }
};
