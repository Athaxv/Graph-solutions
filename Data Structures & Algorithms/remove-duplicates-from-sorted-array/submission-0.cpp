class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mpp;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<int> temp;
        for (const auto& p : mpp) {
            temp.push_back(p.first);
        }
        for(int i = 0; i < temp.size(); i++){
            nums[i] = temp[i];
        }
        return mpp.size();
    }
};