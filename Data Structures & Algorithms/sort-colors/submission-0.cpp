class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<int> temp;
        for(const auto& it : mpp){
            int val = it.second;
            while(val){
                temp.push_back(it.first);
                val--;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = temp[i];
        }
    }
};